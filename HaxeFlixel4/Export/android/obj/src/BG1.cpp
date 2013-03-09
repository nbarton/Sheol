#include <hxcpp.h>

#ifndef INCLUDED_BG1
#include <BG1.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif

Void BG1_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("BG1::new","BG1.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(X,Y,null());
	HX_STACK_LINE(14)
	this->loadGraphic(HX_CSTRING("assets/basetile4x.png"),false,false,(int)1600,(int)1280,null(),null());
}
;
	return null();
}

BG1_obj::~BG1_obj() { }

Dynamic BG1_obj::__CreateEmpty() { return  new BG1_obj; }
hx::ObjectPtr< BG1_obj > BG1_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< BG1_obj > result = new BG1_obj();
	result->__construct(X,Y);
	return result;}

Dynamic BG1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BG1_obj > result = new BG1_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


BG1_obj::BG1_obj()
{
}

void BG1_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BG1);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BG1_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BG1_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic BG1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BG1_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BG1_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BG1_obj::__mClass,"__mClass");
};

Class BG1_obj::__mClass;

void BG1_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BG1"), hx::TCanCast< BG1_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BG1_obj::__boot()
{
}

