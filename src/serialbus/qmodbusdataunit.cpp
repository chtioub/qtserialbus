/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtSerialBus module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmodbusdataunit.h"

#include <QtCore/qdatastream.h>

QT_BEGIN_NAMESPACE

/*!
    \class QModBusDataUnit
    \inmodule QtSerialBus
    \since 5.6

    \brief QModBusDataUnit is a container class representing a single bit / 16 bit word in the Modbus table

    \l QModBusDataUnit can be used for read and write operations. It contains table, address of it
    in the table, and data value.
 */

/*!
    \fn QModBusDataUnit::QModBusDataUnit(QModBusDevice::ModBusTable table, int dataAddress = 0, quint16 initValue = 0)
    Constructs one unit of data in \a table. Address of the data is \a dataAddress and value of the data is \a initValue.
 */

/*!
    \fn void QModBusDataUnit::setTableType(QModBusDevice::ModBusTable table)

    Sets the \a table type.

    \sa tableType(), QModBusDevice::ModBusTable
 */

/*!
    \fn QModBusDevice::ModBusTable QModBusDataUnit::tableType() const

    Returns the type of the table.

    \sa setTableType(), QModBusDevice::ModBusTable
 */

/*!
    \fn void QModBusDataUnit::setAddress(int address)

    Sets the \a address of the data unit.

    \sa address()
 */

/*!
    \fn int QModBusDataUnit::address() const

    Returns the address of data unit in the table.

    \sa setAddress()
 */

/*!
    \fn void QModBusDataUnit::setValue(quint16 value)

    Sets the \a value of the data unit. \l{QModBusDevice::}{DiscreteInputs}
    and \l{QModBusDevice::}{Coils} tables only accept single bit
    value, so 0 is interpreted as 0 and anything else as 1.

    \sa value()
 */

/*!
    \fn quint16 QModBusDataUnit::value() const

    Returns the data in the data unit.

    \sa setValue()
 */

QT_END_NAMESPACE
