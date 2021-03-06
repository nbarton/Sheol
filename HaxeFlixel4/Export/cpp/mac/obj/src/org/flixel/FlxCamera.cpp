#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
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
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
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
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
namespace org{
namespace flixel{

Void FlxCamera_obj::__construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_PUSH("FlxCamera::new","org/flixel/FlxCamera.hx",262);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(263)
	super::__construct();
	HX_STACK_LINE(265)
	this->x = X;
	HX_STACK_LINE(266)
	this->y = Y;
	HX_STACK_LINE(267)
	this->setWidth(Width);
	HX_STACK_LINE(268)
	this->setHeight(Height);
	HX_STACK_LINE(269)
	this->target = null();
	HX_STACK_LINE(270)
	this->deadzone = null();
	HX_STACK_LINE(271)
	this->scroll = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(272)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(273)
	this->bounds = null();
	HX_STACK_LINE(280)
	this->bgColor = ::org::flixel::FlxG_obj::getBgColor();
	HX_STACK_LINE(287)
	this->_canvas = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(288)
	this->_canvas->nmeSetX((-(this->width) * 0.5));
	HX_STACK_LINE(289)
	this->_canvas->nmeSetY((-(this->height) * 0.5));
	HX_STACK_LINE(293)
	this->setColor((int)16777215);
	HX_STACK_LINE(298)
	this->_flashSprite = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(299)
	this->setZoom(Zoom);
	HX_STACK_LINE(301)
	this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
	HX_STACK_LINE(302)
	this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
	HX_STACK_LINE(304)
	this->_flashSprite->nmeSetX((this->x + this->_flashOffsetX));
	HX_STACK_LINE(305)
	this->_flashSprite->nmeSetY((this->y + this->_flashOffsetY));
	HX_STACK_LINE(310)
	this->_flashSprite->addChild(this->_canvas);
	HX_STACK_LINE(312)
	this->_flashRect = ::neash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	HX_STACK_LINE(313)
	this->_flashPoint = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(316)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(320)
	this->_fxFlashDuration = 0.0;
	HX_STACK_LINE(321)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(322)
	this->_fxFlashAlpha = 0.0;
	HX_STACK_LINE(325)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(329)
	this->_fxFadeDuration = 0.0;
	HX_STACK_LINE(330)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(331)
	this->_fxFadeAlpha = 0.0;
	HX_STACK_LINE(333)
	this->_fxShakeIntensity = 0.0;
	HX_STACK_LINE(334)
	this->_fxShakeDuration = 0.0;
	HX_STACK_LINE(335)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(336)
	this->_fxShakeOffset = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(337)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(340)
	this->_fill = ::neash::display::BitmapData_obj::__new(this->width,this->height,true,(int)0,null());
	HX_STACK_LINE(346)
	this->_canvas->nmeSetScrollRect(::neash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height));
	HX_STACK_LINE(348)
	this->_debugLayer = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(349)
	this->_debugLayer->nmeSetX((-(this->width) * 0.5));
	HX_STACK_LINE(350)
	this->_debugLayer->nmeSetY((-(this->height) * 0.5));
	HX_STACK_LINE(351)
	this->_flashSprite->addChild(this->_debugLayer);
	HX_STACK_LINE(353)
	this->red = 1.0;
	HX_STACK_LINE(354)
	this->green = 1.0;
	HX_STACK_LINE(355)
	this->blue = 1.0;
	HX_STACK_LINE(357)
	this->fog = 0.0;
	HX_STACK_LINE(360)
	this->_fxFadeIn = false;
	HX_STACK_LINE(362)
	this->setAlpha(1.0);
	HX_STACK_LINE(363)
	this->setAngle(0.0);
	HX_STACK_LINE(364)
	this->setAntialiasing(false);
}
;
	return null();
}

FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(X,Y,Width,Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

int FlxCamera_obj::setHeight( int val){
	HX_STACK_PUSH("FlxCamera::setHeight","org/flixel/FlxCamera.hx",1129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1130)
	if (((val > (int)0))){
		HX_STACK_LINE(1132)
		this->height = val;
		HX_STACK_LINE(1140)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1142)
			::neash::geom::Rectangle rect = this->_canvas->nmeGetScrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1143)
			rect->height = val;
			HX_STACK_LINE(1144)
			this->_canvas->nmeSetScrollRect(rect);
			HX_STACK_LINE(1146)
			this->_flashOffsetY = ((this->height * 0.5) * this->zoom);
			HX_STACK_LINE(1147)
			this->_debugLayer->nmeSetY(this->_canvas->nmeSetY((-(this->height) * 0.5)));
		}
	}
	HX_STACK_LINE(1151)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setHeight,return )

int FlxCamera_obj::setWidth( int val){
	HX_STACK_PUSH("FlxCamera::setWidth","org/flixel/FlxCamera.hx",1103);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1104)
	if (((val > (int)0))){
		HX_STACK_LINE(1106)
		this->width = val;
		HX_STACK_LINE(1114)
		if (((this->_canvas != null()))){
			HX_STACK_LINE(1116)
			::neash::geom::Rectangle rect = this->_canvas->nmeGetScrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1117)
			rect->width = val;
			HX_STACK_LINE(1118)
			this->_canvas->nmeSetScrollRect(rect);
			HX_STACK_LINE(1120)
			this->_flashOffsetX = ((this->width * 0.5) * this->zoom);
			HX_STACK_LINE(1121)
			this->_debugLayer->nmeSetX(this->_canvas->nmeSetX((-(this->width) * 0.5)));
		}
	}
	HX_STACK_LINE(1125)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setWidth,return )

