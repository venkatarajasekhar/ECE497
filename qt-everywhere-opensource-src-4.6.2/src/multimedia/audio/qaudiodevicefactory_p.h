/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtMultimedia module of the Qt Toolkit.
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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#ifndef QAUDIODEVICEFACTORY_P_H
#define QAUDIODEVICEFACTORY_P_H

#include <QtCore/qglobal.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qlist.h>
#include <QtCore/qdebug.h>
#include <QtMultimedia/qaudioengine.h>
#include <QtMultimedia/qaudioengineplugin.h>
#include <private/qfactoryloader_p.h>
#include "qaudiodevicefactory_p.h"
#include <QtMultimedia/qaudiodeviceinfo.h>

QT_BEGIN_HEADER

namespace QT_BEGIN_NAMESPACE {

QT_MODULE(Multimedia)

class QAbstractAudioInput;
class QAbstractAudioOutput;
class QAbstractAudioDeviceInfo;

class QAudioDeviceFactory
{
public:
    static QList<QAudioDeviceInfo> availableDevices(QAudio::Mode mode);

    static QAudioDeviceInfo defaultInputDevice();
    static QAudioDeviceInfo defaultOutputDevice();

    static QAbstractAudioDeviceInfo* audioDeviceInfo(const QString &realm, const QByteArray &handle, QAudio::Mode mode);

    static QAbstractAudioInput* createDefaultInputDevice(QAudioFormat const &format);
    static QAbstractAudioOutput* createDefaultOutputDevice(QAudioFormat const &format);

    static QAbstractAudioInput* createInputDevice(QAudioDeviceInfo const &device, QAudioFormat const &format);
    static QAbstractAudioOutput* createOutputDevice(QAudioDeviceInfo const &device, QAudioFormat const &format);

    static QAbstractAudioInput* createNullInput();
    static QAbstractAudioOutput* createNullOutput();
};

class QNullDeviceInfo : public QAbstractAudioDeviceInfo
{
public:
    QAudioFormat preferredFormat() const { qWarning()<<"using null deviceinfo, none available"; return QAudioFormat(); }
    bool isFormatSupported(const QAudioFormat& ) const { return false; }
    QAudioFormat nearestFormat(const QAudioFormat& ) const { return QAudioFormat(); }
    QString deviceName() const { return QString(); }
    QStringList codecList() { return QStringList(); }
    QList<int> frequencyList()  { return QList<int>(); }
    QList<int> channelsList() { return QList<int>(); }
    QList<int> sampleSizeList() { return QList<int>(); }
    QList<QAudioFormat::Endian> byteOrderList() { return QList<QAudioFormat::Endian>(); }
    QList<QAudioFormat::SampleType> sampleTypeList() { return QList<QAudioFormat::SampleType>(); }
};

class QNullInputDevice : public QAbstractAudioInput
{
public:
    QIODevice* start(QIODevice* ) { qWarning()<<"using null input device, none available"; return 0; }
    void stop() {}
    void reset() {}
    void suspend() {}
    void resume() {}
    int bytesReady() const { return 0; }
    int periodSize() const { return 0; }
    void setBufferSize(int ) {}
    int bufferSize() const  { return 0; }
    void setNotifyInterval(int ) {}
    int notifyInterval() const { return 0; }
    qint64 processedUSecs() const { return 0; }
    qint64 elapsedUSecs() const { return 0; }
    QAudio::Error error() const { return QAudio::OpenError; }
    QAudio::State state() const { return QAudio::StoppedState; }
    QAudioFormat format() const { return QAudioFormat(); }
};

class QNullOutputDevice : public QAbstractAudioOutput
{
public:
    QIODevice* start(QIODevice* ) { qWarning()<<"using null output device, none available"; return 0; }
    void stop() {}
    void reset() {}
    void suspend() {}
    void resume() {}
    int bytesFree() const { return 0; }
    int periodSize() const { return 0; }
    void setBufferSize(int ) {}
    int bufferSize() const  { return 0; }
    void setNotifyInterval(int ) {}
    int notifyInterval() const { return 0; }
    qint64 processedUSecs() const { return 0; }
    qint64 elapsedUSecs() const { return 0; }
    QAudio::Error error() const { return QAudio::OpenError; }
    QAudio::State state() const { return QAudio::StoppedState; }
    QAudioFormat format() const { return QAudioFormat(); }
};

} //QT_END_NAMESPACE

QT_END_HEADER

#endif // QAUDIODEVICEFACTORY_P_H

