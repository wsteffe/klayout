
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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
*  @file gsiDeclQGradient.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGradient>
#include <QColor>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGradient

//  Constructor QGradient::QGradient()


static void _init_ctor_QGradient_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGradient> ();
}

static void _call_ctor_QGradient_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGradient *> (new QGradient ());
}


// QGradient::CoordinateMode QGradient::coordinateMode()


static void _init_f_coordinateMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::CoordinateMode>::target_type > ();
}

static void _call_f_coordinateMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::CoordinateMode>::target_type > ((qt_gsi::Converter<QGradient::CoordinateMode>::target_type)qt_gsi::CppToQtAdaptor<QGradient::CoordinateMode>(((QGradient *)cls)->coordinateMode ()));
}


// QGradient::InterpolationMode QGradient::interpolationMode()


static void _init_f_interpolationMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::InterpolationMode>::target_type > ();
}

static void _call_f_interpolationMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::InterpolationMode>::target_type > ((qt_gsi::Converter<QGradient::InterpolationMode>::target_type)qt_gsi::CppToQtAdaptor<QGradient::InterpolationMode>(((QGradient *)cls)->interpolationMode ()));
}


// bool QGradient::operator!=(const QGradient &other)


static void _init_f_operator_excl__eq__c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = args.read<const QGradient & > (heap);
  ret.write<bool > ((bool)((QGradient *)cls)->operator!= (arg1));
}


// bool QGradient::operator==(const QGradient &gradient)


static void _init_f_operator_eq__eq__c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gradient");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = args.read<const QGradient & > (heap);
  ret.write<bool > ((bool)((QGradient *)cls)->operator== (arg1));
}


// bool QGradient::operator==(const QGradient &gradient)


static void _init_f_operator_eq__eq__2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gradient");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = args.read<const QGradient & > (heap);
  ret.write<bool > ((bool)((QGradient *)cls)->operator== (arg1));
}


// void QGradient::setColorAt(double pos, const QColor &color)


static void _init_f_setColorAt_2868 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("color");
  decl->add_arg<const QColor & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setColorAt_2868 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  const QColor &arg2 = args.read<const QColor & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setColorAt (arg1, arg2);
}


// void QGradient::setCoordinateMode(QGradient::CoordinateMode mode)


static void _init_f_setCoordinateMode_2868 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCoordinateMode_2868 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & arg1 = args.read<const qt_gsi::Converter<QGradient::CoordinateMode>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setCoordinateMode (qt_gsi::QtToCppAdaptor<QGradient::CoordinateMode>(arg1).cref());
}


// void QGradient::setInterpolationMode(QGradient::InterpolationMode mode)


static void _init_f_setInterpolationMode_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInterpolationMode_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & arg1 = args.read<const qt_gsi::Converter<QGradient::InterpolationMode>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setInterpolationMode (qt_gsi::QtToCppAdaptor<QGradient::InterpolationMode>(arg1).cref());
}


// void QGradient::setSpread(QGradient::Spread spread)


static void _init_f_setSpread_2054 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spread");
  decl->add_arg<const qt_gsi::Converter<QGradient::Spread>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSpread_2054 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QGradient::Spread>::target_type & arg1 = args.read<const qt_gsi::Converter<QGradient::Spread>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setSpread (qt_gsi::QtToCppAdaptor<QGradient::Spread>(arg1).cref());
}


// void QGradient::setStops(const QVector<QGradientStop> &stops)


static void _init_f_setStops_3460 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stops");
  decl->add_arg<const QVector<QGradientStop> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStops_3460 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<QGradientStop> &arg1 = args.read<const QVector<QGradientStop> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGradient *)cls)->setStops (arg1);
}


// QGradient::Spread QGradient::spread()


static void _init_f_spread_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::Spread>::target_type > ();
}

static void _call_f_spread_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::Spread>::target_type > ((qt_gsi::Converter<QGradient::Spread>::target_type)qt_gsi::CppToQtAdaptor<QGradient::Spread>(((QGradient *)cls)->spread ()));
}


// QVector<QGradientStop> QGradient::stops()


static void _init_f_stops_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<QGradientStop> > ();
}

static void _call_f_stops_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QGradientStop> > ((QVector<QGradientStop>)((QGradient *)cls)->stops ());
}