bool FlxCamera_obj::isColored( ){
	HX_STACK_PUSH("FlxCamera::isColored","org/flixel/FlxCamera.hx",1093);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1093)
	return (this->color < (int)16777215);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,isColored,return )

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_PUSH("FlxCamera::drawFX","org/flixel/FlxCamera.hx",1034);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1035)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1038)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(1043)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1049)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),this->_debugLayer->nmeGetGraphics());
		}
		HX_STACK_LINE(1056)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1061)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1067)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),this->_debugLayer->nmeGetGraphics());
		}
		HX_STACK_LINE(1073)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1075)
			this->_flashSprite->nmeSetX(((this->x + this->_flashOffsetX) + this->_fxShakeOffset->x));
			HX_STACK_LINE(1076)
			this->_flashSprite->nmeSetY(((this->y + this->_flashOffsetY) + this->_fxShakeOffset->y));
		}
		HX_STACK_LINE(1080)
		if (((this->fog > (int)0))){
			HX_STACK_LINE(1082)
			this->_debugLayer->nmeGetGraphics()->beginFill((int)16777215,this->fog);
			HX_STACK_LINE(1083)
			this->_debugLayer->nmeGetGraphics()->drawRect((int)0,(int)0,this->width,this->height);
			HX_STACK_LINE(1084)
			this->_debugLayer->nmeGetGraphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::neash::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_PUSH("FlxCamera::fill","org/flixel/FlxCamera.hx",990);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(BlendAlpha,"BlendAlpha");
	HX_STACK_ARG(FxAlpha,"FxAlpha");
	HX_STACK_ARG(graphics,"graphics");
{
		HX_STACK_LINE(998)
		::neash::display::Graphics targetGraphics = (  (((graphics == null()))) ? ::neash::display::Graphics(this->_canvas->nmeGetGraphics()) : ::neash::display::Graphics(graphics) );		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(1002)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(1003)
		if (((bool((bool((this->red != 1.0)) || bool((this->green != 1.0)))) || bool((this->blue != 1.0))))){
			HX_STACK_LINE(1005)
			int redComponent = ::Math_obj::floor((((int(Color) >> int((int)16))) * this->red));		HX_STACK_VAR(redComponent,"redComponent");
			HX_STACK_LINE(1006)
			int greenComponent = ::Math_obj::floor((((int((int(Color) >> int((int)8))) & int((int)255))) * this->green));		HX_STACK_VAR(greenComponent,"greenComponent");
			HX_STACK_LINE(1007)
			int blueComponent = ::Math_obj::floor((((int(Color) & int((int)255))) * this->blue));		HX_STACK_VAR(blueComponent,"blueComponent");
			HX_STACK_LINE(1008)
			Color = (int((int((int(redComponent) << int((int)16))) | int((int(greenComponent) << int((int)8))))) | int(blueComponent));
		}
		HX_STACK_LINE(1012)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(1025)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(1026)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

::neash::display::Sprite FlxCamera_obj::getContainerSprite( ){
	HX_STACK_PUSH("FlxCamera::getContainerSprite","org/flixel/FlxCamera.hx",974);
	HX_STACK_THIS(this);
	HX_STACK_LINE(974)
	return this->_flashSprite;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getContainerSprite,return )

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_PUSH("FlxCamera::setScale","org/flixel/FlxCamera.hx",954);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(955)
		this->_flashSprite->nmeSetScaleX(X);
		HX_STACK_LINE(956)
		this->_flashSprite->nmeSetScaleY(Y);
		HX_STACK_LINE(959)
		this->_flashOffsetX = ((this->width * 0.5) * X);
		HX_STACK_LINE(960)
		this->_flashOffsetY = ((this->height * 0.5) * Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

::org::flixel::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_PUSH("FlxCamera::getScale","org/flixel/FlxCamera.hx",946);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",947);
			{
				HX_STACK_LINE(947)
				::org::flixel::FlxPoint _this = __this->_point;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(947)
				_this->x = __this->_flashSprite->nmeGetScaleX();
				HX_STACK_LINE(947)
				_this->y = __this->_flashSprite->nmeGetScaleY();
				HX_STACK_LINE(947)
				return _this;
			}
			return null();
		}
	};
	HX_STACK_LINE(946)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

bool FlxCamera_obj::setAntialiasing( bool Antialiasing){
	HX_STACK_PUSH("FlxCamera::setAntialiasing","org/flixel/FlxCamera.hx",931);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Antialiasing,"Antialiasing");
	HX_STACK_LINE(932)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(936)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAntialiasing,return )

int FlxCamera_obj::setColor( int Color){
	HX_STACK_PUSH("FlxCamera::setColor","org/flixel/FlxCamera.hx",895);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(896)
	this->color = Color;
	HX_STACK_LINE(909)
	this->red = (((int(this->color) >> int((int)16))) * 0.00392);
	HX_STACK_LINE(910)
	this->green = (((int((int(this->color) >> int((int)8))) & int((int)255))) * 0.0039);
	HX_STACK_LINE(911)
	this->blue = (((int(this->color) & int((int)255))) * 0.00392);
	HX_STACK_LINE(918)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setColor,return )

Float FlxCamera_obj::setAngle( Float Angle){
	HX_STACK_PUSH("FlxCamera::setAngle","org/flixel/FlxCamera.hx",871);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_LINE(872)
	this->angle = Angle;
	HX_STACK_LINE(873)
	this->_flashSprite->nmeSetRotation(Angle);
	HX_STACK_LINE(874)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAngle,return )

