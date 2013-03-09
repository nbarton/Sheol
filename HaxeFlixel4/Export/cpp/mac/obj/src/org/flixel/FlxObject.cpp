#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_display_LineScaleMode
#include <neash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
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
#ifndef INCLUDED_org_flixel_FlxPath
#include <org/flixel/FlxPath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
namespace org{
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxObject::new","org/flixel/FlxObject.hx",15);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(269)
	this->_boundingBoxColorOverritten = false;
	HX_STACK_LINE(287)
	super::__construct();
	HX_STACK_LINE(289)
	this->x = X;
	HX_STACK_LINE(290)
	this->y = Y;
	HX_STACK_LINE(291)
	this->last = ::org::flixel::FlxPoint_obj::__new(this->x,this->y);
	HX_STACK_LINE(292)
	this->width = Width;
	HX_STACK_LINE(293)
	this->height = Height;
	HX_STACK_LINE(294)
	this->mass = 1.0;
	HX_STACK_LINE(295)
	this->elasticity = 0.0;
	HX_STACK_LINE(297)
	this->health = (int)1;
	HX_STACK_LINE(299)
	this->immovable = false;
	HX_STACK_LINE(300)
	this->moves = true;
	HX_STACK_LINE(302)
	this->touching = (int)0;
	HX_STACK_LINE(303)
	this->wasTouching = (int)0;
	HX_STACK_LINE(304)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(306)
	this->velocity = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(307)
	this->acceleration = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(308)
	this->drag = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(309)
	this->maxVelocity = ::org::flixel::FlxPoint_obj::__new((int)10000,(int)10000);
	HX_STACK_LINE(311)
	this->angle = (int)0;
	HX_STACK_LINE(312)
	this->angularVelocity = (int)0;
	HX_STACK_LINE(313)
	this->angularAcceleration = (int)0;
	HX_STACK_LINE(314)
	this->angularDrag = (int)0;
	HX_STACK_LINE(315)
	this->maxAngular = (int)10000;
	HX_STACK_LINE(317)
	this->scrollFactor = ::org::flixel::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(318)
	this->_flicker = false;
	HX_STACK_LINE(319)
	this->_flickerTimer = (int)0;
	HX_STACK_LINE(321)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(322)
	this->_rect = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(324)
	this->path = null();
	HX_STACK_LINE(325)
	this->pathSpeed = (int)0;
	HX_STACK_LINE(326)
	this->pathAngle = (int)0;
}
;
	return null();
}

FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > result = new FlxObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_PUSH("FlxObject::hurt","org/flixel/FlxObject.hx",1061);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Damage,"Damage");
		HX_STACK_LINE(1062)
		this->health = (this->health - Damage);
		HX_STACK_LINE(1063)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(1064)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_PUSH("FlxObject::justTouched","org/flixel/FlxObject.hx",1051);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1051)
	return (bool((((int(this->touching) & int(Direction))) > (int)0)) && bool((((int(this->wasTouching) & int(Direction))) <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_PUSH("FlxObject::isTouching","org/flixel/FlxObject.hx",1041);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1041)
	return (((int(this->touching) & int(Direction))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_PUSH("FlxObject::reset","org/flixel/FlxObject.hx",1023);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1024)
		this->revive();
		HX_STACK_LINE(1025)
		this->touching = (int)0;
		HX_STACK_LINE(1026)
		this->wasTouching = (int)0;
		HX_STACK_LINE(1027)
		this->x = X;
		HX_STACK_LINE(1028)
		this->y = Y;
		HX_STACK_LINE(1029)
		this->last->x = this->x;
		HX_STACK_LINE(1030)
		this->last->y = this->y;
		HX_STACK_LINE(1031)
		this->velocity->x = (int)0;
		HX_STACK_LINE(1032)
		this->velocity->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

::org::flixel::FlxPoint FlxObject_obj::getMidpoint( ::org::flixel::FlxPoint point){
	HX_STACK_PUSH("FlxObject::getMidpoint","org/flixel/FlxObject.hx",1006);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(1007)
	if (((point == null()))){
		HX_STACK_LINE(1008)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(1011)
	point->x = (this->x + (this->width * 0.5));
	HX_STACK_LINE(1012)
	point->y = (this->y + (this->height * 0.5));
	HX_STACK_LINE(1013)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

bool FlxObject_obj::setSolid( bool Solid){
	HX_STACK_PUSH("FlxObject::setSolid","org/flixel/FlxObject.hx",988);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Solid,"Solid");
	HX_STACK_LINE(989)
	if ((Solid)){
		HX_STACK_LINE(990)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(994)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(997)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,setSolid,return )

bool FlxObject_obj::getSolid( ){
	HX_STACK_PUSH("FlxObject::getSolid","org/flixel/FlxObject.hx",980);
	HX_STACK_THIS(this);
	HX_STACK_LINE(980)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,getSolid,return )

bool FlxObject_obj::getFlickering( ){
	HX_STACK_PUSH("FlxObject::getFlickering","org/flixel/FlxObject.hx",968);
	HX_STACK_THIS(this);
	HX_STACK_LINE(968)
	return (this->_flickerTimer != (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,getFlickering,return )

Void FlxObject_obj::flicker( hx::Null< Float >  __o_Duration){
Float Duration = __o_Duration.Default(1);
	HX_STACK_PUSH("FlxObject::flicker","org/flixel/FlxObject.hx",953);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
{
		HX_STACK_LINE(954)
		this->_flickerTimer = Duration;
		HX_STACK_LINE(955)
		if (((this->_flickerTimer == (int)0))){
			HX_STACK_LINE(956)
			this->_flicker = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,flicker,(void))

::org::flixel::FlxPoint FlxObject_obj::getScreenXY( ::org::flixel::FlxPoint point,::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::getScreenXY","org/flixel/FlxObject.hx",931);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(932)
	if (((point == null()))){
		HX_STACK_LINE(933)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(936)
	if (((Camera == null()))){
		HX_STACK_LINE(937)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(940)
	point->x = (this->x - ::Math_obj::floor((Camera->scroll->x * this->scrollFactor->x)));
	HX_STACK_LINE(941)
	point->y = (this->y - ::Math_obj::floor((Camera->scroll->y * this->scrollFactor->y)));
	HX_STACK_LINE(942)
	hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
	HX_STACK_LINE(943)
	hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
	HX_STACK_LINE(944)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenXY,return )

bool FlxObject_obj::onScreenObject( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreenObject","org/flixel/FlxObject.hx",915);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(916)
	if (((Camera == null()))){
		HX_STACK_LINE(917)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(920)
	{
		HX_STACK_LINE(920)
		::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(920)
		if (((point == null()))){
			HX_STACK_LINE(920)
			point = ::org::flixel::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(920)
		if (((Camera1 == null()))){
			HX_STACK_LINE(920)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(920)
		point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(920)
		point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(920)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(920)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(920)
		point;
	}
	HX_STACK_LINE(921)
	return (bool((bool((bool(((this->_point->x + this->width) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->height) > (int)0)))) && bool((this->_point->y < Camera->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreenObject,return )

bool FlxObject_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxObject::onScreen","org/flixel/FlxObject.hx",910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",911);
			{
				HX_STACK_LINE(911)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(911)
				if (((Camera1 == null()))){
					HX_STACK_LINE(911)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(911)
				{
					HX_STACK_LINE(911)
					::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(911)
					if (((point == null()))){
						HX_STACK_LINE(911)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(911)
					if (((Camera2 == null()))){
						HX_STACK_LINE(911)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(911)
					point->x = (__this->x - ::Math_obj::floor((Camera2->scroll->x * __this->scrollFactor->x)));
					HX_STACK_LINE(911)
					point->y = (__this->y - ::Math_obj::floor((Camera2->scroll->y * __this->scrollFactor->y)));
					HX_STACK_LINE(911)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(911)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(911)
					point;
				}
				HX_STACK_LINE(911)
				return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
			}
			return null();
		}
	};
	HX_STACK_LINE(910)
	return _Function_1_1::Block(Camera,this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onScreen,return )

bool FlxObject_obj::overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsPoint","org/flixel/FlxObject.hx",888);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(889)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(890)
			return (bool((bool((bool((point->x > this->x)) && bool((point->x < (this->x + this->width))))) && bool((point->y > this->y)))) && bool((point->y < (this->y + this->height))));
		}
		HX_STACK_LINE(894)
		if (((Camera == null()))){
			HX_STACK_LINE(895)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(898)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(899)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(900)
		{
			HX_STACK_LINE(900)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(900)
			if (((point1 == null()))){
				HX_STACK_LINE(900)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(900)
			if (((Camera1 == null()))){
				HX_STACK_LINE(900)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(900)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(900)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(900)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(900)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(900)
			point1;
		}
		HX_STACK_LINE(901)
		return (bool((bool((bool((X > this->_point->x)) && bool((X < (this->_point->x + this->width))))) && bool((Y > this->_point->y)))) && bool((Y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlapsAt","org/flixel/FlxObject.hx",832);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(833)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(835)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(836)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(837)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(838)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(839)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(840)
			while(((i < ::Std_obj::_int(grp->length)))){
				HX_STACK_LINE(841)
				if ((this->overlapsAt(X,Y,members->__get((i)++),InScreenSpace,Camera))){
					HX_STACK_LINE(843)
					results = true;
				}
			}
			HX_STACK_LINE(847)
			return results;
		}
		HX_STACK_LINE(850)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(856)
			::org::flixel::FlxTilemap tilemap = hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup);		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(857)
			return tilemap->overlapsAt((tilemap->x - ((X - this->x))),(tilemap->y - ((Y - this->y))),hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(860)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(861)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(862)
			return (bool((bool((bool(((object->x + object->width) > X)) && bool((object->x < (X + this->width))))) && bool(((object->y + object->height) > Y)))) && bool((object->y < (Y + this->height))));
		}
		HX_STACK_LINE(867)
		if (((Camera == null()))){
			HX_STACK_LINE(868)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",871);
				{
					HX_STACK_LINE(871)
					::org::flixel::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(871)
					if (((point == null()))){
						HX_STACK_LINE(871)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(871)
					if (((Camera1 == null()))){
						HX_STACK_LINE(871)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(871)
					point->x = (object->x - ::Math_obj::floor((Camera1->scroll->x * object->scrollFactor->x)));
					HX_STACK_LINE(871)
					point->y = (object->y - ::Math_obj::floor((Camera1->scroll->y * object->scrollFactor->y)));
					HX_STACK_LINE(871)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(871)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(871)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(871)
		::org::flixel::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(872)
		this->_point->x = (X - ::Std_obj::_int((Camera->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(873)
		this->_point->y = (Y - ::Std_obj::_int((Camera->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(874)
		hx::AddEq(this->_point->x,(  (((this->_point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(875)
		hx::AddEq(this->_point->y,(  (((this->_point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(876)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxObject::overlaps","org/flixel/FlxObject.hx",779);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(780)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(782)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(783)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(784)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(785)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(786)
			while(((i < grp->length))){
				HX_STACK_LINE(787)
				if ((this->overlaps(members->__get((i)++),InScreenSpace,Camera))){
					HX_STACK_LINE(789)
					results = true;
				}
			}
			HX_STACK_LINE(793)
			return results;
		}
		HX_STACK_LINE(796)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
			HX_STACK_LINE(797)
			return (hx::TCast< org::flixel::FlxTilemap >::cast(ObjectOrGroup))->overlaps(hx::ObjectPtr<OBJ_>(this),InScreenSpace,Camera);
		}
		HX_STACK_LINE(803)
		::org::flixel::FlxObject object = hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(804)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(805)
			return (bool((bool((bool(((object->x + object->width) > this->x)) && bool((object->x < (this->x + this->width))))) && bool(((object->y + object->height) > this->y)))) && bool((object->y < (this->y + this->height))));
		}
		HX_STACK_LINE(810)
		if (((Camera == null()))){
			HX_STACK_LINE(811)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		struct _Function_1_1{
			inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxObject &object){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",814);
				{
					HX_STACK_LINE(814)
					::org::flixel::FlxPoint point = null();		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
					HX_STACK_LINE(814)
					if (((point == null()))){
						HX_STACK_LINE(814)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(814)
					if (((Camera1 == null()))){
						HX_STACK_LINE(814)
						Camera1 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(814)
					point->x = (object->x - ::Math_obj::floor((Camera1->scroll->x * object->scrollFactor->x)));
					HX_STACK_LINE(814)
					point->y = (object->y - ::Math_obj::floor((Camera1->scroll->y * object->scrollFactor->y)));
					HX_STACK_LINE(814)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(814)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(814)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		::org::flixel::FlxPoint objectScreenPos = _Function_1_1::Block(Camera,object);		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(815)
		{
			HX_STACK_LINE(815)
			::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(815)
			if (((point == null()))){
				HX_STACK_LINE(815)
				point = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(815)
			if (((Camera1 == null()))){
				HX_STACK_LINE(815)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(815)
			point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(815)
			point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(815)
			hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(815)
			hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(815)
			point;
		}
		HX_STACK_LINE(816)
		return (bool((bool((bool(((objectScreenPos->x + object->width) > this->_point->x)) && bool((objectScreenPos->x < (this->_point->x + this->width))))) && bool(((objectScreenPos->y + object->height) > this->_point->y)))) && bool((objectScreenPos->y < (this->_point->y + this->height))));
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

Void FlxObject_obj::updatePathMotion( ){
{
		HX_STACK_PUSH("FlxObject::updatePathMotion","org/flixel/FlxObject.hx",682);
		HX_STACK_THIS(this);
		HX_STACK_LINE(684)
		this->_point->x = (this->x + (this->width * 0.5));
		HX_STACK_LINE(685)
		this->_point->y = (this->y + (this->height * 0.5));
		HX_STACK_LINE(686)
		::org::flixel::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(687)
		Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(688)
		Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(690)
		bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(691)
		bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(693)
		if ((horizontalOnly)){
			HX_STACK_LINE(694)
			if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
				HX_STACK_LINE(696)
				node = this->advancePath(null());
			}
		}
		else{
			HX_STACK_LINE(700)
			if ((verticalOnly)){
				HX_STACK_LINE(701)
				if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(703)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(708)
				if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(710)
					node = this->advancePath(null());
				}
			}
		}
		HX_STACK_LINE(716)
		if (((this->pathSpeed != (int)0))){
			HX_STACK_LINE(719)
			this->_point->x = (this->x + (this->width * 0.5));
			HX_STACK_LINE(720)
			this->_point->y = (this->y + (this->height * 0.5));
			HX_STACK_LINE(721)
			if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
				HX_STACK_LINE(723)
				this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
				HX_STACK_LINE(724)
				if (((this->velocity->x < (int)0))){
					HX_STACK_LINE(725)
					this->pathAngle = (int)-90;
				}
				else{
					HX_STACK_LINE(729)
					this->pathAngle = (int)90;
				}
				HX_STACK_LINE(732)
				if ((!(horizontalOnly))){
					HX_STACK_LINE(733)
					this->velocity->y = (int)0;
				}
			}
			else{
				HX_STACK_LINE(737)
				if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
					HX_STACK_LINE(739)
					this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(740)
					if (((this->velocity->y < (int)0))){
						HX_STACK_LINE(741)
						this->pathAngle = (int)0;
					}
					else{
						HX_STACK_LINE(745)
						this->pathAngle = (int)180;
					}
					HX_STACK_LINE(748)
					if ((!(verticalOnly))){
						HX_STACK_LINE(749)
						this->velocity->x = (int)0;
					}
				}
				else{
					struct _Function_4_1{
						inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::FlxPoint &node){
							HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",755);
							{
								HX_STACK_LINE(755)
								::org::flixel::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
								HX_STACK_LINE(755)
								Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(755)
								Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(755)
								Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(755)
								if (((bool((x != (int)0)) || bool((y != (int)0))))){
									HX_STACK_LINE(755)
									Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(755)
									Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
									HX_STACK_LINE(755)
									Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(755)
									if (((x >= (int)0))){
										HX_STACK_LINE(755)
										angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
									}
									else{
										HX_STACK_LINE(755)
										angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
									}
									HX_STACK_LINE(755)
									angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
									HX_STACK_LINE(755)
									if (((angle > (int)90))){
										HX_STACK_LINE(755)
										angle = (angle - (int)270);
									}
									else{
										HX_STACK_LINE(755)
										hx::AddEq(angle,(int)90);
									}
								}
								HX_STACK_LINE(755)
								return angle;
							}
							return null();
						}
					};
					HX_STACK_LINE(755)
					this->pathAngle = _Function_4_1::Block(this,node);
					HX_STACK_LINE(756)
					{
						HX_STACK_LINE(756)
						::org::flixel::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(756)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(756)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(756)
						Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(756)
						while(((radians < -3.14159265))){
							HX_STACK_LINE(756)
							hx::AddEq(radians,6.28318531);
						}
						HX_STACK_LINE(756)
						while(((radians > 3.14159265))){
							HX_STACK_LINE(756)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(756)
						if (((radians < (int)0))){
							HX_STACK_LINE(756)
							sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
							HX_STACK_LINE(756)
							if (((sin < (int)0))){
								HX_STACK_LINE(756)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(756)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						else{
							HX_STACK_LINE(756)
							sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(756)
							if (((sin < (int)0))){
								HX_STACK_LINE(756)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(756)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						HX_STACK_LINE(756)
						hx::AddEq(radians,1.57079632);
						HX_STACK_LINE(756)
						if (((radians > 3.14159265))){
							HX_STACK_LINE(756)
							radians = (radians - 6.28318531);
						}
						HX_STACK_LINE(756)
						if (((radians < (int)0))){
							HX_STACK_LINE(756)
							cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
							HX_STACK_LINE(756)
							if (((cos < (int)0))){
								HX_STACK_LINE(756)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(756)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						else{
							HX_STACK_LINE(756)
							cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(756)
							if (((cos < (int)0))){
								HX_STACK_LINE(756)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(756)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						HX_STACK_LINE(756)
						Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(756)
						Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(756)
						if (((point == null()))){
							HX_STACK_LINE(756)
							point = ::org::flixel::FlxPoint_obj::__new(null(),null());
						}
						HX_STACK_LINE(756)
						point->x = ((cos * dx) - (sin * dy));
						HX_STACK_LINE(756)
						point->y = (((int)0 - (sin * dx)) - (cos * dy));
						HX_STACK_LINE(756)
						point;
					}
				}
			}
			HX_STACK_LINE(760)
			if ((this->_pathRotate)){
				HX_STACK_LINE(762)
				this->angularVelocity = (int)0;
				HX_STACK_LINE(763)
				this->angularAcceleration = (int)0;
				HX_STACK_LINE(764)
				this->angle = this->pathAngle;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updatePathMotion,(void))

::org::flixel::FlxPoint FlxObject_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_PUSH("FlxObject::advancePath","org/flixel/FlxObject.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Snap,"Snap");
{
		HX_STACK_LINE(591)
		if ((Snap)){
			HX_STACK_LINE(593)
			::org::flixel::FlxPoint oldNode = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(594)
			if (((oldNode != null()))){
				HX_STACK_LINE(596)
				if (((((int(this->_pathMode) & int((int)1048576))) == (int)0))){
					HX_STACK_LINE(597)
					this->x = (oldNode->x - (this->width * 0.5));
				}
				HX_STACK_LINE(600)
				if (((((int(this->_pathMode) & int((int)65536))) == (int)0))){
					HX_STACK_LINE(601)
					this->y = (oldNode->y - (this->height * 0.5));
				}
			}
		}
		HX_STACK_LINE(607)
		hx::AddEq(this->_pathNodeIndex,this->_pathInc);
		HX_STACK_LINE(609)
		if (((((int(this->_pathMode) & int((int)1))) > (int)0))){
			HX_STACK_LINE(610)
			if (((this->_pathNodeIndex < (int)0))){
				HX_STACK_LINE(613)
				this->_pathNodeIndex = (int)0;
				HX_STACK_LINE(614)
				this->stopFollowingPath(false);
			}
		}
		else{
			HX_STACK_LINE(617)
			if (((((int(this->_pathMode) & int((int)16))) > (int)0))){
				HX_STACK_LINE(618)
				if (((this->_pathNodeIndex >= this->path->nodes->length))){
					HX_STACK_LINE(620)
					this->_pathNodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(624)
				if (((((int(this->_pathMode) & int((int)256))) > (int)0))){
					HX_STACK_LINE(625)
					if (((this->_pathNodeIndex < (int)0))){
						HX_STACK_LINE(628)
						this->_pathNodeIndex = (this->path->nodes->length - (int)1);
						HX_STACK_LINE(629)
						if (((this->_pathNodeIndex < (int)0))){
							HX_STACK_LINE(630)
							this->_pathNodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(635)
					if (((((int(this->_pathMode) & int((int)4096))) > (int)0))){
						HX_STACK_LINE(636)
						if (((this->_pathInc > (int)0))){
							HX_STACK_LINE(638)
							if (((this->_pathNodeIndex >= this->path->nodes->length))){
								HX_STACK_LINE(641)
								this->_pathNodeIndex = (this->path->nodes->length - (int)2);
								HX_STACK_LINE(642)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(643)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(646)
								this->_pathInc = -(this->_pathInc);
							}
						}
						else{
							HX_STACK_LINE(649)
							if (((this->_pathNodeIndex < (int)0))){
								HX_STACK_LINE(651)
								this->_pathNodeIndex = (int)1;
								HX_STACK_LINE(652)
								if (((this->_pathNodeIndex >= this->path->nodes->length))){
									HX_STACK_LINE(653)
									this->_pathNodeIndex = (this->path->nodes->length - (int)1);
								}
								HX_STACK_LINE(656)
								if (((this->_pathNodeIndex < (int)0))){
									HX_STACK_LINE(657)
									this->_pathNodeIndex = (int)0;
								}
								HX_STACK_LINE(660)
								this->_pathInc = -(this->_pathInc);
							}
						}
					}
					else{
						HX_STACK_LINE(664)
						if (((this->_pathNodeIndex >= this->path->nodes->length))){
							HX_STACK_LINE(667)
							this->_pathNodeIndex = (this->path->nodes->length - (int)1);
							HX_STACK_LINE(668)
							this->stopFollowingPath(false);
						}
					}
				}
			}
		}
		HX_STACK_LINE(672)
		return this->path->nodes->__get(this->_pathNodeIndex);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,advancePath,return )

Void FlxObject_obj::stopFollowingPath( hx::Null< bool >  __o_DestroyPath){
bool DestroyPath = __o_DestroyPath.Default(false);
	HX_STACK_PUSH("FlxObject::stopFollowingPath","org/flixel/FlxObject.hx",573);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DestroyPath,"DestroyPath");
{
		HX_STACK_LINE(574)
		this->pathSpeed = (int)0;
		HX_STACK_LINE(575)
		this->velocity->x = (int)0;
		HX_STACK_LINE(576)
		this->velocity->y = (int)0;
		HX_STACK_LINE(578)
		if (((bool(DestroyPath) && bool((this->path != null()))))){
			HX_STACK_LINE(580)
			this->path->destroy();
			HX_STACK_LINE(581)
			this->path = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,stopFollowingPath,(void))

Void FlxObject_obj::followPath( ::org::flixel::FlxPath Path,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_PUSH("FlxObject::followPath","org/flixel/FlxObject.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Path,"Path");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(Mode,"Mode");
	HX_STACK_ARG(AutoRotate,"AutoRotate");
{
		HX_STACK_LINE(544)
		if (((Path->nodes->length <= (int)0))){
			HX_STACK_LINE(546)
			::org::flixel::FlxG_obj::log(HX_CSTRING("WARNING: Paths need at least one node in them to be followed."));
			HX_STACK_LINE(547)
			return null();
		}
		HX_STACK_LINE(550)
		this->path = Path;
		HX_STACK_LINE(551)
		this->pathSpeed = (  (((Speed > (int)0))) ? Float(Speed) : Float(-(Speed)) );
		HX_STACK_LINE(552)
		this->_pathMode = Mode;
		HX_STACK_LINE(553)
		this->_pathRotate = AutoRotate;
		HX_STACK_LINE(556)
		if (((bool((this->_pathMode == (int)1)) || bool((this->_pathMode == (int)256))))){
			HX_STACK_LINE(558)
			this->_pathNodeIndex = (this->path->nodes->length - (int)1);
			HX_STACK_LINE(559)
			this->_pathInc = (int)-1;
		}
		else{
			HX_STACK_LINE(563)
			this->_pathNodeIndex = (int)0;
			HX_STACK_LINE(564)
			this->_pathInc = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxObject_obj,followPath,(void))

Void FlxObject_obj::drawDebug( ::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxObject::drawDebug","org/flixel/FlxObject.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(463)
		if (((Camera == null()))){
			HX_STACK_LINE(464)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(469)
		Float boundingBoxX = (this->x - ::Std_obj::_int((Camera->scroll->x * this->scrollFactor->x)));		HX_STACK_VAR(boundingBoxX,"boundingBoxX");
		HX_STACK_LINE(470)
		Float boundingBoxY = (this->y - ::Std_obj::_int((Camera->scroll->y * this->scrollFactor->y)));		HX_STACK_VAR(boundingBoxY,"boundingBoxY");
		HX_STACK_LINE(478)
		if (((bool((this->allowCollisions != (int)0)) && bool(!(this->_boundingBoxColorOverritten))))){
			HX_STACK_LINE(480)
			if (((this->allowCollisions != (int)4369))){
				HX_STACK_LINE(481)
				this->onBoundingBoxColorSet((int)-1040641);
			}
			HX_STACK_LINE(488)
			if ((this->immovable)){
				HX_STACK_LINE(489)
				this->onBoundingBoxColorSet((int)-16715227);
			}
			else{
				HX_STACK_LINE(497)
				this->onBoundingBoxColorSet((int)-65518);
			}
		}
		else{
			HX_STACK_LINE(505)
			if ((!(this->_boundingBoxColorOverritten))){
				HX_STACK_LINE(506)
				this->onBoundingBoxColorSet((int)-16740119);
			}
		}
		HX_STACK_LINE(527)
		::neash::display::Graphics gfx = Camera->_debugLayer->nmeGetGraphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(528)
		gfx->lineStyle((int)1,this->debugBoundingBoxColor,0.5,null(),null(),null(),null(),null());
		HX_STACK_LINE(529)
		gfx->drawRect(boundingBoxX,boundingBoxY,this->width,this->height);
	}
return null();
}


Void FlxObject_obj::draw( ){
{
		HX_STACK_PUSH("FlxObject::draw","org/flixel/FlxObject.hx",432);
		HX_STACK_THIS(this);
		HX_STACK_LINE(433)
		if (((this->cameras == null()))){
			HX_STACK_LINE(434)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(437)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(438)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(439)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(440)
		while(((i < l))){
			HX_STACK_LINE(442)
			camera = this->cameras->__get((i)++);
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",443);
					{
						HX_STACK_LINE(443)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(443)
						if (((Camera == null()))){
							HX_STACK_LINE(443)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(443)
						{
							HX_STACK_LINE(443)
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(443)
							if (((point == null()))){
								HX_STACK_LINE(443)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(443)
							if (((Camera1 == null()))){
								HX_STACK_LINE(443)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(443)
							point->x = (__this->x - ::Math_obj::floor((Camera1->scroll->x * __this->scrollFactor->x)));
							HX_STACK_LINE(443)
							point->y = (__this->y - ::Math_obj::floor((Camera1->scroll->y * __this->scrollFactor->y)));
							HX_STACK_LINE(443)
							hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(443)
							hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(443)
							point;
						}
						HX_STACK_LINE(443)
						return (bool((bool((bool(((__this->_point->x + __this->width) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->height) > (int)0)))) && bool((__this->_point->y < Camera->height)));
					}
					return null();
				}
			};
			HX_STACK_LINE(443)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(444)
				continue;
			}
			HX_STACK_LINE(447)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			HX_STACK_LINE(448)
			if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
				HX_STACK_LINE(449)
				this->drawDebug(camera);
			}
		}
	}
return null();
}


Void FlxObject_obj::updateMotion( ){
{
		HX_STACK_PUSH("FlxObject::updateMotion","org/flixel/FlxObject.hx",404);
		HX_STACK_THIS(this);
		HX_STACK_LINE(405)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(406)
		Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(408)
		Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
		struct _Function_1_1{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",410);
				{
					HX_STACK_LINE(410)
					Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(410)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(410)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(410)
						if (((Drag != (int)0))){
							HX_STACK_LINE(410)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(410)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(410)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(410)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(410)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(410)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(410)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(410)
						if (((Velocity > Max))){
							HX_STACK_LINE(410)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(410)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(410)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(410)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(410)
		velocityDelta = (0.5 * ((_Function_1_1::Block(this) - this->angularVelocity)));
		HX_STACK_LINE(411)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(412)
		hx::AddEq(this->angle,(this->angularVelocity * dt));
		HX_STACK_LINE(413)
		hx::AddEq(this->angularVelocity,velocityDelta);
		struct _Function_1_2{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",415);
				{
					HX_STACK_LINE(415)
					Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(415)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(415)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(415)
						if (((Drag != (int)0))){
							HX_STACK_LINE(415)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(415)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(415)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(415)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(415)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(415)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(415)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(415)
						if (((Velocity > Max))){
							HX_STACK_LINE(415)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(415)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(415)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(415)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(415)
		velocityDelta = (0.5 * ((_Function_1_2::Block(this) - this->velocity->x)));
		HX_STACK_LINE(416)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(417)
		delta = (this->velocity->x * dt);
		HX_STACK_LINE(418)
		hx::AddEq(this->velocity->x,velocityDelta);
		HX_STACK_LINE(419)
		hx::AddEq(this->x,delta);
		struct _Function_1_3{
			inline static Float Block( ::org::flixel::FlxObject_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",421);
				{
					HX_STACK_LINE(421)
					Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
					Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
					Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
					Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(421)
					if (((Acceleration != (int)0))){
						HX_STACK_LINE(421)
						hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
					}
					else{
						HX_STACK_LINE(421)
						if (((Drag != (int)0))){
							HX_STACK_LINE(421)
							Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
							HX_STACK_LINE(421)
							if ((((Velocity - drag) > (int)0))){
								HX_STACK_LINE(421)
								Velocity = (Velocity - drag);
							}
							else{
								HX_STACK_LINE(421)
								if ((((Velocity + drag) < (int)0))){
									HX_STACK_LINE(421)
									hx::AddEq(Velocity,drag);
								}
								else{
									HX_STACK_LINE(421)
									Velocity = (int)0;
								}
							}
						}
					}
					HX_STACK_LINE(421)
					if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
						HX_STACK_LINE(421)
						if (((Velocity > Max))){
							HX_STACK_LINE(421)
							Velocity = Max;
						}
						else{
							HX_STACK_LINE(421)
							if (((Velocity < -(Max)))){
								HX_STACK_LINE(421)
								Velocity = -(Max);
							}
						}
					}
					HX_STACK_LINE(421)
					return Velocity;
				}
				return null();
			}
		};
		HX_STACK_LINE(421)
		velocityDelta = (0.5 * ((_Function_1_3::Block(this) - this->velocity->y)));
		HX_STACK_LINE(422)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(423)
		delta = (this->velocity->y * dt);
		HX_STACK_LINE(424)
		hx::AddEq(this->velocity->y,velocityDelta);
		HX_STACK_LINE(425)
		hx::AddEq(this->y,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::postUpdate( ){
{
		HX_STACK_PUSH("FlxObject::postUpdate","org/flixel/FlxObject.hx",388);
		HX_STACK_THIS(this);
		HX_STACK_LINE(389)
		if ((this->moves)){
			HX_STACK_LINE(391)
			Float delta;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(391)
			Float velocityDelta;		HX_STACK_VAR(velocityDelta,"velocityDelta");
			HX_STACK_LINE(391)
			Float dt = ::org::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(dt,"dt");
			struct _Function_2_1{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",391);
					{
						HX_STACK_LINE(391)
						Float Velocity = __this->angularVelocity;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->angularAcceleration;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->angularDrag;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxAngular;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(391)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(391)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(391)
							if (((Drag != (int)0))){
								HX_STACK_LINE(391)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(391)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(391)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(391)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(391)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(391)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(391)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(391)
							if (((Velocity > Max))){
								HX_STACK_LINE(391)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(391)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(391)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(391)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(391)
			velocityDelta = (0.5 * ((_Function_2_1::Block(this) - this->angularVelocity)));
			HX_STACK_LINE(391)
			hx::AddEq(this->angularVelocity,velocityDelta);
			HX_STACK_LINE(391)
			hx::AddEq(this->angle,(this->angularVelocity * dt));
			HX_STACK_LINE(391)
			hx::AddEq(this->angularVelocity,velocityDelta);
			struct _Function_2_2{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",391);
					{
						HX_STACK_LINE(391)
						Float Velocity = __this->velocity->x;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->x;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->x;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->x;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(391)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(391)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(391)
							if (((Drag != (int)0))){
								HX_STACK_LINE(391)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(391)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(391)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(391)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(391)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(391)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(391)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(391)
							if (((Velocity > Max))){
								HX_STACK_LINE(391)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(391)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(391)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(391)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(391)
			velocityDelta = (0.5 * ((_Function_2_2::Block(this) - this->velocity->x)));
			HX_STACK_LINE(391)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(391)
			delta = (this->velocity->x * dt);
			HX_STACK_LINE(391)
			hx::AddEq(this->velocity->x,velocityDelta);
			HX_STACK_LINE(391)
			hx::AddEq(this->x,delta);
			struct _Function_2_3{
				inline static Float Block( ::org::flixel::FlxObject_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",391);
					{
						HX_STACK_LINE(391)
						Float Velocity = __this->velocity->y;		HX_STACK_VAR(Velocity,"Velocity");
						Float Acceleration = __this->acceleration->y;		HX_STACK_VAR(Acceleration,"Acceleration");
						Float Drag = __this->drag->y;		HX_STACK_VAR(Drag,"Drag");
						Float Max = __this->maxVelocity->y;		HX_STACK_VAR(Max,"Max");
						HX_STACK_LINE(391)
						if (((Acceleration != (int)0))){
							HX_STACK_LINE(391)
							hx::AddEq(Velocity,(Acceleration * ::org::flixel::FlxG_obj::elapsed));
						}
						else{
							HX_STACK_LINE(391)
							if (((Drag != (int)0))){
								HX_STACK_LINE(391)
								Float drag = (Drag * ::org::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
								HX_STACK_LINE(391)
								if ((((Velocity - drag) > (int)0))){
									HX_STACK_LINE(391)
									Velocity = (Velocity - drag);
								}
								else{
									HX_STACK_LINE(391)
									if ((((Velocity + drag) < (int)0))){
										HX_STACK_LINE(391)
										hx::AddEq(Velocity,drag);
									}
									else{
										HX_STACK_LINE(391)
										Velocity = (int)0;
									}
								}
							}
						}
						HX_STACK_LINE(391)
						if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
							HX_STACK_LINE(391)
							if (((Velocity > Max))){
								HX_STACK_LINE(391)
								Velocity = Max;
							}
							else{
								HX_STACK_LINE(391)
								if (((Velocity < -(Max)))){
									HX_STACK_LINE(391)
									Velocity = -(Max);
								}
							}
						}
						HX_STACK_LINE(391)
						return Velocity;
					}
					return null();
				}
			};
			HX_STACK_LINE(391)
			velocityDelta = (0.5 * ((_Function_2_3::Block(this) - this->velocity->y)));
			HX_STACK_LINE(391)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(391)
			delta = (this->velocity->y * dt);
			HX_STACK_LINE(391)
			hx::AddEq(this->velocity->y,velocityDelta);
			HX_STACK_LINE(391)
			hx::AddEq(this->y,delta);
		}
		HX_STACK_LINE(394)
		this->wasTouching = this->touching;
		HX_STACK_LINE(395)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::preUpdate( ){
{
		HX_STACK_PUSH("FlxObject::preUpdate","org/flixel/FlxObject.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_LINE(361)
		(::org::flixel::FlxBasic_obj::_ACTIVECOUNT)++;
		HX_STACK_LINE(363)
		if (((this->_flickerTimer > (int)0))){
			HX_STACK_LINE(365)
			hx::SubEq(this->_flickerTimer,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(366)
			if (((this->_flickerTimer <= (int)0))){
				HX_STACK_LINE(368)
				this->_flickerTimer = (int)0;
				HX_STACK_LINE(369)
				this->_flicker = false;
			}
		}
		HX_STACK_LINE(373)
		this->last->x = this->x;
		HX_STACK_LINE(374)
		this->last->y = this->y;
		HX_STACK_LINE(376)
		if (((bool((bool((this->path != null())) && bool((this->pathSpeed != (int)0)))) && bool((this->path->nodes->__get(this->_pathNodeIndex) != null()))))){
			HX_STACK_LINE(378)
			this->_point->x = (this->x + (this->width * 0.5));
			HX_STACK_LINE(378)
			this->_point->y = (this->y + (this->height * 0.5));
			HX_STACK_LINE(378)
			::org::flixel::FlxPoint node = this->path->nodes->__get(this->_pathNodeIndex);		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(378)
			Float deltaX = (node->x - this->_point->x);		HX_STACK_VAR(deltaX,"deltaX");
			HX_STACK_LINE(378)
			Float deltaY = (node->y - this->_point->y);		HX_STACK_VAR(deltaY,"deltaY");
			HX_STACK_LINE(378)
			bool horizontalOnly = (((int(this->_pathMode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
			HX_STACK_LINE(378)
			bool verticalOnly = (((int(this->_pathMode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
			HX_STACK_LINE(378)
			if ((horizontalOnly)){
				HX_STACK_LINE(378)
				if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
					HX_STACK_LINE(378)
					node = this->advancePath(null());
				}
			}
			else{
				HX_STACK_LINE(378)
				if ((verticalOnly)){
					HX_STACK_LINE(378)
					if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(378)
						node = this->advancePath(null());
					}
				}
				else{
					HX_STACK_LINE(378)
					if (((::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY))) < (this->pathSpeed * ::org::flixel::FlxG_obj::elapsed)))){
						HX_STACK_LINE(378)
						node = this->advancePath(null());
					}
				}
			}
			HX_STACK_LINE(378)
			if (((this->pathSpeed != (int)0))){
				HX_STACK_LINE(378)
				this->_point->x = (this->x + (this->width * 0.5));
				HX_STACK_LINE(378)
				this->_point->y = (this->y + (this->height * 0.5));
				HX_STACK_LINE(378)
				if (((bool(horizontalOnly) || bool((this->_point->y == node->y))))){
					HX_STACK_LINE(378)
					this->velocity->x = (  (((this->_point->x < node->x))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
					HX_STACK_LINE(378)
					if (((this->velocity->x < (int)0))){
						HX_STACK_LINE(378)
						this->pathAngle = (int)-90;
					}
					else{
						HX_STACK_LINE(378)
						this->pathAngle = (int)90;
					}
					HX_STACK_LINE(378)
					if ((!(horizontalOnly))){
						HX_STACK_LINE(378)
						this->velocity->y = (int)0;
					}
				}
				else{
					HX_STACK_LINE(378)
					if (((bool(verticalOnly) || bool((this->_point->x == node->x))))){
						HX_STACK_LINE(378)
						this->velocity->y = (  (((this->_point->y < node->y))) ? Float(this->pathSpeed) : Float(-(this->pathSpeed)) );
						HX_STACK_LINE(378)
						if (((this->velocity->y < (int)0))){
							HX_STACK_LINE(378)
							this->pathAngle = (int)0;
						}
						else{
							HX_STACK_LINE(378)
							this->pathAngle = (int)180;
						}
						HX_STACK_LINE(378)
						if ((!(verticalOnly))){
							HX_STACK_LINE(378)
							this->velocity->x = (int)0;
						}
					}
					else{
						struct _Function_5_1{
							inline static Float Block( ::org::flixel::FlxObject_obj *__this,::org::flixel::FlxPoint &node){
								HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",378);
								{
									HX_STACK_LINE(378)
									::org::flixel::FlxPoint Point1 = __this->_point;		HX_STACK_VAR(Point1,"Point1");
									HX_STACK_LINE(378)
									Float x = (node->x - Point1->x);		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(378)
									Float y = (node->y - Point1->y);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(378)
									Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
									HX_STACK_LINE(378)
									if (((bool((x != (int)0)) || bool((y != (int)0))))){
										HX_STACK_LINE(378)
										Float c1 = 0.7853981625;		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(378)
										Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
										HX_STACK_LINE(378)
										Float ay = (  (((y < (int)0))) ? Float(-(y)) : Float(y) );		HX_STACK_VAR(ay,"ay");
										HX_STACK_LINE(378)
										if (((x >= (int)0))){
											HX_STACK_LINE(378)
											angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
										}
										else{
											HX_STACK_LINE(378)
											angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
										}
										HX_STACK_LINE(378)
										angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * 57.2957796);
										HX_STACK_LINE(378)
										if (((angle > (int)90))){
											HX_STACK_LINE(378)
											angle = (angle - (int)270);
										}
										else{
											HX_STACK_LINE(378)
											hx::AddEq(angle,(int)90);
										}
									}
									HX_STACK_LINE(378)
									return angle;
								}
								return null();
							}
						};
						HX_STACK_LINE(378)
						this->pathAngle = _Function_5_1::Block(this,node);
						HX_STACK_LINE(378)
						{
							HX_STACK_LINE(378)
							::org::flixel::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(378)
							Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
							HX_STACK_LINE(378)
							Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
							HX_STACK_LINE(378)
							Float radians = (this->pathAngle * -0.017453293);		HX_STACK_VAR(radians,"radians");
							HX_STACK_LINE(378)
							while(((radians < -3.14159265))){
								HX_STACK_LINE(378)
								hx::AddEq(radians,6.28318531);
							}
							HX_STACK_LINE(378)
							while(((radians > 3.14159265))){
								HX_STACK_LINE(378)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(378)
							if (((radians < (int)0))){
								HX_STACK_LINE(378)
								sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
								HX_STACK_LINE(378)
								if (((sin < (int)0))){
									HX_STACK_LINE(378)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(378)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							else{
								HX_STACK_LINE(378)
								sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(378)
								if (((sin < (int)0))){
									HX_STACK_LINE(378)
									sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
								}
								else{
									HX_STACK_LINE(378)
									sin = ((.225 * (((sin * sin) - sin))) + sin);
								}
							}
							HX_STACK_LINE(378)
							hx::AddEq(radians,1.57079632);
							HX_STACK_LINE(378)
							if (((radians > 3.14159265))){
								HX_STACK_LINE(378)
								radians = (radians - 6.28318531);
							}
							HX_STACK_LINE(378)
							if (((radians < (int)0))){
								HX_STACK_LINE(378)
								cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
								HX_STACK_LINE(378)
								if (((cos < (int)0))){
									HX_STACK_LINE(378)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(378)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							else{
								HX_STACK_LINE(378)
								cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
								HX_STACK_LINE(378)
								if (((cos < (int)0))){
									HX_STACK_LINE(378)
									cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
								}
								else{
									HX_STACK_LINE(378)
									cos = ((.225 * (((cos * cos) - cos))) + cos);
								}
							}
							HX_STACK_LINE(378)
							Float dx = (int)0;		HX_STACK_VAR(dx,"dx");
							HX_STACK_LINE(378)
							Float dy = this->pathSpeed;		HX_STACK_VAR(dy,"dy");
							HX_STACK_LINE(378)
							if (((point == null()))){
								HX_STACK_LINE(378)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(378)
							point->x = ((cos * dx) - (sin * dy));
							HX_STACK_LINE(378)
							point->y = (((int)0 - (sin * dx)) - (cos * dy));
							HX_STACK_LINE(378)
							point;
						}
					}
				}
				HX_STACK_LINE(378)
				if ((this->_pathRotate)){
					HX_STACK_LINE(378)
					this->angularVelocity = (int)0;
					HX_STACK_LINE(378)
					this->angularAcceleration = (int)0;
					HX_STACK_LINE(378)
					this->angle = this->pathAngle;
				}
			}
		}
	}
return null();
}


Void FlxObject_obj::destroy( ){
{
		HX_STACK_PUSH("FlxObject::destroy","org/flixel/FlxObject.hx",335);
		HX_STACK_THIS(this);
		HX_STACK_LINE(336)
		this->velocity = null();
		HX_STACK_LINE(337)
		this->acceleration = null();
		HX_STACK_LINE(338)
		this->drag = null();
		HX_STACK_LINE(339)
		this->maxVelocity = null();
		HX_STACK_LINE(340)
		this->scrollFactor = null();
		HX_STACK_LINE(341)
		this->_point = null();
		HX_STACK_LINE(342)
		this->_rect = null();
		HX_STACK_LINE(343)
		this->last = null();
		HX_STACK_LINE(344)
		this->cameras = null();
		HX_STACK_LINE(345)
		if (((this->path != null()))){
			HX_STACK_LINE(346)
			this->path->destroy();
		}
		HX_STACK_LINE(349)
		this->path = null();
		HX_STACK_LINE(350)
		this->super::destroy();
	}
return null();
}


int FlxObject_obj::onBoundingBoxColorSet( int val){
	HX_STACK_PUSH("FlxObject::onBoundingBoxColorSet","org/flixel/FlxObject.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(272)
	this->_boundingBoxColorOverritten = true;
	HX_STACK_LINE(273)
	this->debugBoundingBoxColor = val;
	HX_STACK_LINE(274)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,onBoundingBoxColorSet,return )

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

int FlxObject_obj::PATH_FORWARD;

int FlxObject_obj::PATH_BACKWARD;

int FlxObject_obj::PATH_LOOP_FORWARD;

int FlxObject_obj::PATH_LOOP_BACKWARD;

int FlxObject_obj::PATH_YOYO;

int FlxObject_obj::PATH_HORIZONTAL_ONLY;

int FlxObject_obj::PATH_VERTICAL_ONLY;

::org::flixel::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::org::flixel::FlxRect FlxObject_obj::_secondSeparateFlxRect;

::org::flixel::FlxPoint FlxObject_obj::_pZero;

bool FlxObject_obj::separate( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separate","org/flixel/FlxObject.hx",1076);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1077)
	bool separatedX = ::org::flixel::FlxObject_obj::separateX(Object1,Object2);		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(1078)
	bool separatedY = ::org::flixel::FlxObject_obj::separateY(Object1,Object2);		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(1079)
	return (bool(separatedX) || bool(separatedY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::separateX( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateX","org/flixel/FlxObject.hx",1089);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1091)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1092)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1093)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1094)
		return false;
	}
	HX_STACK_LINE(1099)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1100)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateX_dyn(),null(),null());
	}
	HX_STACK_LINE(1103)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1104)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateX_dyn(),true,null());
	}
	HX_STACK_LINE(1109)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1110)
	Float obj1delta = (Object1->x - Object1->last->x);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1111)
	Float obj2delta = (Object2->x - Object2->last->x);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1112)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1115)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1116)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::FlxRect Block( ::org::flixel::FlxObject &Object1,Float &obj1delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1118);
				{
					HX_STACK_LINE(1118)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1118)
					_this->x = (Object1->x - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1118)
					_this->y = Object1->last->y;
					HX_STACK_LINE(1118)
					_this->width = (Object1->width + ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) )));
					HX_STACK_LINE(1118)
					_this->height = Object1->height;
					HX_STACK_LINE(1118)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1118)
		::org::flixel::FlxRect obj1rect = _Function_2_1::Block(Object1,obj1delta);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::FlxRect Block( ::org::flixel::FlxObject &Object2,Float &obj2delta){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1119);
				{
					HX_STACK_LINE(1119)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1119)
					_this->x = (Object2->x - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1119)
					_this->y = Object2->last->y;
					HX_STACK_LINE(1119)
					_this->width = (Object2->width + ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) )));
					HX_STACK_LINE(1119)
					_this->height = Object2->height;
					HX_STACK_LINE(1119)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1119)
		::org::flixel::FlxRect obj2rect = _Function_2_2::Block(Object2,obj2delta);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1121)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1123)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1126)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1128)
				overlap = ((Object1->x + Object1->width) - Object2->x);
				HX_STACK_LINE(1129)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)16))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)1))) == (int)0))))){
					HX_STACK_LINE(1130)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1135)
					hx::OrEq(Object1->touching,(int)16);
					HX_STACK_LINE(1136)
					hx::OrEq(Object2->touching,(int)1);
				}
			}
			else{
				HX_STACK_LINE(1139)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1141)
					overlap = ((Object1->x - Object2->width) - Object2->x);
					HX_STACK_LINE(1142)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)1))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)16))) == (int)0))))){
						HX_STACK_LINE(1143)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1148)
						hx::OrEq(Object1->touching,(int)1);
						HX_STACK_LINE(1149)
						hx::OrEq(Object2->touching,(int)16);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1156)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1158)
		Float obj1v = Object1->velocity->x;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1159)
		Float obj2v = Object2->velocity->x;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1161)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1163)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1164)
			Object1->x = (Object1->x - overlap);
			HX_STACK_LINE(1165)
			hx::AddEq(Object2->x,overlap);
			HX_STACK_LINE(1167)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1168)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1169)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1170)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1171)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1172)
			Object1->velocity->x = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1173)
			Object2->velocity->x = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1175)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1177)
				Object1->x = (Object1->x - overlap);
				HX_STACK_LINE(1178)
				Object1->velocity->x = (obj2v - (obj1v * Object1->elasticity));
			}
			else{
				HX_STACK_LINE(1180)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1182)
					hx::AddEq(Object2->x,overlap);
					HX_STACK_LINE(1183)
					Object2->velocity->x = (obj1v - (obj2v * Object2->elasticity));
				}
			}
		}
		HX_STACK_LINE(1185)
		return true;
	}
	else{
		HX_STACK_LINE(1188)
		return false;
	}
	HX_STACK_LINE(1156)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::separateY( ::org::flixel::FlxObject Object1,::org::flixel::FlxObject Object2){
	HX_STACK_PUSH("FlxObject::separateY","org/flixel/FlxObject.hx",1200);
	HX_STACK_ARG(Object1,"Object1");
	HX_STACK_ARG(Object2,"Object2");
	HX_STACK_LINE(1202)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(1203)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(1204)
	if (((bool(obj1immovable) && bool(obj2immovable)))){
		HX_STACK_LINE(1205)
		return false;
	}
	HX_STACK_LINE(1210)
	if ((::Std_obj::is(Object1,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1211)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object1))->overlapsWithCallback(Object2,::org::flixel::FlxObject_obj::separateY_dyn(),null(),null());
	}
	HX_STACK_LINE(1214)
	if ((::Std_obj::is(Object2,hx::ClassOf< ::org::flixel::FlxTilemap >()))){
		HX_STACK_LINE(1215)
		return (hx::TCast< org::flixel::FlxTilemap >::cast(Object2))->overlapsWithCallback(Object1,::org::flixel::FlxObject_obj::separateY_dyn(),true,null());
	}
	HX_STACK_LINE(1220)
	Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(1221)
	Float obj1delta = (Object1->y - Object1->last->y);		HX_STACK_VAR(obj1delta,"obj1delta");
	HX_STACK_LINE(1222)
	Float obj2delta = (Object2->y - Object2->last->y);		HX_STACK_VAR(obj2delta,"obj2delta");
	HX_STACK_LINE(1223)
	if (((obj1delta != obj2delta))){
		HX_STACK_LINE(1226)
		Float obj1deltaAbs = (  (((obj1delta > (int)0))) ? Float(obj1delta) : Float(-(obj1delta)) );		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
		HX_STACK_LINE(1227)
		Float obj2deltaAbs = (  (((obj2delta > (int)0))) ? Float(obj2delta) : Float(-(obj2delta)) );		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
		struct _Function_2_1{
			inline static ::org::flixel::FlxRect Block( Float &obj1delta,::org::flixel::FlxObject &Object1,Float &obj1deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1229);
				{
					HX_STACK_LINE(1229)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1229)
					_this->x = Object1->x;
					HX_STACK_LINE(1229)
					_this->y = (Object1->y - ((  (((obj1delta > (int)0))) ? Float(obj1delta) : Float((int)0) )));
					HX_STACK_LINE(1229)
					_this->width = Object1->width;
					HX_STACK_LINE(1229)
					_this->height = (Object1->height + obj1deltaAbs);
					HX_STACK_LINE(1229)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1229)
		::org::flixel::FlxRect obj1rect = _Function_2_1::Block(obj1delta,Object1,obj1deltaAbs);		HX_STACK_VAR(obj1rect,"obj1rect");
		struct _Function_2_2{
			inline static ::org::flixel::FlxRect Block( Float &obj2delta,::org::flixel::FlxObject &Object2,Float &obj2deltaAbs){
				HX_STACK_PUSH("*::closure","org/flixel/FlxObject.hx",1230);
				{
					HX_STACK_LINE(1230)
					::org::flixel::FlxRect _this = ::org::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1230)
					_this->x = Object2->x;
					HX_STACK_LINE(1230)
					_this->y = (Object2->y - ((  (((obj2delta > (int)0))) ? Float(obj2delta) : Float((int)0) )));
					HX_STACK_LINE(1230)
					_this->width = Object2->width;
					HX_STACK_LINE(1230)
					_this->height = (Object2->height + obj2deltaAbs);
					HX_STACK_LINE(1230)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(1230)
		::org::flixel::FlxRect obj2rect = _Function_2_2::Block(obj2delta,Object2,obj2deltaAbs);		HX_STACK_VAR(obj2rect,"obj2rect");
		HX_STACK_LINE(1232)
		if (((bool((bool((bool(((obj1rect->x + obj1rect->width) > obj2rect->x)) && bool((obj1rect->x < (obj2rect->x + obj2rect->width))))) && bool(((obj1rect->y + obj1rect->height) > obj2rect->y)))) && bool((obj1rect->y < (obj2rect->y + obj2rect->height)))))){
			HX_STACK_LINE(1234)
			Float maxOverlap = ((obj1deltaAbs + obj2deltaAbs) + ::org::flixel::FlxObject_obj::SEPARATE_BIAS);		HX_STACK_VAR(maxOverlap,"maxOverlap");
			HX_STACK_LINE(1237)
			if (((obj1delta > obj2delta))){
				HX_STACK_LINE(1239)
				overlap = ((Object1->y + Object1->height) - Object2->y);
				HX_STACK_LINE(1240)
				if (((bool((bool((overlap > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)4096))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)256))) == (int)0))))){
					HX_STACK_LINE(1241)
					overlap = (int)0;
				}
				else{
					HX_STACK_LINE(1246)
					hx::OrEq(Object1->touching,(int)4096);
					HX_STACK_LINE(1247)
					hx::OrEq(Object2->touching,(int)256);
				}
			}
			else{
				HX_STACK_LINE(1250)
				if (((obj1delta < obj2delta))){
					HX_STACK_LINE(1252)
					overlap = ((Object1->y - Object2->height) - Object2->y);
					HX_STACK_LINE(1253)
					if (((bool((bool((-(overlap) > maxOverlap)) || bool((((int(Object1->allowCollisions) & int((int)256))) == (int)0)))) || bool((((int(Object2->allowCollisions) & int((int)4096))) == (int)0))))){
						HX_STACK_LINE(1254)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(1259)
						hx::OrEq(Object1->touching,(int)256);
						HX_STACK_LINE(1260)
						hx::OrEq(Object2->touching,(int)4096);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1267)
	if (((overlap != (int)0))){
		HX_STACK_LINE(1269)
		Float obj1v = Object1->velocity->y;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(1270)
		Float obj2v = Object2->velocity->y;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(1272)
		if (((bool(!(obj1immovable)) && bool(!(obj2immovable))))){
			HX_STACK_LINE(1274)
			hx::MultEq(overlap,0.5);
			HX_STACK_LINE(1275)
			Object1->y = (Object1->y - overlap);
			HX_STACK_LINE(1276)
			hx::AddEq(Object2->y,overlap);
			HX_STACK_LINE(1278)
			Float obj1velocity = (::Math_obj::sqrt((Float(((obj2v * obj2v) * Object2->mass)) / Float(Object1->mass))) * ((  (((obj2v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(1279)
			Float obj2velocity = (::Math_obj::sqrt((Float(((obj1v * obj1v) * Object1->mass)) / Float(Object2->mass))) * ((  (((obj1v > (int)0))) ? int((int)1) : int((int)-1) )));		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(1280)
			Float average = (((obj1velocity + obj2velocity)) * 0.5);		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(1281)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(1282)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(1283)
			Object1->velocity->y = (average + (obj1velocity * Object1->elasticity));
			HX_STACK_LINE(1284)
			Object2->velocity->y = (average + (obj2velocity * Object2->elasticity));
		}
		else{
			HX_STACK_LINE(1286)
			if ((!(obj1immovable))){
				HX_STACK_LINE(1288)
				Object1->y = (Object1->y - overlap);
				HX_STACK_LINE(1289)
				Object1->velocity->y = (obj2v - (obj1v * Object1->elasticity));
				HX_STACK_LINE(1291)
				if (((bool((bool(Object2->active) && bool(Object2->moves))) && bool((obj1delta > obj2delta))))){
					HX_STACK_LINE(1292)
					hx::AddEq(Object1->x,(Object2->x - Object2->last->x));
				}
			}
			else{
				HX_STACK_LINE(1296)
				if ((!(obj2immovable))){
					HX_STACK_LINE(1298)
					hx::AddEq(Object2->y,overlap);
					HX_STACK_LINE(1299)
					Object2->velocity->y = (obj1v - (obj2v * Object2->elasticity));
					HX_STACK_LINE(1301)
					if (((bool((bool(Object1->active) && bool(Object1->moves))) && bool((obj1delta < obj2delta))))){
						HX_STACK_LINE(1302)
						hx::AddEq(Object2->x,(Object1->x - Object1->last->x));
					}
				}
			}
		}
		HX_STACK_LINE(1306)
		return true;
	}
	else{
		HX_STACK_LINE(1309)
		return false;
	}
	HX_STACK_LINE(1267)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(solid,"solid");
	HX_MARK_MEMBER_NAME(flickering,"flickering");
	HX_MARK_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_MARK_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_MARK_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_MARK_MEMBER_NAME(_pathInc,"_pathInc");
	HX_MARK_MEMBER_NAME(_pathMode,"_pathMode");
	HX_MARK_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_MARK_MEMBER_NAME(pathAngle,"pathAngle");
	HX_MARK_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_MARK_MEMBER_NAME(_flicker,"_flicker");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(solid,"solid");
	HX_VISIT_MEMBER_NAME(flickering,"flickering");
	HX_VISIT_MEMBER_NAME(_boundingBoxColorOverritten,"_boundingBoxColorOverritten");
	HX_VISIT_MEMBER_NAME(debugBoundingBoxColor,"debugBoundingBoxColor");
	HX_VISIT_MEMBER_NAME(_pathRotate,"_pathRotate");
	HX_VISIT_MEMBER_NAME(_pathInc,"_pathInc");
	HX_VISIT_MEMBER_NAME(_pathMode,"_pathMode");
	HX_VISIT_MEMBER_NAME(_pathNodeIndex,"_pathNodeIndex");
	HX_VISIT_MEMBER_NAME(pathAngle,"pathAngle");
	HX_VISIT_MEMBER_NAME(pathSpeed,"pathSpeed");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(_flickerTimer,"_flickerTimer");
	HX_VISIT_MEMBER_NAME(_flicker,"_flicker");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return ANY; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"WALL") ) { return WALL; }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"FLOOR") ) { return FLOOR; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"solid") ) { return inCallProp ? getSolid() : solid; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { return _pZero; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CEILING") ) { return CEILING; }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { return separate_dyn(); }
		if (HX_FIELD_EQ(inName,"setSolid") ) { return setSolid_dyn(); }
		if (HX_FIELD_EQ(inName,"getSolid") ) { return getSolid_dyn(); }
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathInc") ) { return _pathInc; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { return _flicker; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PATH_YOYO") ) { return PATH_YOYO; }
		if (HX_FIELD_EQ(inName,"separateX") ) { return separateX_dyn(); }
		if (HX_FIELD_EQ(inName,"separateY") ) { return separateY_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathMode") ) { return _pathMode; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { return pathAngle; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { return pathSpeed; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"flickering") ) { return inCallProp ? getFlickering() : flickering; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"followPath") ) { return followPath_dyn(); }
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenXY") ) { return getScreenXY_dyn(); }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { return _pathRotate; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PATH_FORWARD") ) { return PATH_FORWARD; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { return SEPARATE_BIAS; }
		if (HX_FIELD_EQ(inName,"PATH_BACKWARD") ) { return PATH_BACKWARD; }
		if (HX_FIELD_EQ(inName,"getFlickering") ) { return getFlickering_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { return _flickerTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScreenObject") ) { return onScreenObject_dyn(); }
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { return _pathNodeIndex; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updatePathMotion") ) { return updatePathMotion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_FORWARD") ) { return PATH_LOOP_FORWARD; }
		if (HX_FIELD_EQ(inName,"stopFollowingPath") ) { return stopFollowingPath_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_BACKWARD") ) { return PATH_LOOP_BACKWARD; }
		if (HX_FIELD_EQ(inName,"PATH_VERTICAL_ONLY") ) { return PATH_VERTICAL_ONLY; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PATH_HORIZONTAL_ONLY") ) { return PATH_HORIZONTAL_ONLY; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { return _firstSeparateFlxRect; }
		if (HX_FIELD_EQ(inName,"onBoundingBoxColorSet") ) { return onBoundingBoxColorSet_dyn(); }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { return debugBoundingBoxColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { return _secondSeparateFlxRect; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { return _boundingBoxColorOverritten; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { ANY=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WALL") ) { WALL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::org::flixel::FlxPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOOR") ) { FLOOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp) return setSolid(inValue);solid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pZero") ) { _pZero=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CEILING") ) { CEILING=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pathInc") ) { _pathInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flicker") ) { _flicker=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PATH_YOYO") ) { PATH_YOYO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pathMode") ) { _pathMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathAngle") ) { pathAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pathSpeed") ) { pathSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"flickering") ) { flickering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_pathRotate") ) { _pathRotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"PATH_FORWARD") ) { PATH_FORWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PATH_BACKWARD") ) { PATH_BACKWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flickerTimer") ) { _flickerTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pathNodeIndex") ) { _pathNodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_FORWARD") ) { PATH_LOOP_FORWARD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PATH_LOOP_BACKWARD") ) { PATH_LOOP_BACKWARD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PATH_VERTICAL_ONLY") ) { PATH_VERTICAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PATH_HORIZONTAL_ONLY") ) { PATH_HORIZONTAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugBoundingBoxColor") ) { if (inCallProp) return onBoundingBoxColorSet(inValue);debugBoundingBoxColor=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_boundingBoxColorOverritten") ) { _boundingBoxColorOverritten=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("flickering"));
	outFields->push(HX_CSTRING("_boundingBoxColorOverritten"));
	outFields->push(HX_CSTRING("debugBoundingBoxColor"));
	outFields->push(HX_CSTRING("_pathRotate"));
	outFields->push(HX_CSTRING("_pathInc"));
	outFields->push(HX_CSTRING("_pathMode"));
	outFields->push(HX_CSTRING("_pathNodeIndex"));
	outFields->push(HX_CSTRING("pathAngle"));
	outFields->push(HX_CSTRING("pathSpeed"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("wasTouching"));
	outFields->push(HX_CSTRING("touching"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("health"));
	outFields->push(HX_CSTRING("_flickerTimer"));
	outFields->push(HX_CSTRING("_flicker"));
	outFields->push(HX_CSTRING("scrollFactor"));
	outFields->push(HX_CSTRING("maxAngular"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("maxVelocity"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SEPARATE_BIAS"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("NONE"),
	HX_CSTRING("CEILING"),
	HX_CSTRING("FLOOR"),
	HX_CSTRING("WALL"),
	HX_CSTRING("ANY"),
	HX_CSTRING("PATH_FORWARD"),
	HX_CSTRING("PATH_BACKWARD"),
	HX_CSTRING("PATH_LOOP_FORWARD"),
	HX_CSTRING("PATH_LOOP_BACKWARD"),
	HX_CSTRING("PATH_YOYO"),
	HX_CSTRING("PATH_HORIZONTAL_ONLY"),
	HX_CSTRING("PATH_VERTICAL_ONLY"),
	HX_CSTRING("_firstSeparateFlxRect"),
	HX_CSTRING("_secondSeparateFlxRect"),
	HX_CSTRING("_pZero"),
	HX_CSTRING("separate"),
	HX_CSTRING("separateX"),
	HX_CSTRING("separateY"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hurt"),
	HX_CSTRING("justTouched"),
	HX_CSTRING("isTouching"),
	HX_CSTRING("reset"),
	HX_CSTRING("getMidpoint"),
	HX_CSTRING("setSolid"),
	HX_CSTRING("getSolid"),
	HX_CSTRING("solid"),
	HX_CSTRING("getFlickering"),
	HX_CSTRING("flickering"),
	HX_CSTRING("flicker"),
	HX_CSTRING("getScreenXY"),
	HX_CSTRING("onScreenObject"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("updatePathMotion"),
	HX_CSTRING("advancePath"),
	HX_CSTRING("stopFollowingPath"),
	HX_CSTRING("followPath"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateMotion"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("preUpdate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("onBoundingBoxColorSet"),
	HX_CSTRING("_boundingBoxColorOverritten"),
	HX_CSTRING("debugBoundingBoxColor"),
	HX_CSTRING("_pathRotate"),
	HX_CSTRING("_pathInc"),
	HX_CSTRING("_pathMode"),
	HX_CSTRING("_pathNodeIndex"),
	HX_CSTRING("pathAngle"),
	HX_CSTRING("pathSpeed"),
	HX_CSTRING("path"),
	HX_CSTRING("last"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("wasTouching"),
	HX_CSTRING("touching"),
	HX_CSTRING("moves"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_point"),
	HX_CSTRING("health"),
	HX_CSTRING("_flickerTimer"),
	HX_CSTRING("_flicker"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("maxAngular"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angle"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("mass"),
	HX_CSTRING("velocity"),
	HX_CSTRING("immovable"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_FORWARD,"PATH_FORWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_BACKWARD,"PATH_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_LOOP_FORWARD,"PATH_LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_LOOP_BACKWARD,"PATH_LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_YOYO,"PATH_YOYO");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_HORIZONTAL_ONLY,"PATH_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::PATH_VERTICAL_ONLY,"PATH_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_FORWARD,"PATH_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_BACKWARD,"PATH_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_LOOP_FORWARD,"PATH_LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_LOOP_BACKWARD,"PATH_LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_YOYO,"PATH_YOYO");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_HORIZONTAL_ONLY,"PATH_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::PATH_VERTICAL_ONLY,"PATH_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_pZero,"_pZero");
};

Class FlxObject_obj::__mClass;

void FlxObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxObject"), hx::TCanCast< FlxObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxObject_obj::__boot()
{
	SEPARATE_BIAS= (int)4;
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
	PATH_FORWARD= (int)0;
	PATH_BACKWARD= (int)1;
	PATH_LOOP_FORWARD= (int)16;
	PATH_LOOP_BACKWARD= (int)256;
	PATH_YOYO= (int)4096;
	PATH_HORIZONTAL_ONLY= (int)65536;
	PATH_VERTICAL_ONLY= (int)1048576;
	_firstSeparateFlxRect= ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	_secondSeparateFlxRect= ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	_pZero= ::org::flixel::FlxPoint_obj::__new(null(),null());
}

} // end namespace org
} // end namespace flixel
