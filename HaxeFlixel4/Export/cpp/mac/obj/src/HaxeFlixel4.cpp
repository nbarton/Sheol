#include <hxcpp.h>

#ifndef INCLUDED_FlixelHaxeGame
#include <FlixelHaxeGame.h>
#endif
#ifndef INCLUDED_HaxeFlixel4
#include <HaxeFlixel4.h>
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
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif

Void HaxeFlixel4_obj::__construct()
{
HX_STACK_PUSH("HaxeFlixel4::new","HaxeFlixel4.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	if (((this->nmeGetStage() != null()))){
		HX_STACK_LINE(20)
		this->init(null());
	}
	else{
		HX_STACK_LINE(23)
		this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null(),null(),null());
	}
}
;
	return null();
}

HaxeFlixel4_obj::~HaxeFlixel4_obj() { }

Dynamic HaxeFlixel4_obj::__CreateEmpty() { return  new HaxeFlixel4_obj; }
hx::ObjectPtr< HaxeFlixel4_obj > HaxeFlixel4_obj::__new()
{  hx::ObjectPtr< HaxeFlixel4_obj > result = new HaxeFlixel4_obj();
	result->__construct();
	return result;}

Dynamic HaxeFlixel4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeFlixel4_obj > result = new HaxeFlixel4_obj();
	result->__construct();
	return result;}

Void HaxeFlixel4_obj::init( ::neash::events::Event e){
{
		HX_STACK_PUSH("HaxeFlixel4::init","HaxeFlixel4.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(30)
		if ((this->hasEventListener(::neash::events::Event_obj::ADDED_TO_STAGE))){
			HX_STACK_LINE(31)
			this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->init_dyn(),null());
		}
		HX_STACK_LINE(37)
		::org::flixel::FlxGame demo = ::FlixelHaxeGame_obj::__new();		HX_STACK_VAR(demo,"demo");
		HX_STACK_LINE(38)
		this->addChild(demo);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HaxeFlixel4_obj,init,(void))


HaxeFlixel4_obj::HaxeFlixel4_obj()
{
}

void HaxeFlixel4_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeFlixel4);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HaxeFlixel4_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic HaxeFlixel4_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HaxeFlixel4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeFlixel4_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeFlixel4_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeFlixel4_obj::__mClass,"__mClass");
};

Class HaxeFlixel4_obj::__mClass;

void HaxeFlixel4_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("HaxeFlixel4"), hx::TCanCast< HaxeFlixel4_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HaxeFlixel4_obj::__boot()
{
}

