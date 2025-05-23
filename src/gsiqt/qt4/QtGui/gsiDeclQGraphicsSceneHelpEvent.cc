
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
*  @file gsiDeclQGraphicsSceneHelpEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsSceneHelpEvent>
#include <QPoint>
#include <QPointF>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsSceneHelpEvent

// QPointF QGraphicsSceneHelpEvent::scenePos()


static void _init_f_scenePos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_scenePos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QGraphicsSceneHelpEvent *)cls)->scenePos ());
}


// QPoint QGraphicsSceneHelpEvent::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QGraphicsSceneHelpEvent *)cls)->screenPos ());
}


// void QGraphicsSceneHelpEvent::setScenePos(const QPointF &pos)


static void _init_f_setScenePos_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScenePos_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHelpEvent *)cls)->setScenePos (arg1);
}


// void QGraphicsSceneHelpEvent::setScreenPos(const QPoint &pos)


static void _init_f_setScreenPos_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScreenPos_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsSceneHelpEvent *)cls)->setScreenPos (arg1);
}


namespace gsi
{

static gsi::Methods methods_QGraphicsSceneHelpEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":scenePos", "@brief Method QPointF QGraphicsSceneHelpEvent::scenePos()\n", true, &_init_f_scenePos_c0, &_call_f_scenePos_c0);
  methods += new qt_gsi::GenericMethod (":screenPos", "@brief Method QPoint QGraphicsSceneHelpEvent::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("setScenePos|scenePos=", "@brief Method void QGraphicsSceneHelpEvent::setScenePos(const QPointF &pos)\n", false, &_init_f_setScenePos_1986, &_call_f_setScenePos_1986);
  methods += new qt_gsi::GenericMethod ("setScreenPos|screenPos=", "@brief Method void QGraphicsSceneHelpEvent::setScreenPos(const QPoint &pos)\n", false, &_init_f_setScreenPos_1916, &_call_f_setScreenPos_1916);
  return methods;
}

gsi::Class<QGraphicsSceneEvent> &qtdecl_QGraphicsSceneEvent ();

gsi::Class<QGraphicsSceneHelpEvent> decl_QGraphicsSceneHelpEvent (qtdecl_QGraphicsSceneEvent (), "QtGui", "QGraphicsSceneHelpEvent_Native",
  methods_QGraphicsSceneHelpEvent (),
  "@hide\n@alias QGraphicsSceneHelpEvent");

GSI_QTGUI_PUBLIC gsi::Class<QGraphicsSceneHelpEvent> &qtdecl_QGraphicsSceneHelpEvent () { return decl_QGraphicsSceneHelpEvent; }

}


class QGraphicsSceneHelpEvent_Adaptor : public QGraphicsSceneHelpEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsSceneHelpEvent_Adaptor();

  //  [adaptor ctor] QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type)
  QGraphicsSceneHelpEvent_Adaptor() : QGraphicsSceneHelpEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type)
  QGraphicsSceneHelpEvent_Adaptor(QEvent::Type type) : QGraphicsSceneHelpEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QGraphicsSceneHelpEvent_Adaptor::~QGraphicsSceneHelpEvent_Adaptor() { }

//  Constructor QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type) (adaptor class)

static void _init_ctor_QGraphicsSceneHelpEvent_Adaptor_1565 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type", true, "QEvent::None");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  decl->set_return_new<QGraphicsSceneHelpEvent_Adaptor> ();
}

static void _call_ctor_QGraphicsSceneHelpEvent_Adaptor_1565 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QEvent::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QEvent::Type>(heap, QEvent::None), heap);
  ret.write<QGraphicsSceneHelpEvent_Adaptor *> (new QGraphicsSceneHelpEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref()));
}


namespace gsi
{

gsi::Class<QGraphicsSceneHelpEvent> &qtdecl_QGraphicsSceneHelpEvent ();

static gsi::Methods methods_QGraphicsSceneHelpEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type)\nThis method creates an object of class QGraphicsSceneHelpEvent.", &_init_ctor_QGraphicsSceneHelpEvent_Adaptor_1565, &_call_ctor_QGraphicsSceneHelpEvent_Adaptor_1565);
  return methods;
}

gsi::Class<QGraphicsSceneHelpEvent_Adaptor> decl_QGraphicsSceneHelpEvent_Adaptor (qtdecl_QGraphicsSceneHelpEvent (), "QtGui", "QGraphicsSceneHelpEvent",
  methods_QGraphicsSceneHelpEvent_Adaptor (),
  "@qt\n@brief Binding of QGraphicsSceneHelpEvent");

}

