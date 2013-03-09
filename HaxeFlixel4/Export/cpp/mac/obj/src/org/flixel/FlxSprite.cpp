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
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_BlendMode
#include <neash/display/BlendMode.h>
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
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
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
#ifndef INCLUDED_org_flixel_FlxLayer
#include <org/flixel/FlxLayer.h>
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
#ifndef INCLUDED_org_flixel_system_FlxAnim
#include <org/flixel/system/FlxAnim.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_PUSH("FlxSprite::new","org/flixel/FlxSprite.hx",27);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(77)
	this->_calculatedPixelsFacing = (int)16;
	HX_STACK_LINE(76)
	this->_calculatedPixelsIndex = (int)-1;
	HX_STACK_LINE(191)
	super::__construct(X,Y,null(),null());
	HX_STACK_LINE(193)
	this->_flashPoint = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(194)
	this->_flashRect = ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(195)
	this->_flashRect2 = ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(196)
	this->_flashPointZero = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(197)
	this->offset = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(198)
	this->origin = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(199)
	this->scale = ::org::flixel::FlxPoint_obj::__new(1.0,1.0);
	HX_STACK_LINE(203)
	this->_color = (int)16777215;
	HX_STACK_LINE(205)
	this->setAlpha(1.0);
	HX_STACK_LINE(209)
	this->_blend = null();
	HX_STACK_LINE(210)
	this->_blendString = null();
	HX_STACK_LINE(212)
	this->setAntialiasing(false);
	HX_STACK_LINE(213)
	this->cameras = null();
	HX_STACK_LINE(215)
	this->finished = false;
	HX_STACK_LINE(216)
	this->paused = true;
	HX_STACK_LINE(217)
	this->setFacing((int)16);
	HX_STACK_LINE(218)
	this->_animations = Array_obj< ::org::flixel::system::FlxAnim >::__new();
	HX_STACK_LINE(219)
	this->flipped = (int)0;
	HX_STACK_LINE(220)
	this->_curAnim = null();
	HX_STACK_LINE(221)
	this->_curFrame = (int)0;
	HX_STACK_LINE(222)
	this->_curIndex = (int)0;
	HX_STACK_LINE(223)
	this->_frameTimer = (int)0;
	HX_STACK_LINE(225)
	this->_matrix = ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(226)
	this->_callback = null();
	HX_STACK_LINE(229)
	this->_red = 1.0;
	HX_STACK_LINE(230)
	this->_green = 1.0;
	HX_STACK_LINE(231)
	this->_blue = 1.0;
	HX_STACK_LINE(233)
	this->_frameID = (int)0;
	HX_STACK_LINE(236)
	if (((SimpleGraphic == null()))){
		HX_STACK_LINE(237)
		SimpleGraphic = ::org::flixel::FlxAssets_obj::imgDefault;
	}
	HX_STACK_LINE(240)
	this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null(),null());
}
;
	return null();
}

FlxSprite_obj::~FlxSprite_obj() { }