// QGradient::Type QGradient::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QGradient::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QGradient::Type>::target_type > ((qt_gsi::Converter<QGradient::Type>::target_type)qt_gsi::CppToQtAdaptor<QGradient::Type>(((QGradient *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QGradient () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGradient::QGradient()\nThis method creates an object of class QGradient.", &_init_ctor_QGradient_0, &_call_ctor_QGradient_0);
  methods += new qt_gsi::GenericMethod (":coordinateMode", "@brief Method QGradient::CoordinateMode QGradient::coordinateMode()\n", true, &_init_f_coordinateMode_c0, &_call_f_coordinateMode_c0);
  methods += new qt_gsi::GenericMethod (":interpolationMode", "@brief Method QGradient::InterpolationMode QGradient::interpolationMode()\n", true, &_init_f_interpolationMode_c0, &_call_f_interpolationMode_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QGradient::operator!=(const QGradient &other)\n", true, &_init_f_operator_excl__eq__c2208, &_call_f_operator_excl__eq__c2208);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QGradient::operator==(const QGradient &gradient)\n", true, &_init_f_operator_eq__eq__c2208, &_call_f_operator_eq__eq__c2208);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QGradient::operator==(const QGradient &gradient)\n", false, &_init_f_operator_eq__eq__2208, &_call_f_operator_eq__eq__2208);
  methods += new qt_gsi::GenericMethod ("setColorAt", "@brief Method void QGradient::setColorAt(double pos, const QColor &color)\n", false, &_init_f_setColorAt_2868, &_call_f_setColorAt_2868);
  methods += new qt_gsi::GenericMethod ("setCoordinateMode|coordinateMode=", "@brief Method void QGradient::setCoordinateMode(QGradient::CoordinateMode mode)\n", false, &_init_f_setCoordinateMode_2868, &_call_f_setCoordinateMode_2868);
  methods += new qt_gsi::GenericMethod ("setInterpolationMode|interpolationMode=", "@brief Method void QGradient::setInterpolationMode(QGradient::InterpolationMode mode)\n", false, &_init_f_setInterpolationMode_3220, &_call_f_setInterpolationMode_3220);
  methods += new qt_gsi::GenericMethod ("setSpread|spread=", "@brief Method void QGradient::setSpread(QGradient::Spread spread)\n", false, &_init_f_setSpread_2054, &_call_f_setSpread_2054);
  methods += new qt_gsi::GenericMethod ("setStops|stops=", "@brief Method void QGradient::setStops(const QVector<QGradientStop> &stops)\n", false, &_init_f_setStops_3460, &_call_f_setStops_3460);
  methods += new qt_gsi::GenericMethod (":spread", "@brief Method QGradient::Spread QGradient::spread()\n", true, &_init_f_spread_c0, &_call_f_spread_c0);
  methods += new qt_gsi::GenericMethod (":stops", "@brief Method QVector<QGradientStop> QGradient::stops()\n", true, &_init_f_stops_c0, &_call_f_stops_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QGradient::Type QGradient::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QGradient> decl_QGradient ("QtGui", "QGradient",
  methods_QGradient (),
  "@qt\n@brief Binding of QGradient");


GSI_QTGUI_PUBLIC gsi::Class<QGradient> &qtdecl_QGradient () { return decl_QGradient; }

}


