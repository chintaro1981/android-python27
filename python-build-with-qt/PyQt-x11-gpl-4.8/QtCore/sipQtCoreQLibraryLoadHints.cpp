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

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 39 "sipQtCoreQLibraryLoadHints.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 43 "sipQtCoreQLibraryLoadHints.cpp"


extern "C" {static int slot_QLibrary_LoadHints___bool__(PyObject *);}
static int slot_QLibrary_LoadHints___bool__(PyObject *sipSelf)
{
    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQLibraryLoadHints.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLibrary::LoadHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast<QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLibrary_LoadHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLibrary::LoadHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(const_cast<QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLibrary_LoadHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___invert__(PyObject *sipSelf)
{
    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;


    {
        {
            QLibrary::LoadHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
            QLibrary::LoadHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        QLibrary::LoadHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QLibrary_LoadHints, &a0, &a0State, sipType_QLibrary_LoadHints, &a1, &a1State))
        {
            QLibrary::LoadHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);
            sipReleaseType(a1,sipType_QLibrary_LoadHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
            QLibrary::LoadHints *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QLibrary::LoadHints(*a0 ^ a1);
#line 232 "sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        QLibrary::LoadHints * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QLibrary_LoadHints, &a0, &a0State, sipType_QLibrary_LoadHints, &a1, &a1State))
        {
            QLibrary::LoadHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);
            sipReleaseType(a1,sipType_QLibrary_LoadHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLibrary_LoadHints, &a0, &a0State, &a1))
        {
            QLibrary::LoadHints *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QLibrary::LoadHints(*a0 | a1);
#line 284 "sipQtCoreQLibraryLoadHints.cpp"
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___int__(PyObject *);}
static PyObject *slot_QLibrary_LoadHints___int__(PyObject *sipSelf)
{
    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLibrary::LoadHints::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLibrary::LoadHints::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QLibrary_LoadHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLibrary::LoadHints *sipCpp = reinterpret_cast<QLibrary::LoadHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLibrary_LoadHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLibrary::LoadHints::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLibrary_LoadHints(void *, const sipTypeDef *);}
static void *cast_QLibrary_LoadHints(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLibrary_LoadHints)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibrary_LoadHints(void *, int);}
static void release_QLibrary_LoadHints(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLibrary::LoadHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QLibrary_LoadHints(void *, SIP_SSIZE_T, const void *);}
static void assign_QLibrary_LoadHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLibrary::LoadHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLibrary::LoadHints *>(sipSrc);
}


extern "C" {static void *array_QLibrary_LoadHints(SIP_SSIZE_T);}
static void *array_QLibrary_LoadHints(SIP_SSIZE_T sipNrElem)
{
    return new QLibrary::LoadHints[sipNrElem];
}


extern "C" {static void *copy_QLibrary_LoadHints(const void *, SIP_SSIZE_T);}
static void *copy_QLibrary_LoadHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLibrary::LoadHints(reinterpret_cast<const QLibrary::LoadHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *);}
static void dealloc_QLibrary_LoadHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLibrary_LoadHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLibrary_LoadHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLibrary::LoadHints *sipCpp = 0;

    {
        const QLibrary::LoadHints * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLibrary::LoadHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QLibrary::LoadHints *>(a0),sipType_QLibrary_LoadHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLibrary::LoadHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLibrary::LoadHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLibrary_LoadHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLibrary_LoadHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QLibrary::LoadHints **sipCppPtr = reinterpret_cast<QLibrary::LoadHints **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLibrary::LoadHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)) ||
            sipCanConvertToType(sipPy, sipType_QLibrary_LoadHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLibrary_LoadHint)))
{
    *sipCppPtr = new QLibrary::LoadHints(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLibrary::LoadHints *>(sipConvertToType(sipPy, sipType_QLibrary_LoadHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtCoreQLibraryLoadHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLibrary_LoadHints[] = {
    {(void *)slot_QLibrary_LoadHints___bool__, bool_slot},
    {(void *)slot_QLibrary_LoadHints___ne__, ne_slot},
    {(void *)slot_QLibrary_LoadHints___eq__, eq_slot},
    {(void *)slot_QLibrary_LoadHints___invert__, invert_slot},
    {(void *)slot_QLibrary_LoadHints___and__, and_slot},
    {(void *)slot_QLibrary_LoadHints___xor__, xor_slot},
    {(void *)slot_QLibrary_LoadHints___or__, or_slot},
    {(void *)slot_QLibrary_LoadHints___int__, int_slot},
    {(void *)slot_QLibrary_LoadHints___ixor__, ixor_slot},
    {(void *)slot_QLibrary_LoadHints___ior__, ior_slot},
    {(void *)slot_QLibrary_LoadHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QLibrary_LoadHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLibrary__LoadHints,
        {0}
    },
    {
        sipNameNr_LoadHints,
        {84, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLibrary_LoadHints,
    init_QLibrary_LoadHints,
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
    dealloc_QLibrary_LoadHints,
    assign_QLibrary_LoadHints,
    array_QLibrary_LoadHints,
    copy_QLibrary_LoadHints,
    release_QLibrary_LoadHints,
    cast_QLibrary_LoadHints,
    convertTo_QLibrary_LoadHints,
    0,
    0
},
    0,
    1,
    0
};
