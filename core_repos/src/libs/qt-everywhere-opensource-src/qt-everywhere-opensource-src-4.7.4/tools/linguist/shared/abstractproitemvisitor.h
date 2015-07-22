/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Linguist of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef ABSTRACTPROITEMVISITOR
#define ABSTRACTPROITEMVISITOR

#include "proitems.h"

QT_BEGIN_NAMESPACE

struct AbstractProItemVisitor
{
    virtual ~AbstractProItemVisitor() {}

    virtual ProItem::ProItemReturn visitBeginProBlock(ProBlock *block) = 0;
    virtual void visitEndProBlock(ProBlock *block) = 0;

    virtual ProItem::ProItemReturn visitProLoopIteration() = 0;
    virtual void visitProLoopCleanup() = 0;

    virtual void visitBeginProVariable(ProVariable *variable) = 0;
    virtual void visitEndProVariable(ProVariable *variable) = 0;

    virtual ProItem::ProItemReturn visitBeginProFile(ProFile *value) = 0;
    virtual ProItem::ProItemReturn visitEndProFile(ProFile *value) = 0;

    virtual void visitProValue(ProValue *value) = 0;
    virtual ProItem::ProItemReturn visitProFunction(ProFunction *function) = 0;
    virtual void visitProOperator(ProOperator *function) = 0;
    virtual void visitProCondition(ProCondition *function) = 0;
};

QT_END_NAMESPACE

#endif // ABSTRACTPROITEMVISITOR

