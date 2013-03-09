#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif

Void Global_obj::__construct()
{
HX_STACK_PUSH("Global::new","Global.hx",12);
{
}
;
	return null();
}

Global_obj::~Global_obj() { }

Dynamic Global_obj::__CreateEmpty() { return  new Global_obj; }
hx::ObjectPtr< Global_obj > Global_obj::__new()
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

Dynamic Global_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Global_obj > result = new Global_obj();
	result->__construct();
	return result;}

int Global_obj::level;

int Global_obj::score;


Global_obj::Global_obj()
{
}

void Global_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Global);
	HX_MARK_END_CLASS();
}

void Global_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Global_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Global_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Global_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("level"),
	HX_CSTRING("score"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Global_obj::level,"level");
	HX_MARK_MEMBER_NAME(Global_obj::score,"score");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Global_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Global_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Global_obj::score,"score");
};

Class Global_obj::__mClass;

void Global_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Global"), hx::TCanCast< Global_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Global_obj::__boot()
{
	level= (int)1;
	score= (int)0;
}

