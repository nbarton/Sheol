#include <hxcpp.h>

#ifndef INCLUDED_Stardust
#include <Stardust.h>
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

Void Stardust_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Stardust::new","Stardust.hx",13);
{
	HX_STACK_LINE(15)
	super::__construct(X,Y,null());
	HX_STACK_LINE(17)
	this->loadGraphic(HX_CSTRING("assets/dust.png"),true,true,(int)8,(int)9,null(),null());
}
;
	return null();
}

Stardust_obj::~Stardust_obj() { }

Dynamic Stardust_obj::__CreateEmpty() { return  new Stardust_obj; }
hx::ObjectPtr< Stardust_obj > Stardust_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Stardust_obj > result = new Stardust_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Stardust_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stardust_obj > result = new Stardust_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Stardust_obj::Stardust_obj()
{
}

void Stardust_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stardust);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stardust_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stardust_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Stardust_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Stardust_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stardust_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stardust_obj::__mClass,"__mClass");
};

Class Stardust_obj::__mClass;

void Stardust_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Stardust"), hx::TCanCast< Stardust_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stardust_obj::__boot()
{
}

