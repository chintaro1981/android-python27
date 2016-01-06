/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicslayout.sip"
#include <qgraphicslayout.h>
#line 39 "sipQtGuiQGraphicsLayout.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicslayoutitem.sip"
#include <qgraphicslayoutitem.h>
#line 43 "sipQtGuiQGraphicsLayout.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtGuiQGraphicsLayout.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 49 "sipQtGuiQGraphicsLayout.cpp"
#line 98 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 52 "sipQtGuiQGraphicsLayout.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQGraphicsLayout.cpp"
#line 158 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 58 "sipQtGuiQGraphicsLayout.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 61 "sipQtGuiQGraphicsLayout.cpp"


class sipQGraphicsLayout : public QGraphicsLayout
{
public:
    sipQGraphicsLayout(QGraphicsLayoutItem *);
    virtual ~sipQGraphicsLayout();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QSizeF sipProtect_sizeHint(Qt::SizeHint,const QSizeF&) const;
    void sipProtect_setGraphicsItem(QGraphicsItem *);
    void sipProtect_setOwnedByLayout(bool);
    void sipProtect_addChildLayoutItem(QGraphicsLayoutItem *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void getContentsMargins(qreal *,qreal *,qreal *,qreal *) const;
    void invalidate();
    void widgetEvent(QEvent *);
    int count() const;
    QGraphicsLayoutItem * itemAt(int) const;
    void removeAt(int);
    void updateGeometry();
    void setGeometry(const QRectF&);
    QSizeF sizeHint(Qt::SizeHint,const QSizeF&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsLayout(const sipQGraphicsLayout &);
    sipQGraphicsLayout &operator = (const sipQGraphicsLayout &);

    char sipPyMethods[9];
};

sipQGraphicsLayout::sipQGraphicsLayout(QGraphicsLayoutItem *a0): QGraphicsLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLayout::~sipQGraphicsLayout()
{
    sipCommonDtor(sipPySelf);
}

void sipQGraphicsLayout::getContentsMargins(qreal *a0,qreal *a1,qreal *a2,qreal *a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!meth)
    {
        QGraphicsLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_197(sip_gilstate_t,PyObject *,qreal *,qreal *,qreal *,qreal *);

    sipVH_QtGui_197(sipGILState,meth,a0,a1,a2,a3);
}

void sipQGraphicsLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QGraphicsLayout::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQGraphicsLayout::widgetEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_widgetEvent);

    if (!meth)
    {
        QGraphicsLayout::widgetEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

int sipQGraphicsLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QGraphicsLayout,sipName_count);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

QGraphicsLayoutItem * sipQGraphicsLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QGraphicsLayout,sipName_itemAt);

    if (!meth)
        return 0;

    extern QGraphicsLayoutItem * sipVH_QtGui_204(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_204(sipGILState,meth,a0);
}

void sipQGraphicsLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QGraphicsLayout,sipName_removeAt);

    if (!meth)
        return;

    typedef void (*sipVH_QtCore_4)(sip_gilstate_t,PyObject *,int);

    ((sipVH_QtCore_4)(sipModuleAPI_QtGui_QtCore->em_virthandlers[4]))(sipGILState,meth,a0);
}

void sipQGraphicsLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_updateGeometry);

    if (!meth)
    {
        QGraphicsLayout::updateGeometry();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQGraphicsLayout::setGeometry(const QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_setGeometry);

    if (!meth)
    {
        QGraphicsLayoutItem::setGeometry(a0);
        return;
    }

    extern void sipVH_QtGui_137(sip_gilstate_t,PyObject *,const QRectF&);

    sipVH_QtGui_137(sipGILState,meth,a0);
}

QSizeF sipQGraphicsLayout::sizeHint(Qt::SizeHint a0,const QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QGraphicsLayout,sipName_sizeHint);

    if (!meth)
        return QSizeF();

    extern QSizeF sipVH_QtGui_192(sip_gilstate_t,PyObject *,Qt::SizeHint,const QSizeF&);

    return sipVH_QtGui_192(sipGILState,meth,a0,a1);
}

QSizeF sipQGraphicsLayout::sipProtect_sizeHint(Qt::SizeHint a0,const QSizeF& a1) const
{
    return sizeHint(a0,a1);
}

