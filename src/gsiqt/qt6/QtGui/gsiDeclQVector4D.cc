
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQVector4D.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVector4D>
#include <QVector2D>
#include <QMatrix4x4>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVector4D

//  Constructor QVector4D::QVector4D()


static void _init_ctor_QVector4D_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector4D *> (new QVector4D ());
}


//  Constructor QVector4D::QVector4D(float xpos, float ypos, float zpos, float wpos)


static void _init_ctor_QVector4D_3556 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xpos");
  decl->add_arg<float > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ypos");
  decl->add_arg<float > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("zpos");
  decl->add_arg<float > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("wpos");
  decl->add_arg<float > (argspec_3);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_3556 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  float arg2 = gsi::arg_reader<float >() (args, heap);
  float arg3 = gsi::arg_reader<float >() (args, heap);
  float arg4 = gsi::arg_reader<float >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1, arg2, arg3, arg4));
}


//  Constructor QVector4D::QVector4D(QPoint point)


static void _init_ctor_QVector4D_1039 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<QPoint > (argspec_0);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_1039 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPoint arg1 = gsi::arg_reader<QPoint >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1));
}


//  Constructor QVector4D::QVector4D(QPointF point)


static void _init_ctor_QVector4D_1109 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<QPointF > (argspec_0);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_1109 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPointF arg1 = gsi::arg_reader<QPointF >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1));
}


//  Constructor QVector4D::QVector4D(QVector2D vector)


static void _init_ctor_QVector4D_1262 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector2D > (argspec_0);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_1262 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector2D arg1 = gsi::arg_reader<QVector2D >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1));
}


//  Constructor QVector4D::QVector4D(QVector2D vector, float zpos, float wpos)


static void _init_ctor_QVector4D_2986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector2D > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("zpos");
  decl->add_arg<float > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("wpos");
  decl->add_arg<float > (argspec_2);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_2986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector2D arg1 = gsi::arg_reader<QVector2D >() (args, heap);
  float arg2 = gsi::arg_reader<float >() (args, heap);
  float arg3 = gsi::arg_reader<float >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1, arg2, arg3));
}


//  Constructor QVector4D::QVector4D(QVector3D vector)


static void _init_ctor_QVector4D_1263 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector3D > (argspec_0);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_1263 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector3D arg1 = gsi::arg_reader<QVector3D >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1));
}


//  Constructor QVector4D::QVector4D(QVector3D vector, float wpos)


static void _init_ctor_QVector4D_2125 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector3D > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("wpos");
  decl->add_arg<float > (argspec_1);
  decl->set_return_new<QVector4D> ();
}

static void _call_ctor_QVector4D_2125 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector3D arg1 = gsi::arg_reader<QVector3D >() (args, heap);
  float arg2 = gsi::arg_reader<float >() (args, heap);
  ret.write<QVector4D *> (new QVector4D (arg1, arg2));
}


// bool QVector4D::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVector4D *)cls)->isNull ());
}


// float QVector4D::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->length ());
}


// float QVector4D::lengthSquared()


static void _init_f_lengthSquared_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_lengthSquared_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->lengthSquared ());
}


// void QVector4D::normalize()


static void _init_f_normalize_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_normalize_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector4D *)cls)->normalize ();
}


// QVector4D QVector4D::normalized()


static void _init_f_normalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector4D > ();
}

static void _call_f_normalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector4D > ((QVector4D)((QVector4D *)cls)->normalized ());
}


// QVector4D &QVector4D::operator*=(float factor)


static void _init_f_operator_star__eq__970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<float > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_star__eq__970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator*= (arg1));
}


// QVector4D &QVector4D::operator*=(QVector4D vector)


static void _init_f_operator_star__eq__1264 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector4D > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_star__eq__1264 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector4D arg1 = gsi::arg_reader<QVector4D >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator*= (arg1));
}


// QVector4D &QVector4D::operator+=(QVector4D vector)


static void _init_f_operator_plus__eq__1264 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector4D > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_plus__eq__1264 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector4D arg1 = gsi::arg_reader<QVector4D >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator+= (arg1));
}


// QVector4D &QVector4D::operator-=(QVector4D vector)


