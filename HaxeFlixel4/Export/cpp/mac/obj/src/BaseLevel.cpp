#include <hxcpp.h>

#ifndef INCLUDED_BaseLevel
#include <BaseLevel.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif

Void BaseLevel_obj::__construct()
{
HX_STACK_PUSH("BaseLevel::new","BaseLevel.hx",11);
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

BaseLevel_obj::~BaseLevel_obj() { }

Dynamic BaseLevel_obj::__CreateEmpty() { return  new BaseLevel_obj; }
hx::ObjectPtr< BaseLevel_obj > BaseLevel_obj::__new()
{  hx::ObjectPtr< BaseLevel_obj > result = new BaseLevel_obj();
	result->__construct();
	return result;}

Dynamic BaseLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseLevel_obj > result = new BaseLevel_obj();
	result->__construct();
	return result;}

Void BaseLevel_obj::update( ){
{
		HX_STACK_PUSH("BaseLevel::update","BaseLevel.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		this->super::update();
		HX_STACK_LINE(38)
		if ((::org::flixel::FlxG_obj::mouse->justPressed())){
			HX_STACK_LINE(39)
			(::Global_obj::score)++;
			HX_STACK_LINE(40)
			this->scoreText->setText((HX_CSTRING("score: ") + ::Std_obj::string(::Global_obj::score)));
		}
	}
return null();
}


Void BaseLevel_obj::create( ){
{
		HX_STACK_PUSH("BaseLevel::create","BaseLevel.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(18)
		::org::flixel::FlxG_obj::setBgColor((int)-15524837);
		HX_STACK_LINE(19)
		::org::flixel::FlxG_obj::mouse->show(null(),null(),null(),null());
		HX_STACK_LINE(22)
		this->levelText = ::org::flixel::FlxText_obj::__new((int)12,(int)12,(int)800,HX_CSTRING("base level"),null());
		HX_STACK_LINE(23)
		this->levelText->setSize((int)16);
		HX_STACK_LINE(24)
		this->levelText->setText((HX_CSTRING("level ") + ::Std_obj::string(::Global_obj::level)));
		HX_STACK_LINE(25)
		this->add(this->levelText);
		HX_STACK_LINE(28)
		this->scoreText = ::org::flixel::FlxText_obj::__new((int)700,(int)12,(int)200,null(),null());
		HX_STACK_LINE(29)
		this->scoreText->setSize((int)16);
		HX_STACK_LINE(30)
		this->scoreText->setText((HX_CSTRING("score: ") + ::Std_obj::string(::Global_obj::score)));
		HX_STACK_LINE(31)
		this->add(this->scoreText);
	}
return null();
}



BaseLevel_obj::BaseLevel_obj()
{
}

void BaseLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseLevel);
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(levelText,"levelText");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(levelText,"levelText");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BaseLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"levelText") ) { return levelText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelText") ) { levelText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("levelText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("levelText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseLevel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseLevel_obj::__mClass,"__mClass");
};

Class BaseLevel_obj::__mClass;

void BaseLevel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BaseLevel"), hx::TCanCast< BaseLevel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BaseLevel_obj::__boot()
{
}

