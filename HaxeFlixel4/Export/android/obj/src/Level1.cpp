#include <hxcpp.h>

#ifndef INCLUDED_BaseLevel
#include <BaseLevel.h>
#endif
#ifndef INCLUDED_Level1
#include <Level1.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif

Void Level1_obj::__construct()
{
HX_STACK_PUSH("Level1::new","Level1.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

Level1_obj::~Level1_obj() { }

Dynamic Level1_obj::__CreateEmpty() { return  new Level1_obj; }
hx::ObjectPtr< Level1_obj > Level1_obj::__new()
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}

Dynamic Level1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}

Void Level1_obj::update( ){
{
		HX_STACK_PUSH("Level1::update","Level1.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(20)
		this->super::update();
	}
return null();
}


Void Level1_obj::create( ){
{
		HX_STACK_PUSH("Level1::create","Level1.hx",13);
		HX_STACK_THIS(this);
		HX_STACK_LINE(14)
		this->super::create();
		HX_STACK_LINE(15)
		::org::flixel::FlxG_obj::setBgColor((int)-12510437);
	}
return null();
}



Level1_obj::Level1_obj()
{
}

void Level1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level1);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level1_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Level1_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level1_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
};

Class Level1_obj::__mClass;

void Level1_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Level1"), hx::TCanCast< Level1_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Level1_obj::__boot()
{
}

