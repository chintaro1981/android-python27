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

#line 118 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 39 "sipQtGuiQFontMetricsF.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 43 "sipQtGuiQFontMetricsF.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 46 "sipQtGuiQFontMetricsF.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 49 "sipQtGuiQFontMetricsF.cpp"
#line 158 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 52 "sipQtGuiQFontMetricsF.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "sipQtGuiQFontMetricsF.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 58 "sipQtGuiQFontMetricsF.cpp"
#line 98 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 61 "sipQtGuiQFontMetricsF.cpp"
#line 77 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 64 "sipQtGuiQFontMetricsF.cpp"


extern "C" {static PyObject *meth_QFontMetricsF_ascent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ascent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_ascent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_descent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->descent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_descent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_height(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_height, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_leading(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_leading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leading();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_leading, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_lineSpacing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_lineSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineSpacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_lineSpacing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_minLeftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_minLeftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minLeftBearing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_minLeftBearing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_minRightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_minRightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minRightBearing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_minRightBearing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_maxWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_maxWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_maxWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_xHeight(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_xHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xHeight();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_xHeight, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_inFont(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_inFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inFont(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_inFont, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_leftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_leftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leftBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_leftBearing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_rightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_rightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rightBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_rightBearing, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_widthChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_widthChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_widthChar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_width(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_width, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_boundingRectChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_boundingRectChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRectF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_boundingRectChar, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_boundingRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_boundingRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRectF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRectF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        const QRectF * a0;
        int a1;
        const QString * a2;
        int a2State = 0;
        int a3 = 0;
        PyObject * a4 = 0;
        QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9iJ1|iN", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QRectF, &a0, &a1, sipType_QString,&a2, &a2State, &a3, &PyList_Type, &a4))
        {
            QRectF *sipRes = 0;

#line 149 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a4);
        
        sipRes = new QRectF(sipCpp->boundingRect(*a0, a1, *a2, a3, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 581 "sipQtGuiQFontMetricsF.cpp"
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_boundingRect, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_size(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_size(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QString * a1;
        int a1State = 0;
        int a2 = 0;
        PyObject * a3 = 0;
        QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ1|iN", &sipSelf, sipType_QFontMetricsF, &sipCpp, &a0, sipType_QString,&a1, &a1State, &a2, &PyList_Type, &a3))
        {
            QSizeF *sipRes = 0;

#line 159 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a3);
        
        sipRes = new QSizeF(sipCpp->size(a0, *a1, a2, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 626 "sipQtGuiQFontMetricsF.cpp"
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_underlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_underlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->underlinePos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_underlinePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_overlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_overlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->overlinePos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_overlinePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_strikeOutPos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_strikeOutPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->strikeOutPos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_strikeOutPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_lineWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_lineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_lineWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_averageCharWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_averageCharWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->averageCharWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_averageCharWidth, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_elidedText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_elidedText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        Qt::TextElideMode a1;
        qreal a2;
        int a3 = 0;
        QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1Ed|i", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State, sipType_Qt_TextElideMode, &a1, &a2, &a3))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->elidedText(*a0,a1,a2,a3));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_elidedText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_tightBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_tightBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRectF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->tightBoundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_tightBoundingRect, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QFontMetricsF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetricsF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetricsF *sipCpp = reinterpret_cast<QFontMetricsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetricsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetricsF, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetricsF::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QFontMetricsF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFontMetricsF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetricsF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetricsF *sipCpp = reinterpret_cast<QFontMetricsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetricsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetricsF, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetricsF::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QFontMetricsF,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFontMetricsF(void *, const sipTypeDef *);}
static void *cast_QFontMetricsF(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFontMetricsF)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontMetricsF(void *, int);}
static void release_QFontMetricsF(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontMetricsF *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFontMetricsF(sipSimpleWrapper *);}
static void dealloc_QFontMetricsF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontMetricsF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QFontMetricsF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QFontMetricsF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontMetricsF *sipCpp = 0;

    {
        const QFont * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFont * a0;
        QPaintDevice * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J8", sipType_QFont, &a0, sipType_QPaintDevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontMetrics * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontMetrics, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontMetricsF * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontMetricsF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFontMetricsF[] = {
    {(void *)slot_QFontMetricsF___ne__, ne_slot},
    {(void *)slot_QFontMetricsF___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QFontMetricsF[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QFontMetricsF_ascent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_averageCharWidth), meth_QFontMetricsF_averageCharWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_boundingRect), (PyCFunction)meth_QFontMetricsF_boundingRect, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_boundingRectChar), meth_QFontMetricsF_boundingRectChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_descent), meth_QFontMetricsF_descent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_elidedText), (PyCFunction)meth_QFontMetricsF_elidedText, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_height), meth_QFontMetricsF_height, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_inFont), meth_QFontMetricsF_inFont, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_leading), meth_QFontMetricsF_leading, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_leftBearing), meth_QFontMetricsF_leftBearing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lineSpacing), meth_QFontMetricsF_lineSpacing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lineWidth), meth_QFontMetricsF_lineWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_maxWidth), meth_QFontMetricsF_maxWidth, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minLeftBearing), meth_QFontMetricsF_minLeftBearing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minRightBearing), meth_QFontMetricsF_minRightBearing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_overlinePos), meth_QFontMetricsF_overlinePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_rightBearing), meth_QFontMetricsF_rightBearing, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), (PyCFunction)meth_QFontMetricsF_size, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_strikeOutPos), meth_QFontMetricsF_strikeOutPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tightBoundingRect), meth_QFontMetricsF_tightBoundingRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_underlinePos), meth_QFontMetricsF_underlinePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_width), meth_QFontMetricsF_width, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_widthChar), meth_QFontMetricsF_widthChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_xHeight), meth_QFontMetricsF_xHeight, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontMetricsF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontMetricsF,
        {0}
    },
    {
        sipNameNr_QFontMetricsF,
        {0, 0, 1},
        24, methods_QFontMetricsF,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFontMetricsF,
    init_QFontMetricsF,
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
    dealloc_QFontMetricsF,
    0,
    0,
    0,
    release_QFontMetricsF,
    cast_QFontMetricsF,
    0,
    0,
    0
},
    0,
    0,
    0
};