//  Implementation of the enum wrapper class for QGradient::CoordinateMode
namespace qt_gsi
{

static gsi::Enum<QGradient::CoordinateMode> decl_QGradient_CoordinateMode_Enum ("QtGui", "QGradient_CoordinateMode",
    gsi::enum_const ("LogicalMode", QGradient::LogicalMode, "@brief Enum constant QGradient::LogicalMode") +
    gsi::enum_const ("StretchToDeviceMode", QGradient::StretchToDeviceMode, "@brief Enum constant QGradient::StretchToDeviceMode") +
    gsi::enum_const ("ObjectBoundingMode", QGradient::ObjectBoundingMode, "@brief Enum constant QGradient::ObjectBoundingMode"),
  "@qt\n@brief This class represents the QGradient::CoordinateMode enum");

static gsi::QFlagsClass<QGradient::CoordinateMode > decl_QGradient_CoordinateMode_Enums ("QtGui", "QGradient_QFlags_CoordinateMode",
  "@qt\n@brief This class represents the QFlags<QGradient::CoordinateMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_CoordinateMode_Enum_in_parent (decl_QGradient_CoordinateMode_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_CoordinateMode_Enum_as_child (decl_QGradient_CoordinateMode_Enum, "CoordinateMode");
static gsi::ClassExt<QGradient> decl_QGradient_CoordinateMode_Enums_as_child (decl_QGradient_CoordinateMode_Enums, "QFlags_CoordinateMode");

}


//  Implementation of the enum wrapper class for QGradient::InterpolationMode
namespace qt_gsi
{

static gsi::Enum<QGradient::InterpolationMode> decl_QGradient_InterpolationMode_Enum ("QtGui", "QGradient_InterpolationMode",
    gsi::enum_const ("ColorInterpolation", QGradient::ColorInterpolation, "@brief Enum constant QGradient::ColorInterpolation") +
    gsi::enum_const ("ComponentInterpolation", QGradient::ComponentInterpolation, "@brief Enum constant QGradient::ComponentInterpolation"),
  "@qt\n@brief This class represents the QGradient::InterpolationMode enum");

static gsi::QFlagsClass<QGradient::InterpolationMode > decl_QGradient_InterpolationMode_Enums ("QtGui", "QGradient_QFlags_InterpolationMode",
  "@qt\n@brief This class represents the QFlags<QGradient::InterpolationMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_InterpolationMode_Enum_in_parent (decl_QGradient_InterpolationMode_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_InterpolationMode_Enum_as_child (decl_QGradient_InterpolationMode_Enum, "InterpolationMode");
static gsi::ClassExt<QGradient> decl_QGradient_InterpolationMode_Enums_as_child (decl_QGradient_InterpolationMode_Enums, "QFlags_InterpolationMode");

}


//  Implementation of the enum wrapper class for QGradient::Spread
namespace qt_gsi
{

static gsi::Enum<QGradient::Spread> decl_QGradient_Spread_Enum ("QtGui", "QGradient_Spread",
    gsi::enum_const ("PadSpread", QGradient::PadSpread, "@brief Enum constant QGradient::PadSpread") +
    gsi::enum_const ("ReflectSpread", QGradient::ReflectSpread, "@brief Enum constant QGradient::ReflectSpread") +
    gsi::enum_const ("RepeatSpread", QGradient::RepeatSpread, "@brief Enum constant QGradient::RepeatSpread"),
  "@qt\n@brief This class represents the QGradient::Spread enum");

static gsi::QFlagsClass<QGradient::Spread > decl_QGradient_Spread_Enums ("QtGui", "QGradient_QFlags_Spread",
  "@qt\n@brief This class represents the QFlags<QGradient::Spread> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_Spread_Enum_in_parent (decl_QGradient_Spread_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_Spread_Enum_as_child (decl_QGradient_Spread_Enum, "Spread");
static gsi::ClassExt<QGradient> decl_QGradient_Spread_Enums_as_child (decl_QGradient_Spread_Enums, "QFlags_Spread");

}


//  Implementation of the enum wrapper class for QGradient::Type
namespace qt_gsi
{

static gsi::Enum<QGradient::Type> decl_QGradient_Type_Enum ("QtGui", "QGradient_Type",
    gsi::enum_const ("LinearGradient", QGradient::LinearGradient, "@brief Enum constant QGradient::LinearGradient") +
    gsi::enum_const ("RadialGradient", QGradient::RadialGradient, "@brief Enum constant QGradient::RadialGradient") +
    gsi::enum_const ("ConicalGradient", QGradient::ConicalGradient, "@brief Enum constant QGradient::ConicalGradient") +
    gsi::enum_const ("NoGradient", QGradient::NoGradient, "@brief Enum constant QGradient::NoGradient"),
  "@qt\n@brief This class represents the QGradient::Type enum");

static gsi::QFlagsClass<QGradient::Type > decl_QGradient_Type_Enums ("QtGui", "QGradient_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QGradient::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGradient> inject_QGradient_Type_Enum_in_parent (decl_QGradient_Type_Enum.defs ());
static gsi::ClassExt<QGradient> decl_QGradient_Type_Enum_as_child (decl_QGradient_Type_Enum, "Type");
static gsi::ClassExt<QGradient> decl_QGradient_Type_Enums_as_child (decl_QGradient_Type_Enums, "QFlags_Type");

}
