#include <hxcpp.h>

#ifndef INCLUDED_Detector
#include <Detector.h>
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

Void Detector_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Detector::new","Detector.hx",13);
{
	HX_STACK_LINE(15)
	super::__construct(X,Y,null());
	HX_STACK_LINE(16)
	this->exists = false;
	HX_STACK_LINE(17)
	this->visible = false;
	HX_STACK_LINE(18)
	this->loadGraphic(HX_CSTRING("assets/detector.png"),true,true,(int)60,(int)60,null(),null());
}
;
	return null();
}

Detector_obj::~Detector_obj() { }

Dynamic Detector_obj::__CreateEmpty() { return  new Detector_obj; }
hx::ObjectPtr< Detector_obj > Detector_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Detector_obj > result = new Detector_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Detector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Detector_obj > result = new Detector_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Detector_obj::Detector_obj()
{
}

void Detector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Detector);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Detector_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Detector_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Detector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Detector_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Detector_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Detector_obj::__mClass,"__mClass");
};

Class Detector_obj::__mClass;

void Detector_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Detector"), hx::TCanCast< Detector_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Detector_obj::__boot()
{
}

