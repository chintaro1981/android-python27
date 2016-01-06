/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
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

#line 1894 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionViewItemV4.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 43 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 49 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 52 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 1014 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 58 "sipQtGuiQStyleOptionViewItemV4.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 61 "sipQtGuiQStyleOptionViewItemV4.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionViewItemV4(void *, const sipTypeDef *);}
static void *cast_QStyleOptionViewItemV4(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionViewItemV4)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionViewItemV3)->ctd_cast((QStyleOptionViewItemV3 *)(QStyleOptionViewItemV4 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItemV4(void *, int);}
static void release_QStyleOptionViewItemV4(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionViewItemV4 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItemV4(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItemV4(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItemV4 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItemV4 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItemV4(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItemV4(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItemV4[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItemV4(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItemV4(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItemV4(reinterpret_cast<const QStyleOptionViewItemV4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItemV4(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItemV4(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItemV4(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStyleOptionViewItemV4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionViewItemV4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItemV4 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItemV4 * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItemV4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItem * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItemV4[] = {{606, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItemV4[] = {
    {sipName_Beginning, QStyleOptionViewItemV4::Beginning, 610},
    {sipName_End, QStyleOptionViewItemV4::End, 610},
    {sipName_Invalid, QStyleOptionViewItemV4::Invalid, 610},
    {sipName_Middle, QStyleOptionViewItemV4::Middle, 610},
    {sipName_OnlyOne, QStyleOptionViewItemV4::OnlyOne, 610},
    {sipName_Version, QStyleOptionViewItemV4::Version, 609},
};


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_backgroundBrush(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_backgroundBrush(void *sipSelf, PyObject *)
{
    QBrush *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = &sipCpp->backgroundBrush;

    return sipConvertFromType(sipVal,sipType_QBrush, NULL);
}


extern "C" {static int varset_QStyleOptionViewItemV4_backgroundBrush(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_backgroundBrush(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QBrush *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QBrush *>(sipForceConvertToType(sipPy,sipType_QBrush,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundBrush = *sipVal;

    sipReleaseType(sipVal, sipType_QBrush, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_checkState(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_checkState(void *sipSelf, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = sipCpp->checkState;

    return sipConvertFromEnum(sipVal, sipType_Qt_CheckState);
}


extern "C" {static int varset_QStyleOptionViewItemV4_checkState(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_checkState(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = (Qt::CheckState)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checkState = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_icon(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_icon(void *sipSelf, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = &sipCpp->icon;

    return sipConvertFromType(sipVal,sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionViewItemV4_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_index(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_index(void *sipSelf, PyObject *)
{
    QModelIndex *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = &sipCpp->index;

    return sipConvertFromType(sipVal,sipType_QModelIndex, NULL);
}


extern "C" {static int varset_QStyleOptionViewItemV4_index(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_index(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QModelIndex *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QModelIndex *>(sipForceConvertToType(sipPy,sipType_QModelIndex,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->index = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_text(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_text(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionViewItemV4_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_viewItemPosition(void *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_viewItemPosition(void *sipSelf, PyObject *)
{
    QStyleOptionViewItemV4::ViewItemPosition sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = sipCpp->viewItemPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItemV4_ViewItemPosition);
}


extern "C" {static int varset_QStyleOptionViewItemV4_viewItemPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_viewItemPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItemV4::ViewItemPosition sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = (QStyleOptionViewItemV4::ViewItemPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->viewItemPosition = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItemV4[] = {
    {sipName_backgroundBrush, varget_QStyleOptionViewItemV4_backgroundBrush, varset_QStyleOptionViewItemV4_backgroundBrush, 0},
    {sipName_checkState, varget_QStyleOptionViewItemV4_checkState, varset_QStyleOptionViewItemV4_checkState, 0},
    {sipName_icon, varget_QStyleOptionViewItemV4_icon, varset_QStyleOptionViewItemV4_icon, 0},
    {sipName_index, varget_QStyleOptionViewItemV4_index, varset_QStyleOptionViewItemV4_index, 0},
    {sipName_text, varget_QStyleOptionViewItemV4_text, varset_QStyleOptionViewItemV4_text, 0},
    {sipName_viewItemPosition, varget_QStyleOptionViewItemV4_viewItemPosition, varset_QStyleOptionViewItemV4_viewItemPosition, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItemV4 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItemV4,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItemV4,
        {0, 0, 1},
        0, 0,
        6, enummembers_QStyleOptionViewItemV4,
        6, variables_QStyleOptionViewItemV4,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStyleOptionViewItemV4,
    0,
    init_QStyleOptionViewItemV4,
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
    dealloc_QStyleOptionViewItemV4,
    assign_QStyleOptionViewItemV4,
    array_QStyleOptionViewItemV4,
    copy_QStyleOptionViewItemV4,
    release_QStyleOptionViewItemV4,
    cast_QStyleOptionViewItemV4,
    0,
    0,
    0
},
    0,
    0,
    0
};