Dynamic FlxSprite_obj::__CreateEmpty() { return  new FlxSprite_obj; }
hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSprite_obj > result = new FlxSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool FlxSprite_obj::overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxSprite::overlapsPoint","org/flixel/FlxSprite.hx",1664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1665)
		if (((bool((this->scale->x == (int)1)) && bool((this->scale->y == (int)1))))){
			HX_STACK_LINE(1666)
			return this->super::overlapsPoint(point,InScreenSpace,Camera);
		}
		HX_STACK_LINE(1670)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1671)
			return (bool((bool((bool((point->x > (this->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((point->x < ((this->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((point->y > (this->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((point->y < ((this->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
		}
		HX_STACK_LINE(1675)
		if (((Camera == null()))){
			HX_STACK_LINE(1676)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1679)
		Float X = (point->x - Camera->scroll->x);		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1680)
		Float Y = (point->y - Camera->scroll->y);		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1681)
		{
			HX_STACK_LINE(1681)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1681)
			if (((point1 == null()))){
				HX_STACK_LINE(1681)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1681)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1681)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1681)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(1681)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(1681)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1681)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1681)
			point1;
		}
		HX_STACK_LINE(1682)
		return (bool((bool((bool((X > (this->_point->x - ((0.5 * this->width) * ((this->scale->x - (int)1)))))) && bool((X < ((this->_point->x + this->width) + ((0.5 * this->width) * ((this->scale->x - (int)1)))))))) && bool((Y > (this->_point->y - ((0.5 * this->height) * ((this->scale->y - (int)1)))))))) && bool((Y < ((this->_point->y + this->height) + ((0.5 * this->height) * ((this->scale->y - (int)1)))))));
	}
}


Void FlxSprite_obj::updateLayerProps( ){
{
		HX_STACK_PUSH("FlxSprite::updateLayerProps","org/flixel/FlxSprite.hx",1646);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1646)
		if (((this->_layer != null()))){
			HX_STACK_LINE(1649)
			this->_layer->antialiasing = this->antialiasing;
			HX_STACK_LINE(1650)
			this->_layer->set_blend(this->_blend);
			HX_STACK_LINE(1652)
			if (((this->_color < (int)16777215))){
				HX_STACK_LINE(1656)
				this->_layer->set_isColored(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateLayerProps,(void))

Void FlxSprite_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxSprite::updateFrameData","org/flixel/FlxSprite.hx",1626);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1626)
		if (((bool((bool((this->_node != null())) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(1630)
			this->updateLayerProps();
			HX_STACK_LINE(1631)
			if (((this->frames > (int)1))){
				HX_STACK_LINE(1632)
				this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),(int)0,(int)0,(int)0,(int)0,(int)1,(int)1);
			}
			else{
				HX_STACK_LINE(1636)
				this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(1639)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
	}
return null();
}


::neash::display::BlendMode FlxSprite_obj::set_blend( ::neash::display::BlendMode value){
	HX_STACK_PUSH("FlxSprite::set_blend","org/flixel/FlxSprite.hx",1605);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(1606)
	{
		::neash::display::BlendMode _switch_1 = (value);
		switch((_switch_1)->GetIndex()){
			case 7: {
				HX_STACK_LINE(1609)
				this->_blendString = HX_CSTRING("add");
				HX_STACK_LINE(1610)
				this->_blend = value;
			}
			;break;
			default: {
				HX_STACK_LINE(1612)
				this->_blendString = null();
				HX_STACK_LINE(1613)
				this->_blend = ::neash::display::BlendMode_obj::NORMAL_dyn();
			}
		}
	}
	HX_STACK_LINE(1616)
	this->updateLayerProps();
	HX_STACK_LINE(1617)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

::neash::display::BlendMode FlxSprite_obj::get_blend( ){
	HX_STACK_PUSH("FlxSprite::get_blend","org/flixel/FlxSprite.hx",1600);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1600)
	return this->_blend;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_blend,return )

bool FlxSprite_obj::simpleRenderSprite( ){
	HX_STACK_PUSH("FlxSprite::simpleRenderSprite","org/flixel/FlxSprite.hx",1588);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1588)
	return (bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,simpleRenderSprite,return )

bool FlxSprite_obj::getSimpleRender( ){
	HX_STACK_PUSH("FlxSprite::getSimpleRender","org/flixel/FlxSprite.hx",1583);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1583)
	return (bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getSimpleRender,return )

bool FlxSprite_obj::setAntialiasing( bool val){
	HX_STACK_PUSH("FlxSprite::setAntialiasing","org/flixel/FlxSprite.hx",1559);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(1560)
	this->antialiasing = val;
	HX_STACK_LINE(1562)
	this->updateLayerProps();
	HX_STACK_LINE(1564)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setAntialiasing,return )

Void FlxSprite_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxSprite::calcFrame","org/flixel/FlxSprite.hx",1470);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(1472)
		if ((AreYouSure)){
			HX_STACK_LINE(1474)
			if (((bool((this->_calculatedPixelsIndex == this->_curIndex)) && bool((this->_calculatedPixelsFacing == this->facing))))){
				HX_STACK_LINE(1475)
				return null();
			}
			HX_STACK_LINE(1478)
			if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->nmeGetWidth() != this->width)))) || bool((this->framePixels->nmeGetHeight() != this->height))))){
				HX_STACK_LINE(1479)
				this->framePixels = ::neash::display::BitmapData_obj::__new(::Math_obj::floor(this->frameWidth),::Math_obj::floor(this->frameHeight),null(),null(),null());
			}
			HX_STACK_LINE(1487)
			int indexX = (this->_curIndex * ((this->frameWidth + (int)1)));		HX_STACK_VAR(indexX,"indexX");
			HX_STACK_LINE(1488)
			this->_calculatedPixelsIndex = this->_curIndex;
			HX_STACK_LINE(1489)
			this->_calculatedPixelsFacing = this->facing;
			HX_STACK_LINE(1491)
			int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
			HX_STACK_LINE(1497)
			int widthHelper = this->_pixels->nmeGetWidth();		HX_STACK_VAR(widthHelper,"widthHelper");
			HX_STACK_LINE(1499)
			if (((indexX >= widthHelper))){
				HX_STACK_LINE(1504)
				indexY = (::Math_obj::floor((Float(indexX) / Float(widthHelper))) * ((this->frameHeight + (int)1)));
				HX_STACK_LINE(1506)
				hx::ModEq(indexX,widthHelper);
			}
			HX_STACK_LINE(1518)
			this->_flashRect->x = indexX;
			HX_STACK_LINE(1519)
			this->_flashRect->y = indexY;
			HX_STACK_LINE(1520)
			this->framePixels->copyPixels(this->_pixels,this->_flashRect,this->_flashPointZero,null(),null(),null());
			HX_STACK_LINE(1522)
			if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
				HX_STACK_LINE(1524)
				::neash::display::BitmapData temp = this->framePixels->clone();		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1525)
				this->_matrix->identity();
				HX_STACK_LINE(1526)
				this->_matrix->scale((int)-1,(int)1);
				HX_STACK_LINE(1527)
				this->_matrix->translate(temp->nmeGetWidth(),(int)0);
				HX_STACK_LINE(1529)
				this->framePixels->fillRect(this->framePixels->nmeGetRect(),(int)0);
				HX_STACK_LINE(1533)
				this->framePixels->draw(temp,this->_matrix,null(),null(),null(),null());
			}
			HX_STACK_LINE(1536)
			this->_flashRect->x = this->_flashRect->y = (int)0;
			HX_STACK_LINE(1537)
			if (((this->_colorTransform != null()))){
				HX_STACK_LINE(1538)
				this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
			}
		}
		HX_STACK_LINE(1545)
		if (((this->_callback_dyn() != null()))){
			HX_STACK_LINE(1546)
			::Reflect_obj::callMethod(hx::ObjectPtr<OBJ_>(this),this->__Field(HX_CSTRING("_callback"),true),Dynamic( Array_obj<Dynamic>::__new().Add((  (((this->_curAnim != null()))) ? ::String(this->_curAnim->name) : ::String(null()) )).Add(this->_curFrame).Add(this->_curIndex)));
		}
		HX_STACK_LINE(1549)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::org::flixel::FlxPoint point,hx::Null< int >  __o_Mask,::org::flixel::FlxCamera Camera){
int Mask = __o_Mask.Default(255);
	HX_STACK_PUSH("FlxSprite::pixelsOverlapPoint","org/flixel/FlxSprite.hx",1405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(Mask,"Mask");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1406)
		if (((Camera == null()))){
			HX_STACK_LINE(1407)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1410)
		{
			HX_STACK_LINE(1410)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1410)
			if (((point1 == null()))){
				HX_STACK_LINE(1410)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1410)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1410)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1410)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(1410)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(1410)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1410)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1410)
			point1;
		}
		HX_STACK_LINE(1411)
		this->_point->x = (this->_point->x - this->offset->x);
		HX_STACK_LINE(1412)
		this->_point->y = (this->_point->y - this->offset->y);
		HX_STACK_LINE(1413)
		this->_flashPoint->x = ((point->x - Camera->scroll->x) - this->_point->x);
		HX_STACK_LINE(1414)
		this->_flashPoint->y = ((point->y - Camera->scroll->y) - this->_point->y);
		HX_STACK_LINE(1419)
		if (((bool((bool((bool((this->_flashPoint->x < (int)0)) || bool((this->_flashPoint->x > this->frameWidth)))) || bool((this->_flashPoint->y < (int)0)))) || bool((this->_flashPoint->y > this->frameHeight))))){
			HX_STACK_LINE(1420)
			return false;
		}
		else{
			HX_STACK_LINE(1426)
			int indexX = (this->_curIndex * this->frameWidth);		HX_STACK_VAR(indexX,"indexX");
			HX_STACK_LINE(1427)
			int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
			HX_STACK_LINE(1430)
			int widthHelper = (  (((this->flipped != (int)0))) ? int(this->flipped) : int(this->_pixels->nmeGetWidth()) );		HX_STACK_VAR(widthHelper,"widthHelper");
			HX_STACK_LINE(1431)
			if (((indexX >= widthHelper))){
				HX_STACK_LINE(1433)
				indexY = (::Math_obj::floor((Float(indexX) / Float(widthHelper))) * this->frameHeight);
				HX_STACK_LINE(1434)
				hx::ModEq(indexX,widthHelper);
			}
			HX_STACK_LINE(1438)
			int pixelColor = (int)0;		HX_STACK_VAR(pixelColor,"pixelColor");
			HX_STACK_LINE(1443)
			if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
				HX_STACK_LINE(1444)
				pixelColor = this->_pixels->getPixel32(::Math_obj::floor(((indexX + this->frameWidth) - this->_flashPoint->x)),::Math_obj::floor((indexY + this->_flashPoint->y)));
			}
			else{
				HX_STACK_LINE(1448)
				pixelColor = this->_pixels->getPixel32(::Math_obj::floor((indexX + this->_flashPoint->x)),::Math_obj::floor((indexY + this->_flashPoint->y)));
			}
			HX_STACK_LINE(1453)
			int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
			HX_STACK_LINE(1457)
			return (pixelAlpha >= Mask);
		}
		HX_STACK_LINE(1419)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

