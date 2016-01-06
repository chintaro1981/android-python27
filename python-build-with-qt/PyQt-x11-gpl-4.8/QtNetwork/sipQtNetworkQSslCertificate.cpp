/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:29 2012
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

#include "sipAPIQtNetwork.h"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qsslcertificate.sip"
#include <qsslcertificate.h>
#line 39 "sipQtNetworkQSslCertificate.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 43 "sipQtNetworkQSslCertificate.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 46 "sipQtNetworkQSslCertificate.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 49 "sipQtNetworkQSslCertificate.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 52 "sipQtNetworkQSslCertificate.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "sipQtNetworkQSslCertificate.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 58 "sipQtNetworkQSslCertificate.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qsslkey.sip"
#include <qsslkey.h>
#line 61 "sipQtNetworkQSslCertificate.cpp"
#line 343 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 64 "sipQtNetworkQSslCertificate.cpp"
#line 89 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qsslcertificate.sip"
#include <QtCore/qmap.h>
#include <QtCore/qstring.h>
#include <QtNetwork/qssl.h>
#line 69 "sipQtNetworkQSslCertificate.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcryptographichash.sip"
#include <qcryptographichash.h>
#line 72 "sipQtNetworkQSslCertificate.cpp"


extern "C" {static PyObject *meth_QSslCertificate_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_clear(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_clear, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_version(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_version(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->version());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_version, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_serialNumber(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_serialNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->serialNumber());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_serialNumber, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_digest(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_digest(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QCryptographicHash::Algorithm a0 = QCryptographicHash::Md5;
        QSslCertificate *sipCpp;

        static const char *sipKwdList[] = {
            sipName_algorithm,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QSslCertificate, &sipCpp, sipType_QCryptographicHash_Algorithm, &a0))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->digest(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_digest, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_issuerInfo(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_issuerInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate::SubjectInfo a0;
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSslCertificate, &sipCpp, sipType_QSslCertificate_SubjectInfo, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->issuerInfo(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslCertificate, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->issuerInfo(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_issuerInfo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_subjectInfo(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_subjectInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate::SubjectInfo a0;
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSslCertificate, &sipCpp, sipType_QSslCertificate_SubjectInfo, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->subjectInfo(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QByteArray * a0;
        int a0State = 0;
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslCertificate, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->subjectInfo(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_subjectInfo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_alternateSubjectNames(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_alternateSubjectNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QMultiMap<QSsl::AlternateNameEntryType,QString> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMultiMap<QSsl::AlternateNameEntryType,QString>(sipCpp->alternateSubjectNames());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMultiMap_0100QSsl_AlternateNameEntryType_0100QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_alternateSubjectNames, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_effectiveDate(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_effectiveDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->effectiveDate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_effectiveDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_expiryDate(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_expiryDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->expiryDate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_expiryDate, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_publicKey(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_publicKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QSslKey *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslKey(sipCpp->publicKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslKey,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_publicKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_toPem(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_toPem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->toPem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_toPem, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_toDer(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_toDer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->toDer());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_toDer, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_fromPath(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_fromPath(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QSsl::EncodingFormat a1 = QSsl::Pem;
        QRegExp::PatternSyntax a2 = QRegExp::FixedString;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
            sipName_syntax,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|EE", sipType_QString,&a0, &a0State, sipType_QSsl_EncodingFormat, &a1, sipType_QRegExp_PatternSyntax, &a2))
        {
            QList<QSslCertificate> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCertificate>(QSslCertificate::fromPath(*a0,a1,a2));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_fromPath, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_fromDevice(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_fromDevice(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice * a0;
        QSsl::EncodingFormat a1 = QSsl::Pem;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8|E", sipType_QIODevice, &a0, sipType_QSsl_EncodingFormat, &a1))
        {
            QList<QSslCertificate> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCertificate>(QSslCertificate::fromDevice(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_fromDevice, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_fromData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_fromData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        QSsl::EncodingFormat a1 = QSsl::Pem;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QByteArray, &a0, &a0State, sipType_QSsl_EncodingFormat, &a1))
        {
            QList<QSslCertificate> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCertificate>(QSslCertificate::fromData(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_fromData, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSslCertificate_handle(PyObject *, PyObject *);}
static PyObject *meth_QSslCertificate_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslCertificate *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCertificate, &sipCpp))
        {
            Qt::HANDLE sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->handle();
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCertificate, sipName_handle, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QSslCertificate___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslCertificate___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslCertificate *sipCpp = reinterpret_cast<QSslCertificate *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslCertificate));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslCertificate * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslCertificate, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslCertificate::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSslCertificate,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSslCertificate___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslCertificate___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslCertificate *sipCpp = reinterpret_cast<QSslCertificate *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslCertificate));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslCertificate * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslCertificate, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslCertificate::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSslCertificate,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSslCertificate(void *, const sipTypeDef *);}
static void *cast_QSslCertificate(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSslCertificate)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslCertificate(void *, int);}
static void release_QSslCertificate(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSslCertificate *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSslCertificate(void *, SIP_SSIZE_T, const void *);}
static void assign_QSslCertificate(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSslCertificate *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSslCertificate *>(sipSrc);
}


extern "C" {static void *array_QSslCertificate(SIP_SSIZE_T);}
static void *array_QSslCertificate(SIP_SSIZE_T sipNrElem)
{
    return new QSslCertificate[sipNrElem];
}


extern "C" {static void *copy_QSslCertificate(const void *, SIP_SSIZE_T);}
static void *copy_QSslCertificate(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSslCertificate(reinterpret_cast<const QSslCertificate *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslCertificate(sipSimpleWrapper *);}
static void dealloc_QSslCertificate(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSslCertificate(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QSslCertificate(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSslCertificate(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSslCertificate *sipCpp = 0;

    {
        QIODevice * a0;
        QSsl::EncodingFormat a1 = QSsl::Pem;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|E", sipType_QIODevice, &a0, sipType_QSsl_EncodingFormat, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCertificate(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QByteArray& a0def = QByteArray();
        const QByteArray * a0 = &a0def;
        int a0State = 0;
        QSsl::EncodingFormat a1 = QSsl::Pem;

        static const char *sipKwdList[] = {
            sipName_data,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1E", sipType_QByteArray, &a0, &a0State, sipType_QSsl_EncodingFormat, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCertificate(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        const QSslCertificate * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSslCertificate, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCertificate(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslCertificate[] = {
    {(void *)slot_QSslCertificate___ne__, ne_slot},
    {(void *)slot_QSslCertificate___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslCertificate[] = {
    {SIP_MLNAME_CAST(sipName_alternateSubjectNames), meth_QSslCertificate_alternateSubjectNames, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QSslCertificate_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_digest), (PyCFunction)meth_QSslCertificate_digest, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_effectiveDate), meth_QSslCertificate_effectiveDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_expiryDate), meth_QSslCertificate_expiryDate, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fromData), (PyCFunction)meth_QSslCertificate_fromData, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_fromDevice), (PyCFunction)meth_QSslCertificate_fromDevice, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_fromPath), (PyCFunction)meth_QSslCertificate_fromPath, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_handle), meth_QSslCertificate_handle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSslCertificate_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSslCertificate_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_issuerInfo), meth_QSslCertificate_issuerInfo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_publicKey), meth_QSslCertificate_publicKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_serialNumber), meth_QSslCertificate_serialNumber, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_subjectInfo), meth_QSslCertificate_subjectInfo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toDer), meth_QSslCertificate_toDer, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toPem), meth_QSslCertificate_toPem, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_version), meth_QSslCertificate_version, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSslCertificate[] = {
    {sipName_CommonName, QSslCertificate::CommonName, 87},
    {sipName_CountryName, QSslCertificate::CountryName, 87},
    {sipName_LocalityName, QSslCertificate::LocalityName, 87},
    {sipName_Organization, QSslCertificate::Organization, 87},
    {sipName_OrganizationalUnitName, QSslCertificate::OrganizationalUnitName, 87},
    {sipName_StateOrProvinceName, QSslCertificate::StateOrProvinceName, 87},
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QSslCertificate = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSslCertificate,
        {0}
    },
    {
        sipNameNr_QSslCertificate,
        {0, 0, 1},
        18, methods_QSslCertificate,
        6, enummembers_QSslCertificate,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSslCertificate,
    init_QSslCertificate,
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
    dealloc_QSslCertificate,
    assign_QSslCertificate,
    array_QSslCertificate,
    copy_QSslCertificate,
    release_QSslCertificate,
    cast_QSslCertificate,
    0,
    0,
    0
},
    0,
    0,
    0
};