Float FlxCamera_obj::setAlpha( Float Alpha){
	HX_STACK_PUSH("FlxCamera::setAlpha","org/flixel/FlxCamera.hx",853);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	struct _Function_1_1{
		inline static Float Block( Float &Alpha){
			HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",854);
			{
				HX_STACK_LINE(854)
				Float lowerBound = (  (((Alpha < (int)0))) ? Float((int)0) : Float(Alpha) );		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(854)
				return (  (((lowerBound > (int)1))) ? Float((int)1) : Float(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(854)
	this->alpha = _Function_1_1::Block(Alpha);
	HX_STACK_LINE(858)
	this->_canvas->nmeSetAlpha(Alpha);
	HX_STACK_LINE(860)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setAlpha,return )

Float FlxCamera_obj::setZoom( Float Zoom){
	HX_STACK_PUSH("FlxCamera::setZoom","org/flixel/FlxCamera.hx",831);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Zoom,"Zoom");
	HX_STACK_LINE(832)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(833)
		this->zoom = ::org::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(837)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(840)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(841)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setZoom,return )

::org::flixel::FlxCamera FlxCamera_obj::copyFrom( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxCamera::copyFrom","org/flixel/FlxCamera.hx",792);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(793)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(794)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(799)
		if (((this->bounds == null()))){
			HX_STACK_LINE(800)
			this->bounds = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			::org::flixel::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(803)
			_this->x = Rect->x;
			HX_STACK_LINE(803)
			_this->y = Rect->y;
			HX_STACK_LINE(803)
			_this->width = Rect->width;
			HX_STACK_LINE(803)
			_this->height = Rect->height;
			HX_STACK_LINE(803)
			_this;
		}
	}
	HX_STACK_LINE(805)
	this->target = Camera->target;
	HX_STACK_LINE(806)
	if (((this->target != null()))){
		HX_STACK_LINE(807)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(809)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(814)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(815)
				this->deadzone = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
			}
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(818)
				::org::flixel::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				::org::flixel::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(818)
				_this->x = Rect->x;
				HX_STACK_LINE(818)
				_this->y = Rect->y;
				HX_STACK_LINE(818)
				_this->width = Rect->width;
				HX_STACK_LINE(818)
				_this->height = Rect->height;
				HX_STACK_LINE(818)
				_this;
			}
		}
	}
	HX_STACK_LINE(821)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_PUSH("FlxCamera::stopFX","org/flixel/FlxCamera.hx",778);
		HX_STACK_THIS(this);
		HX_STACK_LINE(779)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(780)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(781)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(782)
		this->_flashSprite->nmeSetX((this->x + this->_flashOffsetX));
		HX_STACK_LINE(783)
		this->_flashSprite->nmeSetY((this->y + this->_flashOffsetY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxCamera::shake","org/flixel/FlxCamera.hx",762);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(763)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(764)
			return null();
		}
		HX_STACK_LINE(767)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(768)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(769)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(770)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			::org::flixel::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(771)
			_this->x = X;
			HX_STACK_LINE(771)
			_this->y = Y;
			HX_STACK_LINE(771)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::fade( Dynamic Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::fade","org/flixel/FlxCamera.hx",716);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(718)
		if (((Color == null()))){
			HX_STACK_LINE(719)
			Color = (int)-16777216;
		}
		HX_STACK_LINE(729)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(730)
			return null();
		}
		HX_STACK_LINE(733)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(734)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(735)
			Duration = 5e-324;
		}
		HX_STACK_LINE(739)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(740)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(741)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(743)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(744)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(748)
			this->_fxFadeAlpha = 5e-324;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::flash( Dynamic Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::flash","org/flixel/FlxCamera.hx",676);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(678)
		if (((Color == null()))){
			HX_STACK_LINE(679)
			Color = (int)-1;
		}
		HX_STACK_LINE(689)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(690)
			return null();
		}
		HX_STACK_LINE(693)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(694)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(695)
			Duration = 5e-324;
		}
		HX_STACK_LINE(698)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(699)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(700)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_PUSH("FlxCamera::setBounds","org/flixel/FlxCamera.hx",651);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(652)
		if (((this->bounds == null()))){
			HX_STACK_LINE(653)
			this->bounds = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(656)
		{
			HX_STACK_LINE(656)
			::org::flixel::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(656)
			_this->x = X;
			HX_STACK_LINE(656)
			_this->y = Y;
			HX_STACK_LINE(656)
			_this->width = Width;
			HX_STACK_LINE(656)
			_this->height = Height;
			HX_STACK_LINE(656)
			_this;
		}
		HX_STACK_LINE(657)
		if ((UpdateWorld)){
			HX_STACK_LINE(659)
			::org::flixel::FlxRect _this = ::org::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::org::flixel::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(659)
			_this->x = Rect->x;
			HX_STACK_LINE(659)
			_this->y = Rect->y;
			HX_STACK_LINE(659)
			_this->width = Rect->width;
			HX_STACK_LINE(659)
			_this->height = Rect->height;
			HX_STACK_LINE(659)
			_this;
		}
		HX_STACK_LINE(661)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::focusOn( ::org::flixel::FlxPoint point){
{
		HX_STACK_PUSH("FlxCamera::focusOn","org/flixel/FlxCamera.hx",636);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(637)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(638)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			::org::flixel::FlxPoint _this = this->scroll;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(639)
			_this->x = (point->x - (this->width * 0.5));
			HX_STACK_LINE(639)
			_this->y = (point->y - (this->height * 0.5));
			HX_STACK_LINE(639)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::follow( ::org::flixel::FlxObject Target,hx::Null< int >  __o_Style,::org::flixel::FlxPoint Offset){
int Style = __o_Style.Default(0);
	HX_STACK_PUSH("FlxCamera::follow","org/flixel/FlxCamera.hx",599);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Offset,"Offset");
{
		HX_STACK_LINE(600)
		this->style = Style;
		HX_STACK_LINE(601)
		this->target = Target;
		HX_STACK_LINE(602)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(603)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(604)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(605)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(608)
				Float w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(609)
				Float h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(610)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - w1))) / Float((int)2)),((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25)),w1,h1);
			}
			;break;
			case (int)2: {
				struct _Function_2_1{
					inline static Float Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",612);
						{
							HX_STACK_LINE(612)
							Float Number1 = __this->width;		HX_STACK_VAR(Number1,"Number1");
							Float Number2 = __this->height;		HX_STACK_VAR(Number2,"Number2");
							HX_STACK_LINE(612)
							return (  (((Number1 >= Number2))) ? Float(Number1) : Float(Number2) );
						}
						return null();
					}
				};
				HX_STACK_LINE(612)
				helper = (Float(_Function_2_1::Block(this)) / Float((int)4));
				HX_STACK_LINE(613)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)3: {
				struct _Function_2_1{
					inline static Float Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",615);
						{
							HX_STACK_LINE(615)
							Float Number1 = __this->width;		HX_STACK_VAR(Number1,"Number1");
							Float Number2 = __this->height;		HX_STACK_VAR(Number2,"Number2");
							HX_STACK_LINE(615)
							return (  (((Number1 >= Number2))) ? Float(Number1) : Float(Number2) );
						}
						return null();
					}
				};
				HX_STACK_LINE(615)
				helper = (Float(_Function_2_1::Block(this)) / Float((int)8));
				HX_STACK_LINE(616)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(618)
				if (((this->target != null()))){
					HX_STACK_LINE(620)
					w = (this->target->width + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(621)
					h = (this->target->height + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				}
				HX_STACK_LINE(623)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((Float(((this->width - w))) / Float((int)2)),((Float(((this->height - h))) / Float((int)2)) - (h * 0.25)),w,h);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(624)
				this->deadzone = ::org::flixel::FlxRect_obj::__new((int)0,(int)0,this->width,this->height);
			}
			;break;
			default: {
				HX_STACK_LINE(626)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::update( ){
{
		HX_STACK_PUSH("FlxCamera::update","org/flixel/FlxCamera.hx",415);
		HX_STACK_THIS(this);
		HX_STACK_LINE(418)
		if (((this->target != null()))){
			HX_STACK_LINE(419)
			if (((this->deadzone == null()))){
				struct _Function_3_1{
					inline static ::org::flixel::FlxPoint Block( ::org::flixel::FlxCamera_obj *__this){
						HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",422);
						{
							HX_STACK_LINE(422)
							::org::flixel::FlxObject _this = __this->target;		HX_STACK_VAR(_this,"_this");
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(422)
							if (((point == null()))){
								HX_STACK_LINE(422)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(422)
							point->x = (_this->x + (_this->width * 0.5));
							HX_STACK_LINE(422)
							point->y = (_this->y + (_this->height * 0.5));
							HX_STACK_LINE(422)
							return point;
						}
						return null();
					}
				};
				HX_STACK_LINE(421)
				this->focusOn(_Function_3_1::Block(this));
			}
			else{
				HX_STACK_LINE(426)
				Float edge;		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(427)
				Float targetX;		HX_STACK_VAR(targetX,"targetX");
				HX_STACK_LINE(428)
				Float targetY;		HX_STACK_VAR(targetY,"targetY");
				HX_STACK_LINE(450)
				targetX = this->target->x;
				HX_STACK_LINE(451)
				targetY = this->target->y;
				HX_STACK_LINE(454)
				if (((this->style == (int)4))){
					HX_STACK_LINE(456)
					if (((targetX > (this->scroll->x + this->width)))){
						HX_STACK_LINE(457)
						hx::AddEq(this->scroll->x,this->width);
					}
					else{
						HX_STACK_LINE(460)
						if (((targetX < this->scroll->x))){
							HX_STACK_LINE(461)
							hx::SubEq(this->scroll->x,this->width);
						}
					}
					HX_STACK_LINE(465)
					if (((targetY > (this->scroll->y + this->height)))){
						HX_STACK_LINE(466)
						hx::AddEq(this->scroll->y,this->height);
					}
					else{
						HX_STACK_LINE(469)
						if (((targetY < this->scroll->y))){
							HX_STACK_LINE(470)
							hx::SubEq(this->scroll->y,this->height);
						}
					}
				}
				else{
					HX_STACK_LINE(476)
					edge = (targetX - this->deadzone->x);
					HX_STACK_LINE(477)
					if (((this->scroll->x > edge))){
						HX_STACK_LINE(478)
						this->scroll->x = edge;
					}
					HX_STACK_LINE(481)
					edge = (((targetX + this->target->width) - this->deadzone->x) - this->deadzone->width);
					HX_STACK_LINE(482)
					if (((this->scroll->x < edge))){
						HX_STACK_LINE(483)
						this->scroll->x = edge;
					}
					HX_STACK_LINE(487)
					edge = (targetY - this->deadzone->y);
					HX_STACK_LINE(488)
					if (((this->scroll->y > edge))){
						HX_STACK_LINE(489)
						this->scroll->y = edge;
					}
					HX_STACK_LINE(492)
					edge = (((targetY + this->target->height) - this->deadzone->y) - this->deadzone->height);
					HX_STACK_LINE(493)
					if (((this->scroll->y < edge))){
						HX_STACK_LINE(494)
						this->scroll->y = edge;
					}
				}
			}
		}
		HX_STACK_LINE(502)
		if (((this->bounds != null()))){
			HX_STACK_LINE(504)
			if (((this->scroll->x < this->bounds->getLeft()))){
				HX_STACK_LINE(505)
				this->scroll->x = this->bounds->getLeft();
			}
			HX_STACK_LINE(508)
			if (((this->scroll->x > (this->bounds->getRight() - this->width)))){
				HX_STACK_LINE(509)
				this->scroll->x = (this->bounds->getRight() - this->width);
			}
			HX_STACK_LINE(512)
			if (((this->scroll->y < this->bounds->getTop()))){
				HX_STACK_LINE(513)
				this->scroll->y = this->bounds->getTop();
			}
			HX_STACK_LINE(516)
			if (((this->scroll->y > (this->bounds->getBottom() - this->height)))){
				HX_STACK_LINE(517)
				this->scroll->y = (this->bounds->getBottom() - this->height);
			}
		}
		HX_STACK_LINE(523)
		this->scroll->x = (Float(::Math_obj::floor((this->scroll->x * (int)100))) / Float((int)100));
		HX_STACK_LINE(524)
		this->scroll->y = (Float(::Math_obj::floor((this->scroll->y * (int)100))) / Float((int)100));
		HX_STACK_LINE(528)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(530)
			hx::SubEq(this->_fxFlashAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(531)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(532)
				this->_fxFlashComplete();
			}
		}
		HX_STACK_LINE(538)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(539)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(542)
				hx::SubEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(543)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(545)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(546)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(547)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(554)
				hx::AddEq(this->_fxFadeAlpha,(Float(::org::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(555)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(557)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(558)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(559)
						this->_fxFadeComplete();
					}
				}
			}
		}
		HX_STACK_LINE(567)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(569)
			hx::SubEq(this->_fxShakeDuration,::org::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(570)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(572)
				{
					HX_STACK_LINE(572)
					::org::flixel::FlxPoint _this = this->_fxShakeOffset;		HX_STACK_VAR(_this,"_this");
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(572)
					_this->x = X;
					HX_STACK_LINE(572)
					_this->y = Y;
					HX_STACK_LINE(572)
					_this;
				}
				HX_STACK_LINE(573)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(574)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(580)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",582);
							{
								HX_STACK_LINE(582)
								::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(582)
								if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(582)
									hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(582)
								return ::org::flixel::FlxG_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(581)
					this->_fxShakeOffset->x = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->width) * (int)2) - (this->_fxShakeIntensity * this->width))) * this->zoom);
				}
				HX_STACK_LINE(584)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxCamera.hx",586);
							{
								HX_STACK_LINE(586)
								::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(586)
								if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(586)
									hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(586)
								return ::org::flixel::FlxG_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(585)
					this->_fxShakeOffset->y = ((((((_Function_4_1::Block() * this->_fxShakeIntensity) * this->height) * (int)2) - (this->_fxShakeIntensity * this->height))) * this->zoom);
				}
			}
		}
	}
