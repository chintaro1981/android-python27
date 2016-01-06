/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
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

#line 208 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 40 "sipQtGuiQVector0600QPair24000100QColor.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 44 "sipQtGuiQVector0600QPair24000100QColor.cpp"


extern "C" {static void assign_QVector_0600QPair_2400_0100QColor(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0600QPair_2400_0100QColor(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QPair<qreal,QColor> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QPair<qreal,QColor> > *>(sipSrc);
}


extern "C" {static void *array_QVector_0600QPair_2400_0100QColor(SIP_SSIZE_T);}
static void *array_QVector_0600QPair_2400_0100QColor(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QPair<qreal,QColor> >[sipNrElem];
}


extern "C" {static void *copy_QVector_0600QPair_2400_0100QColor(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0600QPair_2400_0100QColor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QPair<qreal,QColor> >(reinterpret_cast<const QVector<QPair<qreal,QColor> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0600QPair_2400_0100QColor(void *, int);}
static void release_QVector_0600QPair_2400_0100QColor(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QPair<qreal,QColor> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0600QPair_2400_0100QColor(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0600QPair_2400_0100QColor(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QPair<qreal,QColor> > **sipCppPtr = reinterpret_cast<QVector<QPair<qreal,QColor> > **>(sipCppPtrV);

#line 241 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
        {
            PyObject *tup = PyList_GET_ITEM(sipPy, i);

            if (PyTuple_Size(tup) != 2)
                return 0;

            if (!sipCanConvertToType(PyTuple_GET_ITEM(tup, 1), sipType_QColor, SIP_NOT_NONE))
                return 0;
        }

        return 1;
    }

    QVector<QPair<qreal, QColor> > *qv = new QVector<QPair<qreal, QColor> >;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        PyObject *tup = PyList_GET_ITEM(sipPy, i);
        int state;
        QColor *s;
        QPair<qreal, QColor> p;

        p.first = PyFloat_AsDouble(PyTuple_GET_ITEM(tup, 0));

        s = reinterpret_cast<QColor *>(sipConvertToType(PyTuple_GET_ITEM(tup, 1), sipType_QColor, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(s, sipType_QColor, state);

            delete qv;
            return 0;
        }

        p.second = *s;

        qv->append(p);

        sipReleaseType(s, sipType_QColor, state);
    }

    *sipCppPtr = qv;

    return sipGetState(sipTransferObj);
#line 136 "sipQtGuiQVector0600QPair24000100QColor.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0600QPair_2400_0100QColor(void *, PyObject *);}
static PyObject *convertFrom_QVector_0600QPair_2400_0100QColor(void *sipCppV,PyObject *sipTransferObj)
{
   QVector<QPair<qreal,QColor> > *sipCpp = reinterpret_cast<QVector<QPair<qreal,QColor> > *>(sipCppV);

#line 213 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<qreal, QColor> &p = sipCpp->at(i);
        QColor *pt = new QColor(p.second);
        PyObject *pobj;

        if ((pobj = sipBuildResult(NULL, "(dN)", p.first, pt, sipType_QColor, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete pt;

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 171 "sipQtGuiQVector0600QPair24000100QColor.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0600QPair_2400_0100QColor = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_8410,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0600QPair_2400_0100QColor,
    array_QVector_0600QPair_2400_0100QColor,
    copy_QVector_0600QPair_2400_0100QColor,
    release_QVector_0600QPair_2400_0100QColor,
    convertTo_QVector_0600QPair_2400_0100QColor,
    convertFrom_QVector_0600QPair_2400_0100QColor
};