static void _init_f_operator_minus__eq__1264 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector4D > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_minus__eq__1264 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector4D arg1 = gsi::arg_reader<QVector4D >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator-= (arg1));
}


// QVector4D &QVector4D::operator/=(float divisor)


static void _init_f_operator_slash__eq__970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<float > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_slash__eq__970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator/= (arg1));
}


// QVector4D &QVector4D::operator/=(QVector4D vector)


static void _init_f_operator_slash__eq__1264 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<QVector4D > (argspec_0);
  decl->set_return<QVector4D & > ();
}

static void _call_f_operator_slash__eq__1264 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector4D arg1 = gsi::arg_reader<QVector4D >() (args, heap);
  ret.write<QVector4D & > ((QVector4D &)((QVector4D *)cls)->operator/= (arg1));
}


// float &QVector4D::operator[](int i)


static void _init_f_operator_index__767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<float & > ();
}

static void _call_f_operator_index__767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<float & > ((float &)((QVector4D *)cls)->operator[] (arg1));
}


// float QVector4D::operator[](int i)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<float > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<float > ((float)((QVector4D *)cls)->operator[] (arg1));
}


// void QVector4D::setW(float w)


static void _init_f_setW_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setW_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector4D *)cls)->setW (arg1);
}


// void QVector4D::setX(float x)


static void _init_f_setX_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector4D *)cls)->setX (arg1);
}


// void QVector4D::setY(float y)


static void _init_f_setY_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector4D *)cls)->setY (arg1);
}


// void QVector4D::setZ(float z)


static void _init_f_setZ_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("z");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setZ_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector4D *)cls)->setZ (arg1);
}


// QPoint QVector4D::toPoint()


static void _init_f_toPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_toPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QVector4D *)cls)->toPoint ());
}


// QPointF QVector4D::toPointF()


static void _init_f_toPointF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_toPointF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QVector4D *)cls)->toPointF ());
}


// QVector2D QVector4D::toVector2D()


static void _init_f_toVector2D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector2D > ();
}

static void _call_f_toVector2D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D > ((QVector2D)((QVector4D *)cls)->toVector2D ());
}


// QVector2D QVector4D::toVector2DAffine()


static void _init_f_toVector2DAffine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector2D > ();
}

static void _call_f_toVector2DAffine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D > ((QVector2D)((QVector4D *)cls)->toVector2DAffine ());
}


// QVector3D QVector4D::toVector3D()


static void _init_f_toVector3D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_toVector3D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QVector4D *)cls)->toVector3D ());
}


// QVector3D QVector4D::toVector3DAffine()


static void _init_f_toVector3DAffine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_toVector3DAffine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QVector4D *)cls)->toVector3DAffine ());
}


// float QVector4D::w()


static void _init_f_w_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_w_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->w ());
}


// float QVector4D::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->x ());
}


// float QVector4D::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->y ());
}


// float QVector4D::z()


static void _init_f_z_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_z_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QVector4D *)cls)->z ());
}


// static float QVector4D::dotProduct(QVector4D v1, QVector4D v2)


static void _init_f_dotProduct_2420 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<QVector4D > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<QVector4D > (argspec_1);
  decl->set_return<float > ();
}

static void _call_f_dotProduct_2420 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVector4D arg1 = gsi::arg_reader<QVector4D >() (args, heap);
  QVector4D arg2 = gsi::arg_reader<QVector4D >() (args, heap);
  ret.write<float > ((float)QVector4D::dotProduct (arg1, arg2));
}


//  QVector4D ::operator*(const QVector4D &vector, const QMatrix4x4 &matrix)
static QVector4D op_QVector4D_operator_star__4280u1(const QVector4D *_self, const QMatrix4x4 &matrix) {
  return operator*(*_self, matrix);
}

//  bool ::operator==(QVector4D v1, QVector4D v2)
static bool op_QVector4D_operator_eq__eq__2420(QVector4D *_self, QVector4D v2) {
  return operator==(*_self, v2);
}

//  bool ::operator!=(QVector4D v1, QVector4D v2)
static bool op_QVector4D_operator_excl__eq__2420(QVector4D *_self, QVector4D v2) {
  return operator!=(*_self, v2);
}

