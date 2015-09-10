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

#ifndef QABSTRACTEVENTDISPATCHER_H
#define QABSTRACTEVENTDISPATCHER_H

#include <QtCore/qobject.h>
#include <QtCore/qeventloop.h>
#include <vector>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Core)
// we allow for 2^24 = 8^8 = 16777216 simultaneously running timers
enum { NumberOfBuckets = 8, FirstBucketSize = 8 };

static const int BucketSize[NumberOfBuckets] =
    { 8, 64, 512, 4096, 32768, 262144, 2097152, 16777216 - 2396744 };
static const int BucketOffset[NumberOfBuckets] =
    { 0,  8,  72,  584,  4680,  37448,  299592,  2396744 };

static int FirstBucket[FirstBucketSize] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static QBasicAtomicPointer<int> timerIds[NumberOfBuckets] =
    { Q_BASIC_ATOMIC_INITIALIZER(FirstBucket),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0) };

#if defined(OS_LINUX_C++Programming)

namespace QT_BEGIN_HEADER{

namespace QT_BEGIN_NAMESPACE{

namespace QT_MODULE(Core){
// we allow for 2^24 = 8^8 = 16777216 simultaneously running timers
typedef enum class { NumberOfBuckets = 8, FirstBucketSize = 8 };

static const int BucketSize[NumberOfBuckets] =
    { 8, 64, 512, 4096, 32768, 262144, 2097152, 16777216 - 2396744 };
    vector <static const int> v_eventbucketsize(BucketSize);
    
static const int BucketOffset[NumberOfBuckets] =
    { 0,  8,  72,  584,  4680,  37448,  299592,  2396744 };
   vector <static const int> v_BucketEventOffset(BucketOffset);
static int FirstBucket[FirstBucketSize] = { 1, 2, 3, 4, 5, 6, 7, 8 };
static QBasicAtomicPointer<int> timerIds[NumberOfBuckets] =
    { Q_BASIC_ATOMIC_INITIALIZER(FirstBucket),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0),
      Q_BASIC_ATOMIC_INITIALIZER(0) };
vector <static QBasicAtomicPointer<int>> v_EvtBucketTimerID(timerIds);    
      class EventBucket{
          public:
          static inline int prepareNewValueWithSerialNumber(int , int );
          static inline int EvtbucketOffset(int);
          static inline int EvtbucketIndex(int , int);
          static inline int *EvtallocateBucket(int);
          };
      #endif

class QAbstractEventDispatcherPrivate;
class QSocketNotifier;
template <typename T1, typename T2> struct QPair;

class Q_CORE_EXPORT QAbstractEventDispatcher : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QAbstractEventDispatcher)

public:
    typedef QPair<int, int> TimerInfo;

    explicit QAbstractEventDispatcher(QObject *parent = 0);
    ~QAbstractEventDispatcher();

    static QAbstractEventDispatcher *instance(QThread *thread = 0);

    virtual bool processEvents(QEventLoop::ProcessEventsFlags flags) = 0;
    virtual bool hasPendingEvents() = 0;

    virtual void registerSocketNotifier(QSocketNotifier *notifier) = 0;
    virtual void unregisterSocketNotifier(QSocketNotifier *notifier) = 0;

    int registerTimer(int interval, QObject *object);
    virtual void registerTimer(int timerId, int interval, QObject *object) = 0;
    virtual bool unregisterTimer(int timerId) = 0;
    virtual bool unregisterTimers(QObject *object) = 0;
    virtual QList<TimerInfo> registeredTimers(QObject *object) const = 0;

    virtual void wakeUp() = 0;
    virtual void interrupt() = 0;
    virtual void flush() = 0;

    virtual void startingUp();
    virtual void closingDown();

    typedef bool(*EventFilter)(void *message);
    EventFilter setEventFilter(EventFilter filter);
    bool filterEvent(void *message);

Q_SIGNALS:
    void aboutToBlock();
    void awake();

protected:
    QAbstractEventDispatcher(QAbstractEventDispatcherPrivate &,
                             QObject *parent);
};

QT_END_NAMESPACE

QT_END_HEADER
#if defined(OS_LINUX_C++Programming)
} //QT_END_NAMESPACE
} //QT_END_HEADER
#endif
#endif // QABSTRACTEVENTDISPATCHER_H
