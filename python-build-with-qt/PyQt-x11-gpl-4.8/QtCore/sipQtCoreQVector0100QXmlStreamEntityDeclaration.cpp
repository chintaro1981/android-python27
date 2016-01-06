/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 39 "sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp"

#line 293 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 43 "sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp"


extern "C" {static void assign_QVector_0100QXmlStreamEntityDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlStreamEntityDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QXmlStreamEntityDeclaration> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QXmlStreamEntityDeclaration> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlStreamEntityDeclaration(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlStreamEntityDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QXmlStreamEntityDeclaration>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlStreamEntityDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlStreamEntityDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QXmlStreamEntityDeclaration>(reinterpret_cast<const QVector<QXmlStreamEntityDeclaration> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlStreamEntityDeclaration(void *, int);}
static void release_QVector_0100QXmlStreamEntityDeclaration(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QXmlStreamEntityDeclaration> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QXmlStreamEntityDeclaration(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlStreamEntityDeclaration(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QXmlStreamEntityDeclaration> **sipCppPtr = reinterpret_cast<QVector<QXmlStreamEntityDeclaration> **>(sipCppPtrV);

#line 69 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamEntityDeclaration, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QXmlStreamEntityDeclaration> *qv = new QVector<QXmlStreamEntityDeclaration>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QXmlStreamEntityDeclaration *t = reinterpret_cast<QXmlStreamEntityDeclaration *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamEntityDeclaration, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QXmlStreamEntityDeclaration, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlStreamEntityDeclaration, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 120 "sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlStreamEntityDeclaration(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlStreamEntityDeclaration(void *sipCppV,PyObject *sipTransferObj)
{
   QVector<QXmlStreamEntityDeclaration> *sipCpp = reinterpret_cast<QVector<QXmlStreamEntityDeclaration> *>(sipCppV);

#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlStreamEntityDeclaration *t = new QXmlStreamEntityDeclaration(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QXmlStreamEntityDeclaration, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 154 "sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QXmlStreamEntityDeclaration = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_237,
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
    assign_QVector_0100QXmlStreamEntityDeclaration,
    array_QVector_0100QXmlStreamEntityDeclaration,
    copy_QVector_0100QXmlStreamEntityDeclaration,
    release_QVector_0100QXmlStreamEntityDeclaration,
    convertTo_QVector_0100QXmlStreamEntityDeclaration,
    convertFrom_QVector_0100QXmlStreamEntityDeclaration
};