//  QVector4D ::operator+(QVector4D v1, QVector4D v2)
static QVector4D op_QVector4D_operator_plus__2420(QVector4D *_self, QVector4D v2) {
  return operator+(*_self, v2);
}

//  QVector4D ::operator-(QVector4D v1, QVector4D v2)
static QVector4D op_QVector4D_operator_minus__2420(QVector4D *_self, QVector4D v2) {
  return operator-(*_self, v2);
}

//  QVector4D ::operator*(QVector4D vector, float factor)
static QVector4D op_QVector4D_operator_star__2126(QVector4D *_self, float factor) {
  return operator*(*_self, factor);
}

//  QVector4D ::operator*(QVector4D v1, QVector4D v2)
static QVector4D op_QVector4D_operator_star__2420(QVector4D *_self, QVector4D v2) {
  return operator*(*_self, v2);
}

//  QVector4D ::operator-(QVector4D vector)
static QVector4D op_QVector4D_operator_minus__1264(QVector4D *_self) {
  return operator-(*_self);
}

//  QVector4D ::operator/(QVector4D vector, float divisor)
static QVector4D op_QVector4D_operator_slash__2126(QVector4D *_self, float divisor) {
  return operator/(*_self, divisor);
}

//  QVector4D ::operator/(QVector4D vector, QVector4D divisor)
static QVector4D op_QVector4D_operator_slash__2420(QVector4D *_self, QVector4D divisor) {
  return operator/(*_self, divisor);
}


