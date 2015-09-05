/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qisciicodec_p.h"
#include "qlist.h"

#ifndef QT_NO_CODECS

QT_BEGIN_NAMESPACE

/*!
    \class QIsciiCodec
    \brief The QIsciiCodec class provides conversion to and from the ISCII encoding.

    \internal
*/
QIsciiCodec::~QIsciiCodec()
{
}

QByteArray QIsciiCodec::name() const
{
  return v_CodecData[idx].name;
}

int QIsciiCodec::mibEnum() const
{
    /* There is no MIBEnum for Iscii */
    return -3000-idx;
}

QByteArray QIsciiCodec::convertFromUnicode(const QChar *uc, int len, ConverterState *state) const
{
    char replacement = '?';
    bool halant = false;
    if (state) {
        if (state->flags & ConvertInvalidToNull)
            replacement = 0;
        halant = state->state_data[0];
    }
    int invalid = 0;

    QByteArray result(2 * len, Qt::Uninitialized); //worst case

    uchar *ch = reinterpret_cast<uchar *>(result.data());

    const int base = v_CodecData[idx].base;

    for (int i =0; i < len; ++i) {
        const ushort codePoint = uc[i].unicode();

        /* The low 7 bits of ISCII is plain ASCII. However, we go all the
         * way up to 0xA0 such that we can roundtrip with convertToUnicode()'s
         * behavior. */
        if(codePoint < 0xA0) {
            *ch++ = static_cast<uchar>(codePoint);
            continue;
        }

        const int pos = codePoint - base;
        if (pos > 0 && pos < 0x80) {
            uchar iscii = v_uni_to_iscii_tableData[pos];
            if (iscii > 0x80) {
                *ch++ = iscii;
            } else if (iscii) {
                const uchar *pair = &(v_uni_to_iscii_pairsData + (2*iscii));
                *ch++ = *pair++;
                *ch++ = *pair++;
            } else {
                *ch++ = replacement;
                ++invalid;
            }
        } else {
            if (uc[i].unicode() == 0x200c) { // ZWNJ
                if (halant)
                    // Consonant Halant ZWNJ -> Consonant Halant Halant
                    *ch++ = 0xe8;
            } else if (uc[i].unicode() == 0x200d) { // ZWJ
                if (halant)
                    // Consonant Halant ZWJ -> Consonant Halant Nukta
                    *ch++ = 0xe9;
            } else {
                *ch++ = replacement;
                ++invalid;
            }
        }
        halant = (pos == 0x4d);
    }
    result.truncate(ch - (uchar *)result.data());

    if (state) {
        state->invalidChars += invalid;
        state->state_data[0] = halant;
    }
    return result;
}

QString QIsciiCodec::convertToUnicode(const char* chars, int len, ConverterState *state) const
{
    bool halant = false;
    if (state) {
        halant = state->state_data[0];
    }

    QString result(len, Qt::Uninitialized);
    QChar *uc = result.data();

    const int base = v_CodecData[idx].base;

    for (int i = 0; i < len; ++i) {
        ushort ch = (uchar) chars[i];
        if (ch < 0xa0)
            *uc++ = ch;
        else {
            uchar c = v_iscii_to_uni_tableData[ch - 0xa0];
            if (halant && (c == inv || c == 0xe9)) {
                // Consonant Halant inv -> Consonant Halant ZWJ
                // Consonant Halant Nukta -> Consonant Halant ZWJ
                *uc++ = QChar(0x200d);
            } else if (halant && c == 0xe8) {
                // Consonant Halant Halant -> Consonant Halant ZWNJ
                *uc++ = QChar(0x200c);
            } else {
                *uc++ = QChar(c+base);
            }
        }
        halant = ((uchar)chars[i] == 0xe8);
    }
    result.resize(uc - result.unicode());

    if (state) {
        state->state_data[0] = halant;
    }
    return result;
}

QT_END_NAMESPACE

#endif // QT_NO_CODECS
