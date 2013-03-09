#include <hxcpp.h>

#ifndef INCLUDED_BaseLevel
#include <BaseLevel.h>
#endif
#ifndef INCLUDED_FlixelHaxeGame
#include <FlixelHaxeGame.h>
#endif
#ifndef INCLUDED_Level1
#include <Level1.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif

Void FlixelHaxeGame_obj::__construct()
{
HX_STACK_PUSH("FlixelHaxeGame::new","FlixelHaxeGame.hx",13);
{
	HX_STACK_LINE(14)
	int stageWidth = ::nme::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
	HX_STACK_LINE(15)
	int stageHeight = ::nme::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
	HX_STACK_LINE(17)
	super::__construct((int)640,(int)400,hx::ClassOf< ::Level1 >(),(int)1,(int)30,(int)30,null());
	HX_STACK_LINE(18)
	this->forceDebugger = true;
	HX_STACK_LINE(22)
	Float newWidthRatio = (Float(stageWidth) / Float((int)640));		HX_STACK_VAR(newWidthRatio,"newWidthRatio");
	HX_STACK_LINE(23)
	Float newWidth = (stageWidth * newWidthRatio);		HX_STACK_VAR(newWidth,"newWidth");
	HX_STACK_LINE(24)
	Float newHeight = ((int)400 * newWidthRatio);		HX_STACK_VAR(newHeight,"newHeight");
	HX_STACK_LINE(25)
	Float offsetY = (((stageHeight - newHeight)) * .5);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(26)
	::haxe::Log_obj::trace(offsetY,hx::SourceInfo(HX_CSTRING("FlixelHaxeGame.hx"),26,HX_CSTRING("FlixelHaxeGame"),HX_CSTRING("new")));
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::FlixelHaxeGame _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		_g->set_scaleY((_g->get_scaleY() * newWidthRatio));
	}
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::FlixelHaxeGame _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		_g->set_scaleX((_g->get_scaleX() * newWidthRatio));
	}
	HX_STACK_LINE(29)
	this->set_y(offsetY);
}
;
	return null();
}

FlixelHaxeGame_obj::~FlixelHaxeGame_obj() { }

Dynamic FlixelHaxeGame_obj::__CreateEmpty() { return  new FlixelHaxeGame_obj; }
hx::ObjectPtr< FlixelHaxeGame_obj > FlixelHaxeGame_obj::__new()
{  hx::ObjectPtr< FlixelHaxeGame_obj > result = new FlixelHaxeGame_obj();
	result->__construct();
	return result;}

Dynamic FlixelHaxeGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlixelHaxeGame_obj > result = new FlixelHaxeGame_obj();
	result->__construct();
	return result;}


FlixelHaxeGame_obj::FlixelHaxeGame_obj()
{
}

void FlixelHaxeGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlixelHaxeGame);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlixelHaxeGame_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlixelHaxeGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlixelHaxeGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlixelHaxeGame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlixelHaxeGame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlixelHaxeGame_obj::__mClass,"__mClass");
};

Class FlixelHaxeGame_obj::__mClass;

void FlixelHaxeGame_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("FlixelHaxeGame"), hx::TCanCast< FlixelHaxeGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlixelHaxeGame_obj::__boot()
{
}