namespace gsi
{

static gsi::Methods methods_QVector4D () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D()\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_0, &_call_ctor_QVector4D_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(float xpos, float ypos, float zpos, float wpos)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_3556, &_call_ctor_QVector4D_3556);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QPoint point)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_1039, &_call_ctor_QVector4D_1039);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QPointF point)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_1109, &_call_ctor_QVector4D_1109);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QVector2D vector)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_1262, &_call_ctor_QVector4D_1262);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QVector2D vector, float zpos, float wpos)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_2986, &_call_ctor_QVector4D_2986);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QVector3D vector)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_1263, &_call_ctor_QVector4D_1263);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector4D::QVector4D(QVector3D vector, float wpos)\nThis method creates an object of class QVector4D.", &_init_ctor_QVector4D_2125, &_call_ctor_QVector4D_2125);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QVector4D::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method float QVector4D::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("lengthSquared", "@brief Method float QVector4D::lengthSquared()\n", true, &_init_f_lengthSquared_c0, &_call_f_lengthSquared_c0);
  methods += new qt_gsi::GenericMethod ("normalize", "@brief Method void QVector4D::normalize()\n", false, &_init_f_normalize_0, &_call_f_normalize_0);
  methods += new qt_gsi::GenericMethod ("normalized", "@brief Method QVector4D QVector4D::normalized()\n", true, &_init_f_normalized_c0, &_call_f_normalized_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector4D &QVector4D::operator*=(float factor)\n", false, &_init_f_operator_star__eq__970, &_call_f_operator_star__eq__970);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector4D &QVector4D::operator*=(QVector4D vector)\n", false, &_init_f_operator_star__eq__1264, &_call_f_operator_star__eq__1264);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QVector4D &QVector4D::operator+=(QVector4D vector)\n", false, &_init_f_operator_plus__eq__1264, &_call_f_operator_plus__eq__1264);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QVector4D &QVector4D::operator-=(QVector4D vector)\n", false, &_init_f_operator_minus__eq__1264, &_call_f_operator_minus__eq__1264);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QVector4D &QVector4D::operator/=(float divisor)\n", false, &_init_f_operator_slash__eq__970, &_call_f_operator_slash__eq__970);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QVector4D &QVector4D::operator/=(QVector4D vector)\n", false, &_init_f_operator_slash__eq__1264, &_call_f_operator_slash__eq__1264);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method float &QVector4D::operator[](int i)\n", false, &_init_f_operator_index__767, &_call_f_operator_index__767);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method float QVector4D::operator[](int i)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  methods += new qt_gsi::GenericMethod ("setW|w=", "@brief Method void QVector4D::setW(float w)\n", false, &_init_f_setW_970, &_call_f_setW_970);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QVector4D::setX(float x)\n", false, &_init_f_setX_970, &_call_f_setX_970);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QVector4D::setY(float y)\n", false, &_init_f_setY_970, &_call_f_setY_970);
  methods += new qt_gsi::GenericMethod ("setZ|z=", "@brief Method void QVector4D::setZ(float z)\n", false, &_init_f_setZ_970, &_call_f_setZ_970);
  methods += new qt_gsi::GenericMethod ("toPoint", "@brief Method QPoint QVector4D::toPoint()\n", true, &_init_f_toPoint_c0, &_call_f_toPoint_c0);
  methods += new qt_gsi::GenericMethod ("toPointF", "@brief Method QPointF QVector4D::toPointF()\n", true, &_init_f_toPointF_c0, &_call_f_toPointF_c0);
  methods += new qt_gsi::GenericMethod ("toVector2D", "@brief Method QVector2D QVector4D::toVector2D()\n", true, &_init_f_toVector2D_c0, &_call_f_toVector2D_c0);
  methods += new qt_gsi::GenericMethod ("toVector2DAffine", "@brief Method QVector2D QVector4D::toVector2DAffine()\n", true, &_init_f_toVector2DAffine_c0, &_call_f_toVector2DAffine_c0);
  methods += new qt_gsi::GenericMethod ("toVector3D", "@brief Method QVector3D QVector4D::toVector3D()\n", true, &_init_f_toVector3D_c0, &_call_f_toVector3D_c0);
  methods += new qt_gsi::GenericMethod ("toVector3DAffine", "@brief Method QVector3D QVector4D::toVector3DAffine()\n", true, &_init_f_toVector3DAffine_c0, &_call_f_toVector3DAffine_c0);
  methods += new qt_gsi::GenericMethod (":w", "@brief Method float QVector4D::w()\n", true, &_init_f_w_c0, &_call_f_w_c0);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method float QVector4D::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method float QVector4D::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericMethod (":z", "@brief Method float QVector4D::z()\n", true, &_init_f_z_c0, &_call_f_z_c0);
  methods += new qt_gsi::GenericStaticMethod ("dotProduct", "@brief Static method float QVector4D::dotProduct(QVector4D v1, QVector4D v2)\nThis method is static and can be called without an instance.", &_init_f_dotProduct_2420, &_call_f_dotProduct_2420);
  methods += gsi::method_ext("*", &::op_QVector4D_operator_star__4280u1, gsi::arg ("matrix"), "@brief Operator QVector4D ::operator*(const QVector4D &vector, const QMatrix4x4 &matrix)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("==", &::op_QVector4D_operator_eq__eq__2420, gsi::arg ("v2"), "@brief Operator bool ::operator==(QVector4D v1, QVector4D v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QVector4D_operator_excl__eq__2420, gsi::arg ("v2"), "@brief Operator bool ::operator!=(QVector4D v1, QVector4D v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QVector4D_operator_plus__2420, gsi::arg ("v2"), "@brief Operator QVector4D ::operator+(QVector4D v1, QVector4D v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector4D_operator_minus__2420, gsi::arg ("v2"), "@brief Operator QVector4D ::operator-(QVector4D v1, QVector4D v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector4D_operator_star__2126, gsi::arg ("factor"), "@brief Operator QVector4D ::operator*(QVector4D vector, float factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector4D_operator_star__2420, gsi::arg ("v2"), "@brief Operator QVector4D ::operator*(QVector4D v1, QVector4D v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector4D_operator_minus__1264, "@brief Operator QVector4D ::operator-(QVector4D vector)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QVector4D_operator_slash__2126, gsi::arg ("divisor"), "@brief Operator QVector4D ::operator/(QVector4D vector, float divisor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QVector4D_operator_slash__2420, gsi::arg ("divisor"), "@brief Operator QVector4D ::operator/(QVector4D vector, QVector4D divisor)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QVector4D> decl_QVector4D ("QtGui", "QVector4D",
  methods_QVector4D (),
  "@qt\n@brief Binding of QVector4D");


GSI_QTGUI_PUBLIC gsi::Class<QVector4D> &qtdecl_QVector4D () { return decl_QVector4D; }

}

