#include <hxcpp.h>

#ifndef INCLUDED_addons_FlxTrail
#include <addons/FlxTrail.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
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
namespace addons{

Void FlxTrail_obj::__construct(::org::flixel::FlxSprite Sprite,Dynamic Image,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff)
{
HX_STACK_PUSH("FlxTrail::new","addons/FlxTrail.hx",15);
int Length = __o_Length.Default(10);
int Delay = __o_Delay.Default(3);
Float Alpha = __o_Alpha.Default(0.4);
Float Diff = __o_Diff.Default(0.05);
{
	HX_STACK_LINE(52)
	this->transp = (int)1;
	HX_STACK_LINE(44)
	this->trailLength = (int)0;
	HX_STACK_LINE(40)
	this->counter = (int)0;
	HX_STACK_LINE(36)
	this->rotationsEnabled = true;
	HX_STACK_LINE(32)
	this->yEnabled = true;
	HX_STACK_LINE(28)
	this->xEnabled = true;
	HX_STACK_LINE(78)
	super::__construct(null());
	HX_STACK_LINE(80)
	this->recentAngles = Array_obj< Float >::__new();
	HX_STACK_LINE(81)
	this->recentPositions = Array_obj< ::org::flixel::FlxPoint >::__new();
	HX_STACK_LINE(84)
	this->sprite = Sprite;
	HX_STACK_LINE(85)
	this->delay = Delay;
	HX_STACK_LINE(86)
	this->image = Image;
	HX_STACK_LINE(87)
	this->transp = Alpha;
	HX_STACK_LINE(88)
	this->difference = Diff;
	HX_STACK_LINE(91)
	this->increaseLength(Length);
}
;
	return null();
}

FlxTrail_obj::~FlxTrail_obj() { }

Dynamic FlxTrail_obj::__CreateEmpty() { return  new FlxTrail_obj; }
hx::ObjectPtr< FlxTrail_obj > FlxTrail_obj::__new(::org::flixel::FlxSprite Sprite,Dynamic Image,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff)
{  hx::ObjectPtr< FlxTrail_obj > result = new FlxTrail_obj();
	result->__construct(Sprite,Image,__o_Length,__o_Delay,__o_Alpha,__o_Diff);
	return result;}

Dynamic FlxTrail_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTrail_obj > result = new FlxTrail_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxTrail_obj::changeValuesEnabled( bool Angle,hx::Null< bool >  __o_X,hx::Null< bool >  __o_Y){
bool X = __o_X.Default(true);
bool Y = __o_Y.Default(true);
	HX_STACK_PUSH("FlxTrail::changeValuesEnabled","addons/FlxTrail.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(196)
		this->rotationsEnabled = Angle;
		HX_STACK_LINE(197)
		this->xEnabled = X;
		HX_STACK_LINE(198)
		this->yEnabled = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTrail_obj,changeValuesEnabled,(void))

Void FlxTrail_obj::changeGraphic( Dynamic Image){
{
		HX_STACK_PUSH("FlxTrail::changeGraphic","addons/FlxTrail.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Image,"Image");
		HX_STACK_LINE(179)
		this->image = Image;
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->trailLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			while(((_g1 < _g))){
				HX_STACK_LINE(181)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(183)
				(hx::TCast< org::flixel::FlxSprite >::cast(this->members->__get(i)))->loadGraphic(Image,null(),null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,changeGraphic,(void))

Void FlxTrail_obj::increaseLength( int amount){
{
		HX_STACK_PUSH("FlxTrail::increaseLength","addons/FlxTrail.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_ARG(amount,"amount");
		HX_STACK_LINE(155)
		if (((amount <= (int)0))){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(157)
		hx::AddEq(this->trailLength,amount);
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(160)
			while(((_g < amount))){
				HX_STACK_LINE(160)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(162)
				::org::flixel::FlxSprite trailSprite = ::org::flixel::FlxSprite_obj::__new((int)0,(int)0,this->image);		HX_STACK_VAR(trailSprite,"trailSprite");
				HX_STACK_LINE(163)
				trailSprite->exists = false;
				HX_STACK_LINE(164)
				this->add(trailSprite);
				HX_STACK_LINE(165)
				trailSprite->setAlpha(this->transp);
				HX_STACK_LINE(166)
				hx::SubEq(this->transp,this->difference);
				HX_STACK_LINE(168)
				if (((trailSprite->alpha <= (int)0))){
					HX_STACK_LINE(168)
					trailSprite->kill();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,increaseLength,(void))

Void FlxTrail_obj::resetTrail( ){
{
		HX_STACK_PUSH("FlxTrail::resetTrail","addons/FlxTrail.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(141)
		this->recentPositions->splice((int)0,this->recentPositions->length);
		HX_STACK_LINE(142)
		this->recentAngles->splice((int)0,this->recentAngles->length);
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->members->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			while(((_g1 < _g))){
				HX_STACK_LINE(143)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(144)
				this->members->__get(i)->exists = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrail_obj,resetTrail,(void))

Void FlxTrail_obj::postUpdate( ){
{
		HX_STACK_PUSH("FlxTrail::postUpdate","addons/FlxTrail.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(101)
		(this->counter)++;
		HX_STACK_LINE(104)
		if (((bool((this->counter >= this->delay)) && bool((this->trailLength >= (int)1))))){
			HX_STACK_LINE(106)
			this->counter = (int)0;
			HX_STACK_LINE(109)
			::org::flixel::FlxPoint spritePosition = ::org::flixel::FlxPoint_obj::__new((this->sprite->x - this->sprite->offset->x),(this->sprite->y - this->sprite->offset->y));		HX_STACK_VAR(spritePosition,"spritePosition");
			HX_STACK_LINE(110)
			this->recentPositions->unshift(spritePosition);
			HX_STACK_LINE(111)
			if (((this->recentPositions->length > this->trailLength))){
				HX_STACK_LINE(111)
				this->recentPositions->pop();
			}
			HX_STACK_LINE(114)
			if ((this->rotationsEnabled)){
				HX_STACK_LINE(116)
				Float spriteAngle = this->sprite->angle;		HX_STACK_VAR(spriteAngle,"spriteAngle");
				HX_STACK_LINE(117)
				this->recentAngles->unshift(spriteAngle);
				HX_STACK_LINE(118)
				if (((this->recentAngles->length > this->trailLength))){
					HX_STACK_LINE(118)
					this->recentAngles->pop();
				}
			}
			HX_STACK_LINE(122)
			::org::flixel::FlxSprite trailSprite;		HX_STACK_VAR(trailSprite,"trailSprite");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->recentPositions->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(123)
				while(((_g1 < _g))){
					HX_STACK_LINE(123)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(125)
					trailSprite = this->members->__get(i);
					HX_STACK_LINE(126)
					trailSprite->x = this->recentPositions->__get(i)->x;
					HX_STACK_LINE(127)
					trailSprite->y = this->recentPositions->__get(i)->y;
					HX_STACK_LINE(129)
					if ((this->rotationsEnabled)){
						HX_STACK_LINE(129)
						trailSprite->angle = this->recentAngles->__get(i);
					}
					HX_STACK_LINE(132)
					trailSprite->exists = true;
				}
			}
		}
		HX_STACK_LINE(136)
		this->super::update();
	}
return null();
}



FlxTrail_obj::FlxTrail_obj()
{
}

void FlxTrail_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrail);
	HX_MARK_MEMBER_NAME(recentAngles,"recentAngles");
	HX_MARK_MEMBER_NAME(recentPositions,"recentPositions");
	HX_MARK_MEMBER_NAME(difference,"difference");
	HX_MARK_MEMBER_NAME(transp,"transp");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(trailLength,"trailLength");
	HX_MARK_MEMBER_NAME(counter,"counter");
	HX_MARK_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_MARK_MEMBER_NAME(yEnabled,"yEnabled");
	HX_MARK_MEMBER_NAME(xEnabled,"xEnabled");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTrail_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(recentAngles,"recentAngles");
	HX_VISIT_MEMBER_NAME(recentPositions,"recentPositions");
	HX_VISIT_MEMBER_NAME(difference,"difference");
	HX_VISIT_MEMBER_NAME(transp,"transp");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(trailLength,"trailLength");
	HX_VISIT_MEMBER_NAME(counter,"counter");
	HX_VISIT_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_VISIT_MEMBER_NAME(yEnabled,"yEnabled");
	HX_VISIT_MEMBER_NAME(xEnabled,"xEnabled");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTrail_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"transp") ) { return transp; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yEnabled") ) { return yEnabled; }
		if (HX_FIELD_EQ(inName,"xEnabled") ) { return xEnabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetTrail") ) { return resetTrail_dyn(); }
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"difference") ) { return difference; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trailLength") ) { return trailLength; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"recentAngles") ) { return recentAngles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"changeGraphic") ) { return changeGraphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseLength") ) { return increaseLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"recentPositions") ) { return recentPositions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { return rotationsEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeValuesEnabled") ) { return changeValuesEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTrail_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"transp") ) { transp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"yEnabled") ) { yEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xEnabled") ) { xEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"difference") ) { difference=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trailLength") ) { trailLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"recentAngles") ) { recentAngles=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"recentPositions") ) { recentPositions=inValue.Cast< Array< ::org::flixel::FlxPoint > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { rotationsEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrail_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("recentAngles"));
	outFields->push(HX_CSTRING("recentPositions"));
	outFields->push(HX_CSTRING("difference"));
	outFields->push(HX_CSTRING("transp"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("trailLength"));
	outFields->push(HX_CSTRING("counter"));
	outFields->push(HX_CSTRING("rotationsEnabled"));
	outFields->push(HX_CSTRING("yEnabled"));
	outFields->push(HX_CSTRING("xEnabled"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("sprite"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("changeValuesEnabled"),
	HX_CSTRING("changeGraphic"),
	HX_CSTRING("increaseLength"),
	HX_CSTRING("resetTrail"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("recentAngles"),
	HX_CSTRING("recentPositions"),
	HX_CSTRING("difference"),
	HX_CSTRING("transp"),
	HX_CSTRING("image"),
	HX_CSTRING("trailLength"),
	HX_CSTRING("counter"),
	HX_CSTRING("rotationsEnabled"),
	HX_CSTRING("yEnabled"),
	HX_CSTRING("xEnabled"),
	HX_CSTRING("delay"),
	HX_CSTRING("sprite"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTrail_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTrail_obj::__mClass,"__mClass");
};

Class FlxTrail_obj::__mClass;

void FlxTrail_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("addons.FlxTrail"), hx::TCanCast< FlxTrail_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTrail_obj::__boot()
{
}

} // end namespace addons