return null();
}


Void FlxCamera_obj::destroy( ){
{
		HX_STACK_PUSH("FlxCamera::destroy","org/flixel/FlxCamera.hx",371);
		HX_STACK_THIS(this);
		HX_STACK_LINE(379)
		this->target = null();
		HX_STACK_LINE(380)
		this->scroll = null();
		HX_STACK_LINE(381)
		this->deadzone = null();
		HX_STACK_LINE(382)
		this->bounds = null();
		HX_STACK_LINE(387)
		this->_flashRect = null();
		HX_STACK_LINE(388)
		this->_flashPoint = null();
		HX_STACK_LINE(389)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(390)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(391)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(392)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(393)
		this->_fill = null();
		HX_STACK_LINE(396)
		this->_flashSprite->removeChild(this->_debugLayer);
		HX_STACK_LINE(397)
		this->_flashSprite->removeChild(this->_canvas);
		HX_STACK_LINE(398)
		int canvasNumChildren = this->_canvas->nmeGetNumChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(399)
			while(((_g1 < _g))){
				HX_STACK_LINE(399)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(401)
				this->_canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(403)
		this->_debugLayer = null();
		HX_STACK_LINE(404)
		this->_canvas = null();
		HX_STACK_LINE(406)
		this->_flashSprite = null();
		HX_STACK_LINE(408)
		this->super::destroy();
	}
return null();
}


int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(fog,"fog");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_MARK_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_MARK_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fog,"fog");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(_debugLayer,"_debugLayer");
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashOffsetY,"_flashOffsetY");
	HX_VISIT_MEMBER_NAME(_flashOffsetX,"_flashOffsetX");
	HX_VISIT_MEMBER_NAME(_flashSprite,"_flashSprite");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fog") ) { return fog; }
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"_fill") ) { return _fill; }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setZoom") ) { return setZoom_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { return _debugLayer; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_LOCKON") ) { return STYLE_LOCKON; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { return _flashSprite; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN") ) { return STYLE_TOPDOWN; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { return _flashOffsetY; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { return _flashOffsetX; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SHAKE_BOTH_AXES") ) { return SHAKE_BOTH_AXES; }
		if (HX_FIELD_EQ(inName,"setAntialiasing") ) { return setAntialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STYLE_PLATFORMER") ) { return STYLE_PLATFORMER; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STYLE_NO_DEAD_ZONE") ) { return STYLE_NO_DEAD_ZONE; }
		if (HX_FIELD_EQ(inName,"getContainerSprite") ) { return getContainerSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN_TIGHT") ) { return STYLE_TOPDOWN_TIGHT; }
		if (HX_FIELD_EQ(inName,"SHAKE_VERTICAL_ONLY") ) { return SHAKE_VERTICAL_ONLY; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SHAKE_HORIZONTAL_ONLY") ) { return SHAKE_HORIZONTAL_ONLY; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STYLE_SCREEN_BY_SCREEN") ) { return STYLE_SCREEN_BY_SCREEN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"fog") ) { fog=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return setZoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return setColor(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return setAngle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return setAlpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return setWidth(inValue);width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::org::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return setHeight(inValue);height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::org::flixel::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debugLayer") ) { _debugLayer=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STYLE_LOCKON") ) { STYLE_LOCKON=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return setAntialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashSprite") ) { _flashSprite=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN") ) { STYLE_TOPDOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetY") ) { _flashOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffsetX") ) { _flashOffsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"SHAKE_BOTH_AXES") ) { SHAKE_BOTH_AXES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"STYLE_PLATFORMER") ) { STYLE_PLATFORMER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STYLE_NO_DEAD_ZONE") ) { STYLE_NO_DEAD_ZONE=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"STYLE_TOPDOWN_TIGHT") ) { STYLE_TOPDOWN_TIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHAKE_VERTICAL_ONLY") ) { SHAKE_VERTICAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"SHAKE_HORIZONTAL_ONLY") ) { SHAKE_HORIZONTAL_ONLY=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STYLE_SCREEN_BY_SCREEN") ) { STYLE_SCREEN_BY_SCREEN=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fog"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("blue"));
	outFields->push(HX_CSTRING("green"));
	outFields->push(HX_CSTRING("red"));
	outFields->push(HX_CSTRING("_debugLayer"));
	outFields->push(HX_CSTRING("_canvas"));
	outFields->push(HX_CSTRING("_fill"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashOffsetY"));
	outFields->push(HX_CSTRING("_flashOffsetX"));
	outFields->push(HX_CSTRING("_flashSprite"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STYLE_LOCKON"),
	HX_CSTRING("STYLE_PLATFORMER"),
	HX_CSTRING("STYLE_TOPDOWN"),
	HX_CSTRING("STYLE_TOPDOWN_TIGHT"),
	HX_CSTRING("STYLE_SCREEN_BY_SCREEN"),
	HX_CSTRING("STYLE_NO_DEAD_ZONE"),
	HX_CSTRING("SHAKE_BOTH_AXES"),
	HX_CSTRING("SHAKE_HORIZONTAL_ONLY"),
	HX_CSTRING("SHAKE_VERTICAL_ONLY"),
	HX_CSTRING("defaultZoom"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setHeight"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("isColored"),
	HX_CSTRING("fog"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("fill"),
	HX_CSTRING("getContainerSprite"),
	HX_CSTRING("setScale"),
	HX_CSTRING("getScale"),
	HX_CSTRING("setAntialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("setColor"),
	HX_CSTRING("color"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("angle"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("setZoom"),
	HX_CSTRING("zoom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("follow"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("blue"),
	HX_CSTRING("green"),
	HX_CSTRING("red"),
	HX_CSTRING("_debugLayer"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("_fill"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashOffsetY"),
	HX_CSTRING("_flashOffsetX"),
	HX_CSTRING("_flashSprite"),
	HX_CSTRING("_point"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bounds"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("target"),
	HX_CSTRING("style"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
};

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace org
} // end namespace flixel