bool FlxSprite_obj::onScreenSprite( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreenSprite","org/flixel/FlxSprite.hx",1359);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(1360)
	if (((Camera == null()))){
		HX_STACK_LINE(1361)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(1364)
	{
		HX_STACK_LINE(1364)
		::org::flixel::FlxPoint point = this->_point;		HX_STACK_VAR(point,"point");
		::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
		HX_STACK_LINE(1364)
		if (((point == null()))){
			HX_STACK_LINE(1364)
			point = ::org::flixel::FlxPoint_obj::__new(null(),null());
		}
		HX_STACK_LINE(1364)
		if (((Camera1 == null()))){
			HX_STACK_LINE(1364)
			Camera1 = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1364)
		point->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
		HX_STACK_LINE(1364)
		point->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
		HX_STACK_LINE(1364)
		hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(1364)
		hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
		HX_STACK_LINE(1364)
		point;
	}
	HX_STACK_LINE(1365)
	this->_point->x = (this->_point->x - this->offset->x);
	HX_STACK_LINE(1366)
	this->_point->y = (this->_point->y - this->offset->y);
	HX_STACK_LINE(1368)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1369)
	if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
		HX_STACK_LINE(1370)
		result = (bool((bool((bool(((this->_point->x + this->frameWidth) > (int)0)) && bool((this->_point->x < Camera->width)))) && bool(((this->_point->y + this->frameHeight) > (int)0)))) && bool((this->_point->y < Camera->height)));
	}
	else{
		HX_STACK_LINE(1375)
		Float halfWidth = (0.5 * this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(1376)
		Float halfHeight = (0.5 * this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(1377)
		Float absScaleX = (  (((this->scale->x > (int)0))) ? Float(this->scale->x) : Float(-(this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
		HX_STACK_LINE(1378)
		Float absScaleY = (  (((this->scale->y > (int)0))) ? Float(this->scale->y) : Float(-(this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
		HX_STACK_LINE(1382)
		Float radius = (((  (((this->frameWidth >= this->frameHeight))) ? int(this->frameWidth) : int(this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(1384)
		hx::AddEq(this->_point->x,halfWidth);
		HX_STACK_LINE(1385)
		hx::AddEq(this->_point->y,halfHeight);
		HX_STACK_LINE(1386)
		result = (bool((bool((bool(((this->_point->x + radius) > (int)0)) && bool(((this->_point->x - radius) < Camera->width)))) && bool(((this->_point->y + radius) > (int)0)))) && bool(((this->_point->y - radius) < Camera->height)));
	}
	HX_STACK_LINE(1389)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,onScreenSprite,return )

bool FlxSprite_obj::onScreen( ::org::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxSprite::onScreen","org/flixel/FlxSprite.hx",1354);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	struct _Function_1_1{
		inline static bool Block( ::org::flixel::FlxCamera &Camera,::org::flixel::FlxSprite_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1355);
			{
				HX_STACK_LINE(1355)
				::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
				HX_STACK_LINE(1355)
				if (((Camera1 == null()))){
					HX_STACK_LINE(1355)
					Camera1 = ::org::flixel::FlxG_obj::camera;
				}
				HX_STACK_LINE(1355)
				{
					HX_STACK_LINE(1355)
					::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
					::org::flixel::FlxCamera Camera2 = Camera1;		HX_STACK_VAR(Camera2,"Camera2");
					HX_STACK_LINE(1355)
					if (((point == null()))){
						HX_STACK_LINE(1355)
						point = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1355)
					if (((Camera2 == null()))){
						HX_STACK_LINE(1355)
						Camera2 = ::org::flixel::FlxG_obj::camera;
					}
					HX_STACK_LINE(1355)
					point->x = (__this->x - ::Math_obj::floor((Camera2->scroll->x * __this->scrollFactor->x)));
					HX_STACK_LINE(1355)
					point->y = (__this->y - ::Math_obj::floor((Camera2->scroll->y * __this->scrollFactor->y)));
					HX_STACK_LINE(1355)
					hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(1355)
					hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
					HX_STACK_LINE(1355)
					point;
				}
				HX_STACK_LINE(1355)
				__this->_point->x = (__this->_point->x - __this->offset->x);
				HX_STACK_LINE(1355)
				__this->_point->y = (__this->_point->y - __this->offset->y);
				HX_STACK_LINE(1355)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1355)
				if (((bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
					HX_STACK_LINE(1355)
					result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera1->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera1->height)));
				}
				else{
					HX_STACK_LINE(1355)
					Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
					HX_STACK_LINE(1355)
					Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
					HX_STACK_LINE(1355)
					Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
					HX_STACK_LINE(1355)
					Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
					HX_STACK_LINE(1355)
					Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
					HX_STACK_LINE(1355)
					hx::AddEq(__this->_point->x,halfWidth);
					HX_STACK_LINE(1355)
					hx::AddEq(__this->_point->y,halfHeight);
					HX_STACK_LINE(1355)
					result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera1->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera1->height)));
				}
				HX_STACK_LINE(1355)
				return result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1354)
	return _Function_1_1::Block(Camera,this);
}


int FlxSprite_obj::setFrame( int Frame){
	HX_STACK_PUSH("FlxSprite::setFrame","org/flixel/FlxSprite.hx",1332);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_LINE(1333)
	this->_curAnim = null();
	HX_STACK_LINE(1334)
	this->_curIndex = hx::Mod(Frame,this->frames);
	HX_STACK_LINE(1336)
	if (((this->_framesData != null()))){
		HX_STACK_LINE(1337)
		this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
	}
	HX_STACK_LINE(1341)
	this->dirty = true;
	HX_STACK_LINE(1342)
	return Frame;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setFrame,return )

int FlxSprite_obj::getFrame( ){
	HX_STACK_PUSH("FlxSprite::getFrame","org/flixel/FlxSprite.hx",1320);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1320)
	return this->_curIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getFrame,return )

int FlxSprite_obj::setColor( int Color){
	HX_STACK_PUSH("FlxSprite::setColor","org/flixel/FlxSprite.hx",1259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1275)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(1276)
	if (((this->_color == Color))){
		HX_STACK_LINE(1277)
		return this->_color;
	}
	HX_STACK_LINE(1280)
	this->_color = Color;
	HX_STACK_LINE(1281)
	if (((bool((this->alpha != (int)1)) || bool((this->_color != (int)16777215))))){
		HX_STACK_LINE(1282)
		this->_colorTransform = ::neash::geom::ColorTransform_obj::__new((((int(this->_color) >> int((int)16))) * 0.00392),(((int((int(this->_color) >> int((int)8))) & int((int)255))) * 0.00392),(((int(this->_color) & int((int)255))) * 0.00392),this->alpha,null(),null(),null(),null());
	}
	else{
		HX_STACK_LINE(1286)
		this->_colorTransform = null();
	}
	HX_STACK_LINE(1291)
	this->dirty = true;
	HX_STACK_LINE(1294)
	this->_red = (((int(this->_color) >> int((int)16))) * 0.00392);
	HX_STACK_LINE(1295)
	this->_green = (((int((int(this->_color) >> int((int)8))) & int((int)255))) * 0.00392);
	HX_STACK_LINE(1296)
	this->_blue = (((int(this->_color) & int((int)255))) * 0.00392);
	HX_STACK_LINE(1304)
	this->updateLayerProps();
	HX_STACK_LINE(1307)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setColor,return )

int FlxSprite_obj::getColor( ){
	HX_STACK_PUSH("FlxSprite::getColor","org/flixel/FlxSprite.hx",1247);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1247)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getColor,return )

Float FlxSprite_obj::setAlpha( Float Alpha){
	HX_STACK_PUSH("FlxSprite::setAlpha","org/flixel/FlxSprite.hx",1209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_LINE(1210)
	if (((Alpha > (int)1))){
		HX_STACK_LINE(1211)
		Alpha = (int)1;
	}
	HX_STACK_LINE(1214)
	if (((Alpha < (int)0))){
		HX_STACK_LINE(1215)
		Alpha = (int)0;
	}
	HX_STACK_LINE(1218)
	if (((Alpha == this->alpha))){
		HX_STACK_LINE(1219)
		return this->alpha;
	}
	HX_STACK_LINE(1222)
	this->alpha = Alpha;
	HX_STACK_LINE(1234)
	return this->alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setAlpha,return )

int FlxSprite_obj::setFacing( int Direction){
	HX_STACK_PUSH("FlxSprite::setFacing","org/flixel/FlxSprite.hx",1191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Direction,"Direction");
	HX_STACK_LINE(1192)
	if (((this->facing != Direction))){
		HX_STACK_LINE(1193)
		this->dirty = true;
	}
	HX_STACK_LINE(1196)
	this->facing = Direction;
	HX_STACK_LINE(1197)
	return Direction;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setFacing,return )

::neash::display::BitmapData FlxSprite_obj::setPixels( ::neash::display::BitmapData Pixels){
	HX_STACK_PUSH("FlxSprite::setPixels","org/flixel/FlxSprite.hx",1168);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Pixels,"Pixels");
	HX_STACK_LINE(1169)
	this->_pixels = Pixels;
	HX_STACK_LINE(1170)
	this->width = this->frameWidth = this->_pixels->nmeGetWidth();
	HX_STACK_LINE(1171)
	this->height = this->frameHeight = this->_pixels->nmeGetHeight();
	HX_STACK_LINE(1172)
	this->resetHelpers();
	HX_STACK_LINE(1174)
	this->_bitmapDataKey = ::org::flixel::FlxG_obj::getCacheKeyFor(this->_pixels);
	HX_STACK_LINE(1175)
	if (((this->_bitmapDataKey == null()))){
		HX_STACK_LINE(1177)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(null());
		HX_STACK_LINE(1178)
		::org::flixel::FlxG_obj::addBitmap(Pixels,false,false,this->_bitmapDataKey,null(),null());
	}
	HX_STACK_LINE(1181)
	this->_calculatedPixelsIndex = (int)-1;
	HX_STACK_LINE(1183)
	this->updateLayerInfo(true);
	HX_STACK_LINE(1184)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,setPixels,return )

::neash::display::BitmapData FlxSprite_obj::getPixels( ){
	HX_STACK_PUSH("FlxSprite::getPixels","org/flixel/FlxSprite.hx",1160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1160)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,getPixels,return )

Array< ::org::flixel::FlxPoint > FlxSprite_obj::replaceColor( int Color,int NewColor,hx::Null< bool >  __o_FetchPositions){
bool FetchPositions = __o_FetchPositions.Default(false);
	HX_STACK_PUSH("FlxSprite::replaceColor","org/flixel/FlxSprite.hx",1119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(NewColor,"NewColor");
	HX_STACK_ARG(FetchPositions,"FetchPositions");
{
		HX_STACK_LINE(1120)
		Array< ::org::flixel::FlxPoint > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(1121)
		if ((FetchPositions)){
			HX_STACK_LINE(1122)
			positions = Array_obj< ::org::flixel::FlxPoint >::__new();
		}
		HX_STACK_LINE(1126)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1127)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1128)
		int rows = this->_pixels->nmeGetHeight();		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(1129)
		int columns = this->_pixels->nmeGetWidth();		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(1130)
		while(((row < rows))){
			HX_STACK_LINE(1132)
			column = (int)0;
			HX_STACK_LINE(1133)
			while(((column < columns))){
				HX_STACK_LINE(1135)
				if (((this->_pixels->getPixel32(column,row) == Color))){
					HX_STACK_LINE(1137)
					this->_pixels->setPixel32(column,row,NewColor);
					HX_STACK_LINE(1138)
					if ((FetchPositions)){
						HX_STACK_LINE(1139)
						positions->push(::org::flixel::FlxPoint_obj::__new(column,row));
					}
					HX_STACK_LINE(1142)
					this->dirty = true;
				}
				HX_STACK_LINE(1144)
				(column)++;
			}
			HX_STACK_LINE(1146)
			(row)++;
		}
		HX_STACK_LINE(1149)
		this->updateLayerInfo(true);
		HX_STACK_LINE(1150)
		return positions;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

Void FlxSprite_obj::centerOffsets( hx::Null< bool >  __o_AdjustPosition){
bool AdjustPosition = __o_AdjustPosition.Default(false);
	HX_STACK_PUSH("FlxSprite::centerOffsets","org/flixel/FlxSprite.hx",1104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AdjustPosition,"AdjustPosition");
{
		HX_STACK_LINE(1105)
		this->offset->x = (((this->frameWidth - this->width)) * 0.5);
		HX_STACK_LINE(1106)
		this->offset->y = (((this->frameHeight - this->height)) * 0.5);
		HX_STACK_LINE(1107)
		if ((AdjustPosition)){
			HX_STACK_LINE(1109)
			hx::AddEq(this->x,this->offset->x);
			HX_STACK_LINE(1110)
			hx::AddEq(this->y,this->offset->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

Void FlxSprite_obj::setOriginToCorner( ){
{
		HX_STACK_PUSH("FlxSprite::setOriginToCorner","org/flixel/FlxSprite.hx",1095);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1095)
		this->origin->x = this->origin->y = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,setOriginToCorner,(void))

Void FlxSprite_obj::randomFrame( ){
{
		HX_STACK_PUSH("FlxSprite::randomFrame","org/flixel/FlxSprite.hx",1079);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1080)
		this->_curAnim = null();
		struct _Function_1_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",1081);
				{
					HX_STACK_LINE(1081)
					::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
					HX_STACK_LINE(1081)
					if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
						HX_STACK_LINE(1081)
						hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
					}
					HX_STACK_LINE(1081)
					return ::org::flixel::FlxG_obj::globalSeed;
				}
				return null();
			}
		};
		HX_STACK_LINE(1081)
		this->_curIndex = ::Math_obj::floor((_Function_1_1::Block() * ((Float(this->_pixels->nmeGetWidth()) / Float(this->frameWidth)))));
		HX_STACK_LINE(1083)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1084)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
		HX_STACK_LINE(1088)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,randomFrame,(void))

Void FlxSprite_obj::play( ::String AnimName,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::play","org/flixel/FlxSprite.hx",1028);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnimName,"AnimName");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(1029)
		if (((bool((bool((bool(!(Force)) && bool((this->_curAnim != null())))) && bool((AnimName == this->_curAnim->name)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished)))))))){
			HX_STACK_LINE(1031)
			this->paused = false;
			HX_STACK_LINE(1032)
			return null();
		}
		HX_STACK_LINE(1034)
		this->_curFrame = (int)0;
		HX_STACK_LINE(1035)
		this->_curIndex = (int)0;
		HX_STACK_LINE(1037)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(1038)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
		HX_STACK_LINE(1042)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(1043)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1044)
		int l = this->_animations->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1045)
		while(((i < l))){
			HX_STACK_LINE(1047)
			if (((this->_animations->__get(i)->name == AnimName))){
				HX_STACK_LINE(1049)
				this->_curAnim = this->_animations->__get(i);
				HX_STACK_LINE(1050)
				if (((this->_curAnim->delay <= (int)0))){
					HX_STACK_LINE(1051)
					this->finished = true;
				}
				else{
					HX_STACK_LINE(1055)
					this->finished = false;
				}
				HX_STACK_LINE(1058)
				this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
				HX_STACK_LINE(1060)
				if (((this->_framesData != null()))){
					HX_STACK_LINE(1061)
					this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
				}
				HX_STACK_LINE(1065)
				this->dirty = true;
				HX_STACK_LINE(1066)
				this->paused = false;
				HX_STACK_LINE(1067)
				return null();
			}
			HX_STACK_LINE(1069)
			(i)++;
		}
		HX_STACK_LINE(1071)
		::org::flixel::FlxG_obj::log(((HX_CSTRING("WARNING: No animation called \"") + AnimName) + HX_CSTRING("\"")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,play,(void))

Void FlxSprite_obj::addAnimationCallback( Dynamic AnimationCallback){
{
		HX_STACK_PUSH("FlxSprite::addAnimationCallback","org/flixel/FlxSprite.hx",1017);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AnimationCallback,"AnimationCallback");
		HX_STACK_LINE(1017)
		this->_callback = AnimationCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,addAnimationCallback,(void))

Void FlxSprite_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(30);
bool Looped = __o_Looped.Default(true);
	HX_STACK_PUSH("FlxSprite::addAnimation","org/flixel/FlxSprite.hx",1004);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_ARG(Frames,"Frames");
	HX_STACK_ARG(FrameRate,"FrameRate");
	HX_STACK_ARG(Looped,"Looped");
{
		HX_STACK_LINE(1004)
		this->_animations->push(::org::flixel::system::FlxAnim_obj::__new(Name,Frames,(  (((FrameRate < (int)0))) ? int(-(FrameRate)) : int(FrameRate) ),Looped));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,addAnimation,(void))

Void FlxSprite_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxSprite::drawFrame","org/flixel/FlxSprite.hx",985);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(985)
		this->calcFrame(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

Void FlxSprite_obj::updateAnimation( ){
{
		HX_STACK_PUSH("FlxSprite::updateAnimation","org/flixel/FlxSprite.hx",913);
		HX_STACK_THIS(this);
		HX_STACK_LINE(914)
		if (((this->bakedRotation > (int)0))){
			HX_STACK_LINE(916)
			int oldIndex = this->_curIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
			HX_STACK_LINE(917)
			int angleHelper = ::Math_obj::floor(hx::Mod(this->angle,(int)360));		HX_STACK_VAR(angleHelper,"angleHelper");
			HX_STACK_LINE(925)
			while(((angleHelper < (int)0))){
				HX_STACK_LINE(926)
				hx::AddEq(angleHelper,(int)360);
			}
			HX_STACK_LINE(931)
			this->_curIndex = ::Math_obj::floor(((Float(angleHelper) / Float(this->bakedRotation)) + 0.5));
			HX_STACK_LINE(934)
			if (((this->_framesData != null()))){
				HX_STACK_LINE(935)
				this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
			}
			HX_STACK_LINE(939)
			if (((oldIndex != this->_curIndex))){
				HX_STACK_LINE(940)
				this->dirty = true;
			}
		}
		else{
			HX_STACK_LINE(944)
			if (((bool((bool((bool((this->_curAnim != null())) && bool((this->_curAnim->delay > (int)0)))) && bool(((bool(this->_curAnim->looped) || bool(!(this->finished))))))) && bool(!(this->paused))))){
				HX_STACK_LINE(946)
				hx::AddEq(this->_frameTimer,::org::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(947)
				while(((this->_frameTimer > this->_curAnim->delay))){
					HX_STACK_LINE(949)
					this->_frameTimer = (this->_frameTimer - this->_curAnim->delay);
					HX_STACK_LINE(950)
					if (((::Math_obj::floor(this->_curFrame) == (this->_curAnim->frames->length - (int)1)))){
						HX_STACK_LINE(952)
						if ((this->_curAnim->looped)){
							HX_STACK_LINE(953)
							this->_curFrame = (int)0;
						}
						HX_STACK_LINE(956)
						this->finished = true;
					}
					else{
						HX_STACK_LINE(959)
						(this->_curFrame)++;
					}
					HX_STACK_LINE(962)
					this->_curIndex = this->_curAnim->frames->__get(this->_curFrame);
					HX_STACK_LINE(964)
					if (((this->_framesData != null()))){
						HX_STACK_LINE(965)
						this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
					}
					HX_STACK_LINE(969)
					this->dirty = true;
				}
			}
		}
		HX_STACK_LINE(973)
		if ((this->dirty)){
			HX_STACK_LINE(974)
			this->calcFrame(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateAnimation,(void))

Void FlxSprite_obj::fill( int Color){
{
		HX_STACK_PUSH("FlxSprite::fill","org/flixel/FlxSprite.hx",893);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Color,"Color");
		HX_STACK_LINE(894)
		this->_pixels->fillRect(this->_flashRect2,Color);
		HX_STACK_LINE(895)
		if (((this->_pixels != this->framePixels))){
			HX_STACK_LINE(896)
			this->dirty = true;
		}
		HX_STACK_LINE(901)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(904)
		this->updateLayerInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,fill,(void))

Void FlxSprite_obj::drawLine( Float StartX,Float StartY,Float EndX,Float EndY,int Color,hx::Null< int >  __o_Thickness){
int Thickness = __o_Thickness.Default(1);
	HX_STACK_PUSH("FlxSprite::drawLine","org/flixel/FlxSprite.hx",852);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartX,"StartX");
	HX_STACK_ARG(StartY,"StartY");
	HX_STACK_ARG(EndX,"EndX");
	HX_STACK_ARG(EndY,"EndY");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Thickness,"Thickness");
{
		HX_STACK_LINE(854)
		::neash::display::Graphics gfx = ::org::flixel::FlxG_obj::flashGfx;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(855)
		gfx->clear();
		HX_STACK_LINE(856)
		gfx->moveTo(StartX,StartY);
		HX_STACK_LINE(858)
		Float alphaComponent = (Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(862)
		if (((alphaComponent <= (int)0))){
			HX_STACK_LINE(863)
			alphaComponent = (int)1;
		}
		HX_STACK_LINE(869)
		gfx->lineStyle(Thickness,Color,alphaComponent,null(),null(),null(),null(),null());
		HX_STACK_LINE(871)
		gfx->lineTo(EndX,EndY);
		HX_STACK_LINE(874)
		this->_pixels->draw(::org::flixel::FlxG_obj::flashGfxSprite,null(),null(),null(),null(),null());
		HX_STACK_LINE(875)
		this->dirty = true;
		HX_STACK_LINE(878)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(881)
		this->updateLayerInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,drawLine,(void))

Void FlxSprite_obj::stamp( ::org::flixel::FlxSprite Brush,hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSprite::stamp","org/flixel/FlxSprite.hx",795);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Brush,"Brush");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(796)
		Brush->drawFrame(null());
		HX_STACK_LINE(797)
		::neash::display::BitmapData bitmapData = Brush->framePixels;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(800)
		if (((bool((bool((bool(((bool((Brush->angle == (int)0)) || bool((Brush->bakedRotation > (int)0))))) && bool((Brush->scale->x == (int)1)))) && bool((Brush->scale->y == (int)1)))) && bool((Brush->get_blend() == null()))))){
			HX_STACK_LINE(802)
			this->_flashPoint->x = X;
			HX_STACK_LINE(803)
			this->_flashPoint->y = Y;
			HX_STACK_LINE(804)
			this->_flashRect2->width = bitmapData->nmeGetWidth();
			HX_STACK_LINE(805)
			this->_flashRect2->height = bitmapData->nmeGetHeight();
			HX_STACK_LINE(806)
			this->_pixels->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
			HX_STACK_LINE(807)
			this->_flashRect2->width = this->_pixels->nmeGetWidth();
			HX_STACK_LINE(808)
			this->_flashRect2->height = this->_pixels->nmeGetHeight();
			HX_STACK_LINE(812)
			return null();
		}
		HX_STACK_LINE(816)
		this->_matrix->identity();
		HX_STACK_LINE(817)
		this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
		HX_STACK_LINE(818)
		this->_matrix->scale(Brush->scale->x,Brush->scale->y);
		HX_STACK_LINE(819)
		if (((Brush->angle != (int)0))){
			HX_STACK_LINE(820)
			this->_matrix->rotate((Brush->angle * 0.017453293));
		}
		HX_STACK_LINE(823)
		this->_matrix->translate((X + Brush->origin->x),(Y + Brush->origin->y));
		HX_STACK_LINE(827)
		::String brushBlend = Brush->_blendString;		HX_STACK_VAR(brushBlend,"brushBlend");
		HX_STACK_LINE(828)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(830)
		this->_pixels->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
		HX_STACK_LINE(834)
		this->updateLayerInfo(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

Void FlxSprite_obj::draw( ){
{
		HX_STACK_PUSH("FlxSprite::draw","org/flixel/FlxSprite.hx",607);
		HX_STACK_THIS(this);
		HX_STACK_LINE(611)
		if (((bool((this->_layer == null())) || bool((this->_layer->onStage == false))))){
			HX_STACK_LINE(612)
			return null();
		}
		HX_STACK_LINE(617)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(619)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(620)
			if ((this->_flicker)){
				HX_STACK_LINE(621)
				return null();
			}
		}
		HX_STACK_LINE(626)
		if ((this->dirty)){
			HX_STACK_LINE(627)
			this->calcFrame(null());
		}
		HX_STACK_LINE(631)
		if (((this->cameras == null()))){
			HX_STACK_LINE(632)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(635)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(636)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(637)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(640)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(641)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(643)
		Float radians;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(644)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(645)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(648)
		while(((i < l))){
			HX_STACK_LINE(650)
			camera = this->cameras->__get((i)++);
			struct _Function_2_1{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxSprite_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",652);
					{
						HX_STACK_LINE(652)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(652)
						if (((Camera == null()))){
							HX_STACK_LINE(652)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(652)
						{
							HX_STACK_LINE(652)
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(652)
							if (((point == null()))){
								HX_STACK_LINE(652)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(652)
							if (((Camera1 == null()))){
								HX_STACK_LINE(652)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(652)
							point->x = (__this->x - ::Math_obj::floor((Camera1->scroll->x * __this->scrollFactor->x)));
							HX_STACK_LINE(652)
							point->y = (__this->y - ::Math_obj::floor((Camera1->scroll->y * __this->scrollFactor->y)));
							HX_STACK_LINE(652)
							hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(652)
							hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(652)
							point;
						}
						HX_STACK_LINE(652)
						__this->_point->x = (__this->_point->x - __this->offset->x);
						HX_STACK_LINE(652)
						__this->_point->y = (__this->_point->y - __this->offset->y);
						HX_STACK_LINE(652)
						bool result = false;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(652)
						if (((bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
							HX_STACK_LINE(652)
							result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera->height)));
						}
						else{
							HX_STACK_LINE(652)
							Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
							HX_STACK_LINE(652)
							Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
							HX_STACK_LINE(652)
							Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
							HX_STACK_LINE(652)
							Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
							HX_STACK_LINE(652)
							Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(652)
							hx::AddEq(__this->_point->x,halfWidth);
							HX_STACK_LINE(652)
							hx::AddEq(__this->_point->y,halfHeight);
							HX_STACK_LINE(652)
							result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera->height)));
						}
						HX_STACK_LINE(652)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(652)
			if (((bool((bool(!(_Function_2_1::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(653)
				continue;
			}
			HX_STACK_LINE(658)
			currDrawData = this->_layer->drawData->__get(camera->ID);
			HX_STACK_LINE(659)
			currIndex = this->_layer->positionData->__get(camera->ID);
			HX_STACK_LINE(661)
			this->_point->x = ((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x);
			HX_STACK_LINE(662)
			this->_point->y = ((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y);
			HX_STACK_LINE(664)
			this->_point->x = (this->_point->x + this->origin->x);
			HX_STACK_LINE(665)
			this->_point->y = (this->_point->y + this->origin->y);
			HX_STACK_LINE(673)
			if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
				HX_STACK_LINE(681)
				currDrawData[(currIndex)++] = this->_point->x;
				HX_STACK_LINE(682)
				currDrawData[(currIndex)++] = this->_point->y;
				HX_STACK_LINE(684)
				currDrawData[(currIndex)++] = this->_frameID;
				HX_STACK_LINE(687)
				if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
					HX_STACK_LINE(689)
					currDrawData[(currIndex)++] = (int)-1;
					HX_STACK_LINE(690)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(691)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(692)
					currDrawData[(currIndex)++] = (int)1;
				}
				else{
					HX_STACK_LINE(696)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(697)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(698)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(699)
					currDrawData[(currIndex)++] = (int)1;
				}
				HX_STACK_LINE(702)
				if (((bool(this->_layer->isColored) || bool((camera->color < (int)16777215))))){
					HX_STACK_LINE(703)
					if (((camera->color < (int)16777215))){
						HX_STACK_LINE(706)
						currDrawData[(currIndex)++] = (this->_red * camera->red);
						HX_STACK_LINE(707)
						currDrawData[(currIndex)++] = (this->_green * camera->green);
						HX_STACK_LINE(708)
						currDrawData[(currIndex)++] = (this->_blue * camera->blue);
					}
					else{
						HX_STACK_LINE(712)
						currDrawData[(currIndex)++] = this->_red;
						HX_STACK_LINE(713)
						currDrawData[(currIndex)++] = this->_green;
						HX_STACK_LINE(714)
						currDrawData[(currIndex)++] = this->_blue;
					}
				}
				HX_STACK_LINE(718)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(719)
				this->_layer->positionData[camera->ID] = currIndex;
			}
			else{
				HX_STACK_LINE(735)
				radians = (-(this->angle) * 0.017453293);
				HX_STACK_LINE(736)
				cos = ::Math_obj::cos(radians);
				HX_STACK_LINE(737)
				sin = ::Math_obj::sin(radians);
				HX_STACK_LINE(739)
				currDrawData[(currIndex)++] = this->_point->x;
				HX_STACK_LINE(740)
				currDrawData[(currIndex)++] = this->_point->y;
				HX_STACK_LINE(742)
				currDrawData[(currIndex)++] = this->_frameID;
				HX_STACK_LINE(744)
				if (((bool((this->flipped != (int)0)) && bool((this->facing == (int)1))))){
					HX_STACK_LINE(746)
					currDrawData[(currIndex)++] = (-(cos) * this->scale->x);
					HX_STACK_LINE(747)
					currDrawData[(currIndex)++] = (sin * this->scale->y);
					HX_STACK_LINE(748)
					currDrawData[(currIndex)++] = (-(sin) * this->scale->x);
					HX_STACK_LINE(749)
					currDrawData[(currIndex)++] = (cos * this->scale->y);
				}
				else{
					HX_STACK_LINE(753)
					currDrawData[(currIndex)++] = (cos * this->scale->x);
					HX_STACK_LINE(754)
					currDrawData[(currIndex)++] = (sin * this->scale->y);
					HX_STACK_LINE(755)
					currDrawData[(currIndex)++] = (-(sin) * this->scale->x);
					HX_STACK_LINE(756)
					currDrawData[(currIndex)++] = (cos * this->scale->y);
				}
				HX_STACK_LINE(759)
				if (((bool(this->_layer->isColored) || bool((camera->color < (int)16777215))))){
					HX_STACK_LINE(760)
					if (((camera->color < (int)16777215))){
						HX_STACK_LINE(763)
						currDrawData[(currIndex)++] = (this->_red * camera->red);
						HX_STACK_LINE(764)
						currDrawData[(currIndex)++] = (this->_green * camera->green);
						HX_STACK_LINE(765)
						currDrawData[(currIndex)++] = (this->_blue * camera->blue);
					}
					else{
						HX_STACK_LINE(769)
						currDrawData[(currIndex)++] = this->_red;
						HX_STACK_LINE(770)
						currDrawData[(currIndex)++] = this->_green;
						HX_STACK_LINE(771)
						currDrawData[(currIndex)++] = this->_blue;
					}
				}
				HX_STACK_LINE(775)
				currDrawData[(currIndex)++] = this->alpha;
				HX_STACK_LINE(776)
				this->_layer->positionData[camera->ID] = currIndex;
			}
			HX_STACK_LINE(779)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			HX_STACK_LINE(780)
			if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
				HX_STACK_LINE(781)
				this->drawDebug(camera);
			}
		}
	}
return null();
}


Void FlxSprite_obj::postUpdate( ){
{
		HX_STACK_PUSH("FlxSprite::postUpdate","org/flixel/FlxSprite.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_LINE(599)
		this->super::postUpdate();
		HX_STACK_LINE(600)
		this->updateAnimation();
	}
return null();
}


Void FlxSprite_obj::resetHelpers( ){
{
		HX_STACK_PUSH("FlxSprite::resetHelpers","org/flixel/FlxSprite.hx",555);
		HX_STACK_THIS(this);
		HX_STACK_LINE(556)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(557)
		this->_flashRect->y = (int)0;
		HX_STACK_LINE(558)
		this->_flashRect->width = this->frameWidth;
		HX_STACK_LINE(559)
		this->_flashRect->height = this->frameHeight;
		HX_STACK_LINE(560)
		this->_flashRect2->x = (int)0;
		HX_STACK_LINE(561)
		this->_flashRect2->y = (int)0;
		HX_STACK_LINE(562)
		this->_flashRect2->width = this->_pixels->nmeGetWidth();
		HX_STACK_LINE(563)
		this->_flashRect2->height = this->_pixels->nmeGetHeight();
		HX_STACK_LINE(565)
		{
			HX_STACK_LINE(565)
			::org::flixel::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(565)
			_this->x = (this->frameWidth * 0.5);
			HX_STACK_LINE(565)
			_this->y = (this->frameHeight * 0.5);
			HX_STACK_LINE(565)
			_this;
		}
		HX_STACK_LINE(577)
		this->frames = ::Math_obj::floor((Float(((Float(this->_flashRect2->width) / Float(((this->_flashRect->width + (int)1)))) * this->_flashRect2->height)) / Float(((this->_flashRect->height + (int)1)))));
		HX_STACK_LINE(578)
		if (((this->frames == (int)0))){
			HX_STACK_LINE(578)
			this->frames = (int)1;
		}
		HX_STACK_LINE(579)
		if (((this->flipped > (int)0))){
			HX_STACK_LINE(580)
			hx::MultEq(this->frames,(int)2);
		}
		HX_STACK_LINE(584)
		this->_curIndex = (int)0;
		HX_STACK_LINE(586)
		if (((this->_framesData != null()))){
			HX_STACK_LINE(587)
			this->_frameID = this->_framesData->frameIDs->__get(this->_curIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

::org::flixel::FlxSprite FlxSprite_obj::makeGraphic( int Width,int Height,Dynamic Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::makeGraphic","org/flixel/FlxSprite.hx",526);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(528)
		if (((Color == null()))){
			HX_STACK_LINE(529)
			Color = (int)-1;
		}
		HX_STACK_LINE(538)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(539)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap(Width,Height,Color,Unique,Key);
		HX_STACK_LINE(541)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(542)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(544)
		this->width = this->frameWidth = this->_pixels->nmeGetWidth();
		HX_STACK_LINE(545)
		this->height = this->frameHeight = this->_pixels->nmeGetHeight();
		HX_STACK_LINE(546)
		this->resetHelpers();
		HX_STACK_LINE(547)
		this->updateLayerInfo(null());
		HX_STACK_LINE(548)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer,::String Key){
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_PUSH("FlxSprite::loadRotatedGraphic","org/flixel/FlxSprite.hx",381);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Rotations,"Rotations");
	HX_STACK_ARG(Frame,"Frame");
	HX_STACK_ARG(AntiAliasing,"AntiAliasing");
	HX_STACK_ARG(AutoBuffer,"AutoBuffer");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(382)
		Rotations = (  (((Rotations < (int)0))) ? int(-(Rotations)) : int(Rotations) );
		HX_STACK_LINE(385)
		int rows = ::Math_obj::floor(::Math_obj::sqrt(Rotations));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(386)
		::neash::display::BitmapData brush = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,false,Key,null(),null());		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(387)
		if (((Frame >= (int)0))){
			HX_STACK_LINE(390)
			::neash::display::BitmapData full = brush;		HX_STACK_VAR(full,"full");
			HX_STACK_LINE(391)
			brush = ::neash::display::BitmapData_obj::__new(full->nmeGetHeight(),full->nmeGetHeight(),null(),null(),null());
			HX_STACK_LINE(392)
			int rx = (Frame * brush->nmeGetWidth());		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(393)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(394)
			int fw = full->nmeGetWidth();		HX_STACK_VAR(fw,"fw");
			HX_STACK_LINE(395)
			if (((rx >= fw))){
				HX_STACK_LINE(397)
				ry = (::Math_obj::floor((Float(rx) / Float(fw))) * brush->nmeGetHeight());
				HX_STACK_LINE(398)
				hx::ModEq(rx,fw);
			}
			HX_STACK_LINE(400)
			this->_flashRect->x = rx;
			HX_STACK_LINE(401)
			this->_flashRect->y = ry;
			HX_STACK_LINE(402)
			this->_flashRect->width = brush->nmeGetWidth();
			HX_STACK_LINE(403)
			this->_flashRect->height = brush->nmeGetHeight();
			HX_STACK_LINE(404)
			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
		}
		HX_STACK_LINE(407)
		int max = brush->nmeGetWidth();		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(408)
		if (((brush->nmeGetHeight() > max))){
			HX_STACK_LINE(409)
			max = brush->nmeGetHeight();
		}
		HX_STACK_LINE(413)
		if ((AutoBuffer)){
			HX_STACK_LINE(414)
			max = ::Math_obj::floor((max * 1.5));
		}
		struct _Function_1_1{
			inline static int Block( int &Rotations,int &rows){
				HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",418);
				{
					HX_STACK_LINE(418)
					Float Value = (Float(Rotations) / Float(rows));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(418)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					struct _Function_2_1{
						inline static int Block( int &number,Float &Value){
							HX_STACK_PUSH("*::closure","org/flixel/FlxSprite.hx",418);
							{
								HX_STACK_LINE(418)
								return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
							}
							return null();
						}
					};
					HX_STACK_LINE(418)
					return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
				}
				return null();
			}
		};
		HX_STACK_LINE(418)
		int columns = _Function_1_1::Block(Rotations,rows);		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(419)
		this->width = (max * columns);
		HX_STACK_LINE(420)
		this->height = (max * rows);
		HX_STACK_LINE(421)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(422)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(423)
			key = Graphic;
		}
		else{
			HX_STACK_LINE(426)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(427)
				key = ::Type_obj::getClassName(Graphic);
			}
			else{
				HX_STACK_LINE(430)
				if (((bool(::Std_obj::is(Graphic,hx::ClassOf< ::neash::display::BitmapData >())) && bool((Key != null()))))){
					HX_STACK_LINE(431)
					key = Key;
				}
				else{
					HX_STACK_LINE(435)
					return null();
				}
			}
		}
		HX_STACK_LINE(441)
		hx::AddEq(key,(((((((HX_CSTRING(":") + Frame) + HX_CSTRING(":")) + this->width) + HX_CSTRING("x")) + this->height) + HX_CSTRING(":")) + Rotations));
		HX_STACK_LINE(443)
		bool skipGen = ::org::flixel::FlxG_obj::checkBitmapCache(key);		HX_STACK_VAR(skipGen,"skipGen");
		HX_STACK_LINE(448)
		this->_pixels = ::org::flixel::FlxG_obj::createBitmap((::Math_obj::floor(this->width) + columns),(::Math_obj::floor(this->height) + rows),(int)0,true,key);
		HX_STACK_LINE(454)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(455)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(458)
		this->width = this->frameWidth = this->_pixels->nmeGetWidth();
		HX_STACK_LINE(459)
		this->height = this->frameHeight = this->_pixels->nmeGetHeight();
		HX_STACK_LINE(460)
		this->bakedRotation = (Float((int)360) / Float(Rotations));
		HX_STACK_LINE(463)
		if ((!(skipGen))){
			HX_STACK_LINE(465)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(466)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(467)
			Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
			HX_STACK_LINE(468)
			int halfBrushWidth = ::Math_obj::floor((brush->nmeGetWidth() * 0.5));		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
			HX_STACK_LINE(469)
			int halfBrushHeight = ::Math_obj::floor((brush->nmeGetHeight() * 0.5));		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
			HX_STACK_LINE(470)
			int midpointX = ::Math_obj::floor((max * 0.5));		HX_STACK_VAR(midpointX,"midpointX");
			HX_STACK_LINE(471)
			int midpointY = ::Math_obj::floor((max * 0.5));		HX_STACK_VAR(midpointY,"midpointY");
			HX_STACK_LINE(472)
			while(((row < rows))){
				HX_STACK_LINE(474)
				column = (int)0;
				HX_STACK_LINE(475)
				while(((column < columns))){
					HX_STACK_LINE(477)
					this->_matrix->identity();
					HX_STACK_LINE(478)
					this->_matrix->translate(-(halfBrushWidth),-(halfBrushHeight));
					HX_STACK_LINE(479)
					this->_matrix->rotate((bakedAngle * 0.017453293));
					HX_STACK_LINE(483)
					this->_matrix->translate((((max * column) + midpointX) + column),(midpointY + row));
					HX_STACK_LINE(485)
					hx::AddEq(bakedAngle,this->bakedRotation);
					HX_STACK_LINE(486)
					this->_pixels->draw(brush,this->_matrix,null(),null(),null(),AntiAliasing);
					HX_STACK_LINE(487)
					(column)++;
				}
				HX_STACK_LINE(489)
				hx::AddEq(midpointY,max);
				HX_STACK_LINE(490)
				(row)++;
			}
		}
		HX_STACK_LINE(493)
		this->frameWidth = this->frameHeight = max;
		HX_STACK_LINE(494)
		this->width = this->height = max;
		HX_STACK_LINE(495)
		this->resetHelpers();
		HX_STACK_LINE(496)
		if ((AutoBuffer)){
			HX_STACK_LINE(498)
			this->width = brush->nmeGetWidth();
			HX_STACK_LINE(499)
			this->height = brush->nmeGetHeight();
			HX_STACK_LINE(500)
			this->centerOffsets(null());
		}
		HX_STACK_LINE(504)
		this->setAntialiasing(AntiAliasing);
		HX_STACK_LINE(507)
		this->updateLayerInfo(null());
		HX_STACK_LINE(509)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

::org::flixel::FlxSprite FlxSprite_obj::loadGraphic( Dynamic Graphic,hx::Null< bool >  __o_Animated,hx::Null< bool >  __o_Reverse,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< bool >  __o_Unique,::String Key){
bool Animated = __o_Animated.Default(false);
bool Reverse = __o_Reverse.Default(false);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxSprite::loadGraphic","org/flixel/FlxSprite.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Animated,"Animated");
	HX_STACK_ARG(Reverse,"Reverse");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(301)
		Width = (  (((Width < (int)0))) ? int(-(Width)) : int(Width) );
		HX_STACK_LINE(302)
		Height = (  (((Height < (int)0))) ? int(-(Height)) : int(Height) );
		HX_STACK_LINE(304)
		this->bakedRotation = (int)0;
		HX_STACK_LINE(306)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,null(),null());
		HX_STACK_LINE(307)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(309)
		this->_calculatedPixelsIndex = (int)-1;
		HX_STACK_LINE(314)
		if ((Reverse)){
			HX_STACK_LINE(315)
			this->flipped = (int(this->_pixels->nmeGetWidth()) >> int((int)1));
		}
		else{
			HX_STACK_LINE(319)
			this->flipped = (int)0;
		}
		HX_STACK_LINE(322)
		if (((Width == (int)0))){
			HX_STACK_LINE(323)
			if ((Animated)){
				HX_STACK_LINE(325)
				Width = this->_pixels->nmeGetHeight();
			}
			else{
				HX_STACK_LINE(328)
				if (((this->flipped > (int)0))){
					HX_STACK_LINE(329)
					Width = this->_pixels->nmeGetWidth();
				}
				else{
					HX_STACK_LINE(337)
					Width = this->_pixels->nmeGetWidth();
				}
			}
		}
		HX_STACK_LINE(341)
		this->width = this->frameWidth = Width;
		HX_STACK_LINE(342)
		if (((Height == (int)0))){
			HX_STACK_LINE(343)
			if ((Animated)){
				HX_STACK_LINE(345)
				Height = ::Math_obj::floor(this->width);
			}
			else{
				HX_STACK_LINE(349)
				Height = this->_pixels->nmeGetHeight();
			}
		}
		HX_STACK_LINE(355)
		if (((bool((Key != null())) && bool(((bool((Width != (int)0)) || bool((Height != (int)0)))))))){
			HX_STACK_LINE(356)
			hx::AddEq(Key,(((HX_CSTRING("FrameSize:") + Width) + HX_CSTRING("_")) + Height));
		}
		HX_STACK_LINE(359)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(Graphic,false,Unique,Key,Width,Height);
		HX_STACK_LINE(360)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(363)
		this->height = this->frameHeight = Height;
		HX_STACK_LINE(364)
		this->resetHelpers();
		HX_STACK_LINE(365)
		this->updateLayerInfo(null());
		HX_STACK_LINE(366)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxSprite_obj,loadGraphic,return )

Void FlxSprite_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSprite::destroy","org/flixel/FlxSprite.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_LINE(248)
		if (((this->_animations != null()))){
			HX_STACK_LINE(250)
			::org::flixel::system::FlxAnim a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(251)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(252)
			int l = this->_animations->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(253)
			while(((i < l))){
				HX_STACK_LINE(255)
				a = this->_animations->__get((i)++);
				HX_STACK_LINE(256)
				if (((a != null()))){
					HX_STACK_LINE(257)
					a->destroy();
				}
			}
			HX_STACK_LINE(261)
			this->_animations = null();
		}
		HX_STACK_LINE(264)
		this->_flashPoint = null();
		HX_STACK_LINE(265)
		this->_flashRect = null();
		HX_STACK_LINE(266)
		this->_flashRect2 = null();
		HX_STACK_LINE(267)
		this->_flashPointZero = null();
		HX_STACK_LINE(268)
		this->offset = null();
		HX_STACK_LINE(269)
		this->origin = null();
		HX_STACK_LINE(270)
		this->scale = null();
		HX_STACK_LINE(271)
		this->_curAnim = null();
		HX_STACK_LINE(272)
		this->_matrix = null();
		HX_STACK_LINE(273)
		this->_callback = null();
		HX_STACK_LINE(274)
		if (((this->framePixels != null()))){
			HX_STACK_LINE(275)
			this->framePixels->dispose();
		}
		HX_STACK_LINE(278)
		this->framePixels = null();
		HX_STACK_LINE(282)
		this->_blend = null();
		HX_STACK_LINE(284)
		this->super::destroy();
	}
return null();
}



FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(simpleRender,"simpleRender");
	HX_MARK_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_frameID,"_frameID");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_curFrame,"_curFrame");
	HX_MARK_MEMBER_NAME(_curAnim,"_curAnim");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_calculatedPixelsFacing,"_calculatedPixelsFacing");
	HX_MARK_MEMBER_NAME(_calculatedPixelsIndex,"_calculatedPixelsIndex");
	HX_MARK_MEMBER_NAME(_blendString,"_blendString");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(facing,"facing");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(simpleRender,"simpleRender");
	HX_VISIT_MEMBER_NAME(bakedRotation,"bakedRotation");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_frameID,"_frameID");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_curFrame,"_curFrame");
	HX_VISIT_MEMBER_NAME(_curAnim,"_curAnim");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_calculatedPixelsFacing,"_calculatedPixelsFacing");
	HX_VISIT_MEMBER_NAME(_calculatedPixelsIndex,"_calculatedPixelsIndex");
	HX_VISIT_MEMBER_NAME(_blendString,"_blendString");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return inCallProp ? get_blend() : blend; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp ? getFrame() : frame; }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp ? getColor() : color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? getPixels() : pixels; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"facing") ) { return facing; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"_frameID") ) { return _frameID; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { return _curAnim; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFacing") ) { return setFacing_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { return _curFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomFrame") ) { return randomFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return makeGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return _flashRect2; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		if (HX_FIELD_EQ(inName,"_animations") ) { return _animations; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { return framePixels; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { return inCallProp ? getSimpleRender() : simpleRender; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return replaceColor_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"_blendString") ) { return _blendString; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { return bakedRotation; }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return centerOffsets_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScreenSprite") ) { return onScreenSprite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"getSimpleRender") ) { return getSimpleRender_dyn(); }
		if (HX_FIELD_EQ(inName,"setAntialiasing") ) { return setAntialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return updateAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return _flashPointZero; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateLayerProps") ) { return updateLayerProps_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setOriginToCorner") ) { return setOriginToCorner_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"simpleRenderSprite") ) { return simpleRenderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return pixelsOverlapPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return loadRotatedGraphic_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addAnimationCallback") ) { return addAnimationCallback_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsIndex") ) { return _calculatedPixelsIndex; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsFacing") ) { return _calculatedPixelsFacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::neash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return setAlpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp) return setFrame(inValue);frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return setColor(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp) return setPixels(inValue);pixels=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< ::neash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp) return setFacing(inValue);facing=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_frameID") ) { _frameID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curAnim") ) { _curAnim=inValue.Cast< ::org::flixel::system::FlxAnim >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { _curFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast< Array< ::org::flixel::system::FlxAnim > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { simpleRender=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return setAntialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blendString") ) { _blendString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bakedRotation") ) { bakedRotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::neash::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsIndex") ) { _calculatedPixelsIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_calculatedPixelsFacing") ) { _calculatedPixelsFacing=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("simpleRender"));
	outFields->push(HX_CSTRING("bakedRotation"));
	outFields->push(HX_CSTRING("flipped"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("_blue"));
	outFields->push(HX_CSTRING("_green"));
	outFields->push(HX_CSTRING("_red"));
	outFields->push(HX_CSTRING("_frameID"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_colorTransform"));
	outFields->push(HX_CSTRING("_flashPointZero"));
	outFields->push(HX_CSTRING("_flashRect2"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_pixels"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_frameTimer"));
	outFields->push(HX_CSTRING("_curIndex"));
	outFields->push(HX_CSTRING("_curFrame"));
	outFields->push(HX_CSTRING("_curAnim"));
	outFields->push(HX_CSTRING("_animations"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("framePixels"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("frameHeight"));
	outFields->push(HX_CSTRING("frameWidth"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_calculatedPixelsFacing"));
	outFields->push(HX_CSTRING("_calculatedPixelsIndex"));
	outFields->push(HX_CSTRING("_blendString"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("facing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("updateLayerProps"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("blend"),
	HX_CSTRING("simpleRenderSprite"),
	HX_CSTRING("getSimpleRender"),
	HX_CSTRING("simpleRender"),
	HX_CSTRING("bakedRotation"),
	HX_CSTRING("flipped"),
	HX_CSTRING("setAntialiasing"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("pixelsOverlapPoint"),
	HX_CSTRING("onScreenSprite"),
	HX_CSTRING("onScreen"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("alpha"),
	HX_CSTRING("setFacing"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("pixels"),
	HX_CSTRING("replaceColor"),
	HX_CSTRING("centerOffsets"),
	HX_CSTRING("setOriginToCorner"),
	HX_CSTRING("randomFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("addAnimationCallback"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("drawFrame"),
	HX_CSTRING("updateAnimation"),
	HX_CSTRING("fill"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("stamp"),
	HX_CSTRING("draw"),
	HX_CSTRING("postUpdate"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("makeGraphic"),
	HX_CSTRING("loadRotatedGraphic"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_blue"),
	HX_CSTRING("_green"),
	HX_CSTRING("_red"),
	HX_CSTRING("_frameID"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_colorTransform"),
	HX_CSTRING("_flashPointZero"),
	HX_CSTRING("_flashRect2"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("_color"),
	HX_CSTRING("_callback"),
	HX_CSTRING("_frameTimer"),
	HX_CSTRING("_curIndex"),
	HX_CSTRING("_curFrame"),
	HX_CSTRING("_curAnim"),
	HX_CSTRING("_animations"),
	HX_CSTRING("dirty"),
	HX_CSTRING("framePixels"),
	HX_CSTRING("frames"),
	HX_CSTRING("frameHeight"),
	HX_CSTRING("frameWidth"),
	HX_CSTRING("paused"),
	HX_CSTRING("finished"),
	HX_CSTRING("_calculatedPixelsFacing"),
	HX_CSTRING("_calculatedPixelsIndex"),
	HX_CSTRING("_blendString"),
	HX_CSTRING("_blend"),
	HX_CSTRING("scale"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("frame"),
	HX_CSTRING("color"),
	HX_CSTRING("facing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::__mClass,"__mClass");
};

Class FlxSprite_obj::__mClass;

void FlxSprite_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxSprite"), hx::TCanCast< FlxSprite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSprite_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
