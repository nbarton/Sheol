#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_org_flixel_FlxLayer
#include <org/flixel/FlxLayer.h>
#endif
#ifndef INCLUDED_org_flixel_FlxU
#include <org/flixel/FlxU.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{

Void FlxGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxGroup::new","org/flixel/FlxGroup.hx",54);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(56)
	this->members = Array_obj< ::org::flixel::FlxBasic >::__new();
	HX_STACK_LINE(57)
	this->length = (int)0;
	HX_STACK_LINE(58)
	this->setMaxSize(::Math_obj::floor(::Math_obj::abs(MaxSize)));
	HX_STACK_LINE(59)
	this->_marker = (int)0;
	HX_STACK_LINE(60)
	this->_sortIndex = null();
}
;
	return null();
}

FlxGroup_obj::~FlxGroup_obj() { }

Dynamic FlxGroup_obj::__CreateEmpty() { return  new FlxGroup_obj; }
hx::ObjectPtr< FlxGroup_obj > FlxGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGroup_obj > result = new FlxGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

int FlxGroup_obj::sortHandler( ::org::flixel::FlxBasic Obj1,::org::flixel::FlxBasic Obj2){
	HX_STACK_PUSH("FlxGroup::sortHandler","org/flixel/FlxGroup.hx",657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Obj1,"Obj1");
	HX_STACK_ARG(Obj2,"Obj2");
	HX_STACK_LINE(658)
	int prop1 = (  (((Obj1 == null()))) ? Dynamic(null()) : Dynamic(Obj1->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(659)
	int prop2 = (  (((Obj2 == null()))) ? Dynamic(null()) : Dynamic(Obj2->__Field(this->_sortIndex,true)) );		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(661)
	if (((prop1 < prop2))){
		HX_STACK_LINE(662)
		return this->_sortOrder;
	}
	else{
		HX_STACK_LINE(665)
		if (((prop1 > prop2))){
			HX_STACK_LINE(666)
			return -(this->_sortOrder);
		}
	}
	HX_STACK_LINE(669)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,sortHandler,return )

Void FlxGroup_obj::kill( ){
{
		HX_STACK_PUSH("FlxGroup::kill","org/flixel/FlxGroup.hx",636);
		HX_STACK_THIS(this);
		HX_STACK_LINE(637)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(638)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(639)
		while(((i < this->length))){
			HX_STACK_LINE(641)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(642)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(643)
				basic->kill();
			}
		}
		HX_STACK_LINE(647)
		this->super::kill();
	}
return null();
}


Void FlxGroup_obj::clear( ){
{
		HX_STACK_PUSH("FlxGroup::clear","org/flixel/FlxGroup.hx",627);
		HX_STACK_THIS(this);
		HX_STACK_LINE(628)
		this->length = (int)0;
		HX_STACK_LINE(629)
		this->members->splice((int)0,this->members->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,clear,(void))

::org::flixel::FlxBasic FlxGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxGroup::getRandom","org/flixel/FlxGroup.hx",610);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(611)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(612)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(615)
		if (((Length <= (int)0))){
			HX_STACK_LINE(616)
			Length = this->length;
		}
		HX_STACK_LINE(619)
		return hx::TCast< org::flixel::FlxBasic >::cast(::org::flixel::FlxG_obj::getRandom(this->members,StartIndex,Length));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,getRandom,return )

int FlxGroup_obj::countDead( ){
	HX_STACK_PUSH("FlxGroup::countDead","org/flixel/FlxGroup.hx",579);
	HX_STACK_THIS(this);
	HX_STACK_LINE(580)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(581)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(582)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(583)
	while(((i < this->length))){
		HX_STACK_LINE(585)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(586)
		if (((basic != null()))){
			HX_STACK_LINE(588)
			if (((count < (int)0))){
				HX_STACK_LINE(589)
				count = (int)0;
			}
			HX_STACK_LINE(592)
			if ((!(basic->alive))){
				HX_STACK_LINE(593)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(598)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,countDead,return )

int FlxGroup_obj::countLiving( ){
	HX_STACK_PUSH("FlxGroup::countLiving","org/flixel/FlxGroup.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_LINE(553)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(554)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(555)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(556)
	while(((i < this->length))){
		HX_STACK_LINE(558)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(559)
		if (((basic != null()))){
			HX_STACK_LINE(561)
			if (((count < (int)0))){
				HX_STACK_LINE(562)
				count = (int)0;
			}
			HX_STACK_LINE(565)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(566)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(571)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,countLiving,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstDead( ){
	HX_STACK_PUSH("FlxGroup::getFirstDead","org/flixel/FlxGroup.hx",533);
	HX_STACK_THIS(this);
	HX_STACK_LINE(534)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(535)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(536)
	while(((i < this->length))){
		HX_STACK_LINE(538)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(539)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(540)
			return basic;
		}
	}
	HX_STACK_LINE(544)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstDead,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstAlive( ){
	HX_STACK_PUSH("FlxGroup::getFirstAlive","org/flixel/FlxGroup.hx",512);
	HX_STACK_THIS(this);
	HX_STACK_LINE(513)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(514)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(515)
	while(((i < this->length))){
		HX_STACK_LINE(517)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(518)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(519)
			return basic;
		}
	}
	HX_STACK_LINE(523)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstAlive,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstExtant( ){
	HX_STACK_PUSH("FlxGroup::getFirstExtant","org/flixel/FlxGroup.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_LINE(492)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(493)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(494)
	while(((i < this->length))){
		HX_STACK_LINE(496)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(497)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(498)
			return basic;
		}
	}
	HX_STACK_LINE(502)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstExtant,return )

int FlxGroup_obj::getFirstNull( ){
	HX_STACK_PUSH("FlxGroup::getFirstNull","org/flixel/FlxGroup.hx",467);
	HX_STACK_THIS(this);
	HX_STACK_LINE(468)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(469)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(470)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(471)
	while(((i < l))){
		HX_STACK_LINE(472)
		if (((this->members->__get(i) == null()))){
			HX_STACK_LINE(474)
			return i;
		}
		else{
			HX_STACK_LINE(478)
			(i)++;
		}
	}
	HX_STACK_LINE(482)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGroup_obj,getFirstNull,return )

::org::flixel::FlxBasic FlxGroup_obj::getFirstAvailable( ::Class ObjectClass){
	HX_STACK_PUSH("FlxGroup::getFirstAvailable","org/flixel/FlxGroup.hx",447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_LINE(448)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(449)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(450)
	while(((i < this->length))){
		HX_STACK_LINE(452)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(453)
		if (((bool((bool((basic != null())) && bool(!(basic->exists)))) && bool(((bool((ObjectClass == null())) || bool(::Std_obj::is(basic,ObjectClass)))))))){
			HX_STACK_LINE(454)
			return basic;
		}
	}
	HX_STACK_LINE(458)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,getFirstAvailable,return )

Void FlxGroup_obj::callAll( ::String FunctionName,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxGroup::callAll","org/flixel/FlxGroup.hx",420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FunctionName,"FunctionName");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(421)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(422)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(423)
		while(((i < this->length))){
			HX_STACK_LINE(425)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(426)
			if (((basic != null()))){
				HX_STACK_LINE(427)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxGroup >()))))){
					HX_STACK_LINE(429)
					(hx::TCast< org::flixel::FlxGroup >::cast(basic))->callAll(FunctionName,Recurse);
				}
				else{
					HX_STACK_LINE(433)
					::Reflect_obj::callMethod(basic,(  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) ),Dynamic( Array_obj<Dynamic>::__new()));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,callAll,(void))

Void FlxGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxGroup::setAll","org/flixel/FlxGroup.hx",393);
	HX_STACK_THIS(this);
	HX_STACK_ARG(VariableName,"VariableName");
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(394)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(395)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(396)
		while(((i < this->length))){
			HX_STACK_LINE(398)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(399)
			if (((basic != null()))){
				HX_STACK_LINE(400)
				if (((bool(Recurse) && bool(::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxGroup >()))))){
					HX_STACK_LINE(402)
					(hx::TCast< org::flixel::FlxGroup >::cast(basic))->setAll(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(406)
					if (((basic != null()))){
						HX_STACK_LINE(407)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxGroup_obj,setAll,(void))

Void FlxGroup_obj::sort( ::String __o_Index,hx::Null< int >  __o_Order){
::String Index = __o_Index.Default(HX_CSTRING("y"));
int Order = __o_Order.Default(-1);
	HX_STACK_PUSH("FlxGroup::sort","org/flixel/FlxGroup.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Order,"Order");
{
		HX_STACK_LINE(381)
		this->_sortIndex = Index;
		HX_STACK_LINE(382)
		this->_sortOrder = Order;
		HX_STACK_LINE(383)
		this->members->sort(this->sortHandler_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,sort,(void))

::org::flixel::FlxBasic FlxGroup_obj::replace( ::org::flixel::FlxBasic OldObject,::org::flixel::FlxBasic NewObject){
	HX_STACK_PUSH("FlxGroup::replace","org/flixel/FlxGroup.hx",360);
	HX_STACK_THIS(this);
	HX_STACK_ARG(OldObject,"OldObject");
	HX_STACK_ARG(NewObject,"NewObject");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &OldObject){
			HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",361);
			{
				HX_STACK_LINE(361)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(361)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(361)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(361)
					while(((_g < len))){
						HX_STACK_LINE(361)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(361)
						if (((array->__GetItem(i) == OldObject))){
							HX_STACK_LINE(361)
							index = i;
						}
					}
				}
				HX_STACK_LINE(361)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(361)
	int index = _Function_1_1::Block(this,OldObject);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(362)
	if (((bool((index < (int)0)) || bool((index >= this->members->length))))){
		HX_STACK_LINE(363)
		return null();
	}
	HX_STACK_LINE(366)
	this->members[index] = NewObject;
	HX_STACK_LINE(367)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,replace,return )

::org::flixel::FlxBasic FlxGroup_obj::remove( ::org::flixel::FlxBasic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("FlxGroup::remove","org/flixel/FlxGroup.hx",335);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Splice,"Splice");
{
		struct _Function_1_1{
			inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &Object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",336);
				{
					HX_STACK_LINE(336)
					Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(336)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(336)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(336)
						while(((_g < len))){
							HX_STACK_LINE(336)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(336)
							if (((array->__GetItem(i) == Object))){
								HX_STACK_LINE(336)
								index = i;
							}
						}
					}
					HX_STACK_LINE(336)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(336)
		int index = _Function_1_1::Block(this,Object);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(337)
		if (((bool((index < (int)0)) || bool((index >= this->members->length))))){
			HX_STACK_LINE(338)
			return null();
		}
		HX_STACK_LINE(341)
		if ((Splice)){
			HX_STACK_LINE(343)
			this->members->splice(index,(int)1);
			HX_STACK_LINE(344)
			(this->length)--;
		}
		else{
			HX_STACK_LINE(347)
			this->members[index] = null();
		}
		HX_STACK_LINE(350)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGroup_obj,remove,return )

::org::flixel::FlxBasic FlxGroup_obj::recycle( ::Class ObjectClass){
	HX_STACK_PUSH("FlxGroup::recycle","org/flixel/FlxGroup.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_LINE(292)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(293)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(294)
		if (((this->length < this->maxSize))){
			HX_STACK_LINE(297)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(298)
				return null();
			}
			HX_STACK_LINE(301)
			return this->add(::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new())));
		}
		else{
			HX_STACK_LINE(305)
			basic = this->members->__get((this->_marker)++);
			HX_STACK_LINE(306)
			if (((this->_marker >= this->maxSize))){
				HX_STACK_LINE(307)
				this->_marker = (int)0;
			}
			HX_STACK_LINE(310)
			return basic;
		}
	}
	else{
		HX_STACK_LINE(315)
		basic = this->getFirstAvailable(ObjectClass);
		HX_STACK_LINE(316)
		if (((basic != null()))){
			HX_STACK_LINE(317)
			return basic;
		}
		HX_STACK_LINE(320)
		if (((ObjectClass == null()))){
			HX_STACK_LINE(321)
			return null();
		}
		HX_STACK_LINE(324)
		return this->add(::Type_obj::createInstance(ObjectClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	HX_STACK_LINE(293)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,recycle,return )

::org::flixel::FlxLayer FlxGroup_obj::set_layer( ::org::flixel::FlxLayer value){
	HX_STACK_PUSH("FlxGroup::set_layer","org/flixel/FlxGroup.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(257)
	if (((this->_layer != value))){
		HX_STACK_LINE(259)
		if (((value == null()))){
			HX_STACK_LINE(261)
			this->_node = null();
			HX_STACK_LINE(262)
			this->_framesData = null();
		}
		HX_STACK_LINE(265)
		this->_layer = value;
	}
	HX_STACK_LINE(268)
	return value;
}


Void FlxGroup_obj::addToGroupLayer( ::org::flixel::FlxBasic Object){
{
		HX_STACK_PUSH("FlxGroup::addToGroupLayer","org/flixel/FlxGroup.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Object,"Object");
		HX_STACK_LINE(248)
		if (((this->_layer != null()))){
			HX_STACK_LINE(250)
			this->_layer->add(Object);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,addToGroupLayer,(void))

::org::flixel::FlxBasic FlxGroup_obj::add( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxGroup::add","org/flixel/FlxGroup.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(183)
	if (((Object == null()))){
		HX_STACK_LINE(185)
		::org::flixel::FlxG_obj::log(HX_CSTRING("WARNING: Cannot add a `null` object to a FlxGroup."));
		HX_STACK_LINE(186)
		return null();
	}
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxGroup_obj *__this,::org::flixel::FlxBasic &Object){
			HX_STACK_PUSH("*::closure","org/flixel/FlxGroup.hx",190);
			{
				HX_STACK_LINE(190)
				Dynamic array = __this->members;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(190)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(190)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(190)
				{
					HX_STACK_LINE(190)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(190)
					while(((_g < len))){
						HX_STACK_LINE(190)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(190)
						if (((array->__GetItem(i) == Object))){
							HX_STACK_LINE(190)
							index = i;
						}
					}
				}
				HX_STACK_LINE(190)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	if (((_Function_1_1::Block(this,Object) >= (int)0))){
		HX_STACK_LINE(191)
		return Object;
	}
	HX_STACK_LINE(196)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(197)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(198)
	while(((i < l))){
		HX_STACK_LINE(200)
		if (((this->members->__get(i) == null()))){
			HX_STACK_LINE(202)
			this->members[i] = Object;
			HX_STACK_LINE(203)
			if (((i >= this->length))){
				HX_STACK_LINE(204)
				this->length = (i + (int)1);
			}
			HX_STACK_LINE(208)
			this->addToGroupLayer(Object);
			HX_STACK_LINE(210)
			return Object;
		}
		HX_STACK_LINE(212)
		(i)++;
	}
	HX_STACK_LINE(216)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(217)
		if (((this->members->length >= this->maxSize))){
			HX_STACK_LINE(219)
			return Object;
		}
		else{
			HX_STACK_LINE(222)
			if ((((this->members->length * (int)2) <= this->maxSize))){
				HX_STACK_LINE(223)
				::org::flixel::FlxU_obj::SetArrayLength(this->members,(this->members->length * (int)2));
			}
			else{
				HX_STACK_LINE(227)
				::org::flixel::FlxU_obj::SetArrayLength(this->members,this->maxSize);
			}
		}
	}
	else{
		HX_STACK_LINE(232)
		::org::flixel::FlxU_obj::SetArrayLength(this->members,(this->members->length * (int)2));
	}
	HX_STACK_LINE(239)
	this->addToGroupLayer(Object);
	HX_STACK_LINE(241)
	this->members[i] = Object;
	HX_STACK_LINE(242)
	this->length = (i + (int)1);
	HX_STACK_LINE(243)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,add,return )

int FlxGroup_obj::setMaxSize( int Size){
	HX_STACK_PUSH("FlxGroup::setMaxSize","org/flixel/FlxGroup.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(144)
	this->maxSize = ::Math_obj::floor(::Math_obj::abs(Size));
	HX_STACK_LINE(145)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(146)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(149)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->members == null())))) || bool((this->maxSize >= this->members->length))))){
		HX_STACK_LINE(150)
		return this->maxSize;
	}
	HX_STACK_LINE(155)
	::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(156)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(157)
	int l = this->members->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(158)
	while(((i < l))){
		HX_STACK_LINE(160)
		basic = this->members->__get((i)++);
		HX_STACK_LINE(161)
		if (((basic != null()))){
			HX_STACK_LINE(162)
			basic->destroy();
		}
	}
	HX_STACK_LINE(166)
	this->length = this->maxSize;
	HX_STACK_LINE(167)
	::org::flixel::FlxU_obj::SetArrayLength(this->members,this->maxSize);
	HX_STACK_LINE(168)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGroup_obj,setMaxSize,return )

Void FlxGroup_obj::draw( ){
{
		HX_STACK_PUSH("FlxGroup::draw","org/flixel/FlxGroup.hx",126);
		HX_STACK_THIS(this);
		HX_STACK_LINE(127)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(128)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(129)
		while(((i < this->length))){
			HX_STACK_LINE(131)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(132)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(133)
				basic->draw();
			}
		}
	}
return null();
}


Void FlxGroup_obj::update( ){
{
		HX_STACK_PUSH("FlxGroup::update","org/flixel/FlxGroup.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(98)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(99)
		while(((i < this->length))){
			HX_STACK_LINE(101)
			basic = this->members->__get((i)++);
			HX_STACK_LINE(102)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(104)
				basic->preUpdate();
				HX_STACK_LINE(105)
				basic->update();
				HX_STACK_LINE(107)
				if ((basic->getTween())){
					HX_STACK_LINE(109)
					::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(109)
					Dynamic ft = basic->_tween;		HX_STACK_VAR(ft,"ft");
					HX_STACK_LINE(109)
					while(((ft != null()))){
						HX_STACK_LINE(109)
						t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
						HX_STACK_LINE(109)
						if ((t->active)){
							HX_STACK_LINE(109)
							t->update();
							HX_STACK_LINE(109)
							if ((ft->__Field(HX_CSTRING("_finish"),true))){
								HX_STACK_LINE(109)
								ft->__Field(HX_CSTRING("finish"),true)();
							}
						}
						HX_STACK_LINE(109)
						ft = ft->__Field(HX_CSTRING("_next"),true);
					}
				}
				HX_STACK_LINE(112)
				basic->postUpdate();
			}
		}
		HX_STACK_LINE(116)
		if ((this->getTween())){
			HX_STACK_LINE(118)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(118)
			Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(118)
			while(((ft != null()))){
				HX_STACK_LINE(118)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(118)
				if ((t->active)){
					HX_STACK_LINE(118)
					t->update();
					HX_STACK_LINE(118)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(118)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(118)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
	}
return null();
}


Void FlxGroup_obj::preUpdate( ){
{
		HX_STACK_PUSH("FlxGroup::preUpdate","org/flixel/FlxGroup.hx",90);
		HX_STACK_THIS(this);
	}
return null();
}


Void FlxGroup_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGroup::destroy","org/flixel/FlxGroup.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		if (((this->members != null()))){
			HX_STACK_LINE(71)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(72)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			while(((i < this->length))){
				HX_STACK_LINE(75)
				basic = this->members->__get((i)++);
				HX_STACK_LINE(76)
				if (((basic != null()))){
					HX_STACK_LINE(77)
					basic->destroy();
				}
			}
			HX_STACK_LINE(81)
			this->members = null();
		}
		HX_STACK_LINE(83)
		this->_sortIndex = null();
		HX_STACK_LINE(84)
		this->super::destroy();
	}
return null();
}


int FlxGroup_obj::ASCENDING;

int FlxGroup_obj::DESCENDING;


FlxGroup_obj::FlxGroup_obj()
{
}

void FlxGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGroup);
	HX_MARK_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_MARK_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_sortOrder,"_sortOrder");
	HX_VISIT_MEMBER_NAME(_sortIndex,"_sortIndex");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"members") ) { return members; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ASCENDING") ) { return ASCENDING; }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DESCENDING") ) { return DESCENDING; }
		if (HX_FIELD_EQ(inName,"setMaxSize") ) { return setMaxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { return _sortOrder; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { return _sortIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFirstExtant") ) { return getFirstExtant_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addToGroupLayer") ) { return addToGroupLayer_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< Array< ::org::flixel::FlxBasic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return setMaxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ASCENDING") ) { ASCENDING=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DESCENDING") ) { DESCENDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortOrder") ) { _sortOrder=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortIndex") ) { _sortIndex=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_sortOrder"));
	outFields->push(HX_CSTRING("_sortIndex"));
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("members"));
	outFields->push(HX_CSTRING("maxSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASCENDING"),
	HX_CSTRING("DESCENDING"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sortHandler"),
	HX_CSTRING("kill"),
	HX_CSTRING("clear"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("countDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstExtant"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("callAll"),
	HX_CSTRING("setAll"),
	HX_CSTRING("sort"),
	HX_CSTRING("replace"),
	HX_CSTRING("remove"),
	HX_CSTRING("recycle"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("addToGroupLayer"),
	HX_CSTRING("add"),
	HX_CSTRING("setMaxSize"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_sortOrder"),
	HX_CSTRING("_sortIndex"),
	HX_CSTRING("_marker"),
	HX_CSTRING("length"),
	HX_CSTRING("members"),
	HX_CSTRING("maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGroup_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxGroup_obj::DESCENDING,"DESCENDING");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxGroup_obj::DESCENDING,"DESCENDING");
};

Class FlxGroup_obj::__mClass;

void FlxGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGroup"), hx::TCanCast< FlxGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGroup_obj::__boot()
{
	ASCENDING= (int)-1;
	DESCENDING= (int)1;
}

} // end namespace org
} // end namespace flixel
