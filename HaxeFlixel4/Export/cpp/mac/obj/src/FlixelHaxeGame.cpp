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
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
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
HX_STACK_PUSH("FlixelHaxeGame::new","FlixelHaxeGame.hx",10);
{
	HX_STACK_LINE(11)
	int stageWidth = ::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
	HX_STACK_LINE(12)
	int stageHeight = ::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->nmeGetStageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
	HX_STACK_LINE(13)
	super::__construct(stageWidth,stageHeight,hx::ClassOf< ::Level1 >(),(int)1,(int)30,(int)30,null());
	HX_STACK_LINE(14)
	this->forceDebugger = true;
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