void sipQGraphicsLayout::sipProtect_setGraphicsItem(QGraphicsItem *a0)
{
    QGraphicsLayoutItem::setGraphicsItem(a0);
}

void sipQGraphicsLayout::sipProtect_setOwnedByLayout(bool a0)
{
    QGraphicsLayoutItem::setOwnedByLayout(a0);
}

void sipQGraphicsLayout::sipProtect_addChildLayoutItem(QGraphicsLayoutItem *a0)
{
    QGraphicsLayout::addChildLayoutItem(a0);
}


extern "C" {static PyObject *meth_QGraphicsLayout_sizeHint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_sizeHint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        Qt::SizeHint a0;
        const QSizeF& a1def = QSizeF();
        const QSizeF * a1 = &a1def;
        sipQGraphicsLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_constraint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J9", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_Qt_SizeHint, &a0, sipType_QSizeF, &a1))
        {
            QSizeF *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_sizeHint);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizeF(sipCpp->sipProtect_sizeHint(a0,*a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_sizeHint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_setGraphicsItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setGraphicsItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem * a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setGraphicsItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setGraphicsItem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_setOwnedByLayout(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setOwnedByLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setOwnedByLayout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setOwnedByLayout, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContentsMargins(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setContentsMargins, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::getContentsMargins(&a0,&a1,&a2,&a3) : sipCpp->getContentsMargins(&a0,&a1,&a2,&a3));
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(dddd)",a0,a1,a2,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_getContentsMargins, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_activate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->activate();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_activate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_isActivated(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_isActivated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isActivated();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_isActivated, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::invalidate() : sipCpp->invalidate());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_invalidate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::widgetEvent(a0) : sipCpp->widgetEvent(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_widgetEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_count);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            QGraphicsLayoutItem *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_itemAt);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->itemAt(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_itemAt, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_removeAt);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAt(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_removeAt, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsLayout::updateGeometry() : sipCpp->updateGeometry());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_updateGeometry, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsLayoutItem * a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_addChildLayoutItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_addChildLayoutItem, NULL);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *);}
static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *sipSelf)
{
    QGraphicsLayout *sipCpp = reinterpret_cast<QGraphicsLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsLayout));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 721 "sipQtGuiQGraphicsLayout.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsLayout(void *, const sipTypeDef *);}
static void *cast_QGraphicsLayout(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsLayout)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsLayoutItem)->ctd_cast((QGraphicsLayoutItem *)(QGraphicsLayout *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsLayout(void *, int);}
static void release_QGraphicsLayout(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsLayout *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsLayout *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsLayout(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGraphicsLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsLayout *sipCpp = 0;

    {
        QGraphicsLayoutItem * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsLayout(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsLayout[] = {{176, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsLayout[] = {
    {(void *)slot_QGraphicsLayout___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGraphicsLayout[] = {
    {SIP_MLNAME_CAST(sipName_activate), meth_QGraphicsLayout_activate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_addChildLayoutItem), meth_QGraphicsLayout_addChildLayoutItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsLayout_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_getContentsMargins), meth_QGraphicsLayout_getContentsMargins, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsLayout_invalidate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isActivated), meth_QGraphicsLayout_isActivated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsLayout_itemAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsLayout_removeAt, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setContentsMargins), meth_QGraphicsLayout_setContentsMargins, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGraphicsItem), meth_QGraphicsLayout_setGraphicsItem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setOwnedByLayout), meth_QGraphicsLayout_setOwnedByLayout, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sizeHint), (PyCFunction)meth_QGraphicsLayout_sizeHint, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_updateGeometry), meth_QGraphicsLayout_updateGeometry, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widgetEvent), meth_QGraphicsLayout_widgetEvent, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsLayout = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsLayout,
        {0}
    },
    {
        sipNameNr_QGraphicsLayout,
        {0, 0, 1},
        14, methods_QGraphicsLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsLayout,
    slots_QGraphicsLayout,
    init_QGraphicsLayout,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGraphicsLayout,
    0,
    0,
    0,
    release_QGraphicsLayout,
    cast_QGraphicsLayout,
    0,
    0,
    0
},
    0,
    0,
    0
};
