#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_Tilesheet
#include <neash/display/Tilesheet.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_RectanglePointPair
#include <org/flixel/system/layer/RectanglePointPair.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::neash::display::Tilesheet tileSheet)
{
HX_STACK_PUSH("TileSheetData::new","org/flixel/system/layer/TileSheetData.hx",104);
{
	HX_STACK_LINE(105)
	this->tileSheet = tileSheet;
	HX_STACK_LINE(106)
	this->pairsData = Array_obj< ::org::flixel::system::layer::RectanglePointPair >::__new();
	HX_STACK_LINE(107)
	this->flxSpriteFrames = Array_obj< ::org::flixel::system::layer::FlxSpriteFrames >::__new();
}
;
	return null();
}

TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::neash::display::Tilesheet tileSheet)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetData::destroy","org/flixel/system/layer/TileSheetData.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_LINE(271)
		this->tileSheet->nmeBitmap = null();
		HX_STACK_LINE(272)
		this->tileSheet = null();
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::RectanglePointPair > _g1 = this->pairsData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(274)
			while(((_g < _g1->length))){
				HX_STACK_LINE(274)
				::org::flixel::system::layer::RectanglePointPair pair = _g1->__get(_g);		HX_STACK_VAR(pair,"pair");
				HX_STACK_LINE(274)
				++(_g);
				HX_STACK_LINE(276)
				pair->destroy();
			}
		}
		HX_STACK_LINE(278)
		this->pairsData = null();
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::FlxSpriteFrames > _g1 = this->flxSpriteFrames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			while(((_g < _g1->length))){
				HX_STACK_LINE(280)
				::org::flixel::system::layer::FlxSpriteFrames spriteData = _g1->__get(_g);		HX_STACK_VAR(spriteData,"spriteData");
				HX_STACK_LINE(280)
				++(_g);
				HX_STACK_LINE(282)
				spriteData->destroy();
			}
		}
		HX_STACK_LINE(284)
		this->flxSpriteFrames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

int TileSheetData_obj::getTileRectID( ::neash::geom::Rectangle rect,::neash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::getTileRectID","org/flixel/system/layer/TileSheetData.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(249)
	::org::flixel::system::layer::RectanglePointPair pair;		HX_STACK_VAR(pair,"pair");
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->pairsData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		while(((_g1 < _g))){
			HX_STACK_LINE(250)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(252)
			pair = this->pairsData->__get(i);
			HX_STACK_LINE(253)
			if ((pair->rect->equals(rect))){
				HX_STACK_LINE(254)
				if (((bool((bool((pair->point != null())) && bool((point != null())))) && bool(pair->point->equals(point))))){
					HX_STACK_LINE(256)
					return i;
				}
				else{
					HX_STACK_LINE(259)
					if (((bool((pair->point == null())) && bool((point == null()))))){
						HX_STACK_LINE(260)
						return i;
					}
				}
			}
		}
	}
	HX_STACK_LINE(266)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getTileRectID,return )

bool TileSheetData_obj::containsTileRect( ::neash::geom::Rectangle rect,::neash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::containsTileRect","org/flixel/system/layer/TileSheetData.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::RectanglePointPair > _g1 = this->pairsData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		while(((_g < _g1->length))){
			HX_STACK_LINE(226)
			::org::flixel::system::layer::RectanglePointPair pair = _g1->__get(_g);		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(228)
			if ((pair->rect->equals(rect))){
				HX_STACK_LINE(229)
				if (((bool((bool((pair->point != null())) && bool((point != null())))) && bool(pair->point->equals(point))))){
					HX_STACK_LINE(231)
					return true;
				}
				else{
					HX_STACK_LINE(234)
					if (((bool((pair->point == null())) && bool((point == null()))))){
						HX_STACK_LINE(235)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(241)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,containsTileRect,return )

int TileSheetData_obj::addTileRect( ::neash::geom::Rectangle rect,::neash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addTileRect","org/flixel/system/layer/TileSheetData.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(211)
	if ((this->containsTileRect(rect,point))){
		HX_STACK_LINE(212)
		return this->getTileRectID(rect,point);
	}
	HX_STACK_LINE(216)
	this->tileSheet->addTileRect(rect,point);
	HX_STACK_LINE(217)
	this->pairsData->push(::org::flixel::system::layer::RectanglePointPair_obj::__new(rect,point));
	HX_STACK_LINE(218)
	return (this->pairsData->length - (int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

int TileSheetData_obj::getIDforSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::getIDforSpriteFrameData","org/flixel/system/layer/TileSheetData.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(192)
	::org::flixel::system::layer::FlxSpriteFrames spriteData;		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->flxSpriteFrames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		while(((_g1 < _g))){
			HX_STACK_LINE(193)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(195)
			spriteData = this->flxSpriteFrames->__get(i);
			HX_STACK_LINE(196)
			if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((spriteData->width == width)) && bool((spriteData->height == height)))) && bool((spriteData->startX == startX)))) && bool((spriteData->startY == startY)))) && bool((spriteData->endX == endX)))) && bool((spriteData->endY == endY)))) && bool((spriteData->xSpacing == xSpacing)))) && bool((spriteData->ySpacing == ySpacing)))) && bool((spriteData->pointX == pointX)))) && bool((spriteData->pointY == pointY))))){
				HX_STACK_LINE(197)
				return i;
			}
		}
	}
	HX_STACK_LINE(202)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getIDforSpriteFrameData,return )

bool TileSheetData_obj::containsSpriteFrameData( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::containsSpriteFrameData","org/flixel/system/layer/TileSheetData.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::FlxSpriteFrames > _g1 = this->flxSpriteFrames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		while(((_g < _g1->length))){
			HX_STACK_LINE(179)
			::org::flixel::system::layer::FlxSpriteFrames spriteData = _g1->__get(_g);		HX_STACK_VAR(spriteData,"spriteData");
			HX_STACK_LINE(179)
			++(_g);
			HX_STACK_LINE(181)
			if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((spriteData->width == width)) && bool((spriteData->height == height)))) && bool((spriteData->startX == startX)))) && bool((spriteData->startY == startY)))) && bool((spriteData->endX == endX)))) && bool((spriteData->endY == endY)))) && bool((spriteData->xSpacing == xSpacing)))) && bool((spriteData->ySpacing == ySpacing)))) && bool((spriteData->pointX == pointX)))) && bool((spriteData->pointY == pointY))))){
				HX_STACK_LINE(182)
				return true;
			}
		}
	}
	HX_STACK_LINE(187)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteFrameData,return )

::org::flixel::system::layer::FlxSpriteFrames TileSheetData_obj::addSpriteFramesData( int width,int height,::neash::geom::Point origin,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_endX,hx::Null< int >  __o_endY,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int endX = __o_endX.Default(0);
int endY = __o_endY.Default(0);
int xSpacing = __o_xSpacing.Default(0);
int ySpacing = __o_ySpacing.Default(0);
	HX_STACK_PUSH("TileSheetData::addSpriteFramesData","org/flixel/system/layer/TileSheetData.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
{
		HX_STACK_LINE(118)
		int bitmapWidth = this->tileSheet->nmeBitmap->nmeGetWidth();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(119)
		int bitmapHeight = this->tileSheet->nmeBitmap->nmeGetHeight();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(121)
		if (((endX == (int)0))){
			HX_STACK_LINE(122)
			endX = bitmapWidth;
		}
		HX_STACK_LINE(125)
		if (((endY == (int)0))){
			HX_STACK_LINE(126)
			endY = bitmapHeight;
		}
		HX_STACK_LINE(130)
		Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
		HX_STACK_LINE(131)
		Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
		HX_STACK_LINE(133)
		if (((origin != null()))){
			HX_STACK_LINE(135)
			pointX = origin->x;
			HX_STACK_LINE(136)
			pointY = origin->y;
		}
		HX_STACK_LINE(139)
		if ((this->containsSpriteFrameData(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY))){
			HX_STACK_LINE(141)
			int id = this->getIDforSpriteFrameData(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(142)
			return this->flxSpriteFrames->__get(id);
		}
		HX_STACK_LINE(145)
		int numRows = ::Math_obj::floor((Float(((endY - startY))) / Float(((height + ySpacing)))));		HX_STACK_VAR(numRows,"numRows");
		HX_STACK_LINE(146)
		int numCols = ::Math_obj::floor((Float(((endX - startX))) / Float(((width + xSpacing)))));		HX_STACK_VAR(numCols,"numCols");
		HX_STACK_LINE(148)
		::neash::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
		HX_STACK_LINE(149)
		if (((origin == null()))){
			HX_STACK_LINE(150)
			tempPoint = ::neash::geom::Point_obj::__new(pointX,pointY);
		}
		HX_STACK_LINE(154)
		::org::flixel::system::layer::FlxSpriteFrames spriteData = ::org::flixel::system::layer::FlxSpriteFrames_obj::__new(width,height,startX,startY,endX,endY,xSpacing,ySpacing,pointX,pointY);		HX_STACK_VAR(spriteData,"spriteData");
		HX_STACK_LINE(156)
		::neash::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
		HX_STACK_LINE(157)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(159)
		int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
		HX_STACK_LINE(160)
		int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = numRows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			while(((_g1 < _g))){
				HX_STACK_LINE(162)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(164)
					while(((_g3 < _g2))){
						HX_STACK_LINE(164)
						int i = (_g3)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(166)
						tempRect = ::neash::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);
						HX_STACK_LINE(167)
						tileID = this->addTileRect(tempRect,tempPoint);
						HX_STACK_LINE(168)
						spriteData->frameIDs->push(tileID);
					}
				}
			}
		}
		HX_STACK_LINE(172)
		spriteData->halfFrameNumber = ::Math_obj::floor((0.5 * spriteData->frameIDs->length));
		HX_STACK_LINE(173)
		this->flxSpriteFrames->push(spriteData);
		HX_STACK_LINE(174)
		return spriteData;
	}
}


HX_DEFINE_DYNAMIC_FUNC9(TileSheetData_obj,addSpriteFramesData,return )

Array< ::org::flixel::system::layer::TileSheetData > TileSheetData_obj::tileSheetData;

int TileSheetData_obj::_DRAWCALLS;

::org::flixel::system::layer::TileSheetData TileSheetData_obj::addTileSheet( ::neash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::addTileSheet","org/flixel/system/layer/TileSheetData.hx",26);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(27)
	::org::flixel::system::layer::TileSheetData tempTileSheetData;		HX_STACK_VAR(tempTileSheetData,"tempTileSheetData");
	HX_STACK_LINE(29)
	if ((::org::flixel::system::layer::TileSheetData_obj::containsTileSheet(bitmapData))){
		HX_STACK_LINE(31)
		tempTileSheetData = ::org::flixel::system::layer::TileSheetData_obj::getTileSheet(bitmapData);
		HX_STACK_LINE(32)
		return ::org::flixel::system::layer::TileSheetData_obj::getTileSheet(bitmapData);
	}
	HX_STACK_LINE(35)
	tempTileSheetData = ::org::flixel::system::layer::TileSheetData_obj::__new(::neash::display::Tilesheet_obj::__new(bitmapData));
	HX_STACK_LINE(36)
	::org::flixel::system::layer::TileSheetData_obj::tileSheetData->push(tempTileSheetData);
	HX_STACK_LINE(37)
	return ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length - (int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,addTileSheet,return )

bool TileSheetData_obj::containsTileSheet( ::neash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::containsTileSheet","org/flixel/system/layer/TileSheetData.hx",41);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while(((_g < _g1->length))){
			HX_STACK_LINE(42)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g);		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(42)
			++(_g);
			HX_STACK_LINE(44)
			if (((tsd->tileSheet->nmeBitmap == bitmapData))){
				HX_STACK_LINE(45)
				return true;
			}
		}
	}
	HX_STACK_LINE(50)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsTileSheet,return )

::org::flixel::system::layer::TileSheetData TileSheetData_obj::getTileSheet( ::neash::display::BitmapData bitmapData){
	HX_STACK_PUSH("TileSheetData::getTileSheet","org/flixel/system/layer/TileSheetData.hx",54);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		while(((_g < _g1->length))){
			HX_STACK_LINE(55)
			::org::flixel::system::layer::TileSheetData tsd = _g1->__get(_g);		HX_STACK_VAR(tsd,"tsd");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(57)
			if (((tsd->tileSheet->nmeBitmap == bitmapData))){
				HX_STACK_LINE(58)
				return tsd;
			}
		}
	}
	HX_STACK_LINE(63)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getTileSheet,return )

Void TileSheetData_obj::removeTileSheet( ::org::flixel::system::layer::TileSheetData tileSheetObj){
{
		HX_STACK_PUSH("TileSheetData::removeTileSheet","org/flixel/system/layer/TileSheetData.hx",67);
		HX_STACK_ARG(tileSheetObj,"tileSheetObj");
		HX_STACK_LINE(68)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while(((_g1 < _g))){
			HX_STACK_LINE(68)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(70)
			if (((::org::flixel::system::layer::TileSheetData_obj::tileSheetData->__get(i) == tileSheetObj))){
				HX_STACK_LINE(72)
				::org::flixel::system::layer::TileSheetData_obj::tileSheetData->splice(i,(int)1);
				HX_STACK_LINE(73)
				tileSheetObj->destroy();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,removeTileSheet,(void))

Void TileSheetData_obj::clear( ){
{
		HX_STACK_PUSH("TileSheetData::clear","org/flixel/system/layer/TileSheetData.hx",79);
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::system::layer::TileSheetData > _g1 = ::org::flixel::system::layer::TileSheetData_obj::tileSheetData;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			while(((_g < _g1->length))){
				HX_STACK_LINE(80)
				::org::flixel::system::layer::TileSheetData dataObject = _g1->__get(_g);		HX_STACK_VAR(dataObject,"dataObject");
				HX_STACK_LINE(80)
				++(_g);
				HX_STACK_LINE(82)
				dataObject->destroy();
			}
		}
		HX_STACK_LINE(84)
		::org::flixel::system::layer::TileSheetData_obj::tileSheetData = Array_obj< ::org::flixel::system::layer::TileSheetData >::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,clear,(void))


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(pairsData,"pairsData");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(pairsData,"pairsData");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pairsData") ) { return pairsData; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { return _DRAWCALLS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTileSheet") ) { return addTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileSheet") ) { return getTileSheet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { return tileSheetData; }
		if (HX_FIELD_EQ(inName,"getTileRectID") ) { return getTileRectID_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeTileSheet") ) { return removeTileSheet_dyn(); }
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsTileRect") ) { return containsTileRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsTileSheet") ) { return containsTileSheet_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteFramesData") ) { return addSpriteFramesData_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getIDforSpriteFrameData") ) { return getIDforSpriteFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"containsSpriteFrameData") ) { return containsSpriteFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"pairsData") ) { pairsData=inValue.Cast< Array< ::org::flixel::system::layer::RectanglePointPair > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::neash::display::Tilesheet >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileSheetData") ) { tileSheetData=inValue.Cast< Array< ::org::flixel::system::layer::TileSheetData > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< Array< ::org::flixel::system::layer::FlxSpriteFrames > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("pairsData"));
	outFields->push(HX_CSTRING("tileSheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tileSheetData"),
	HX_CSTRING("_DRAWCALLS"),
	HX_CSTRING("addTileSheet"),
	HX_CSTRING("containsTileSheet"),
	HX_CSTRING("getTileSheet"),
	HX_CSTRING("removeTileSheet"),
	HX_CSTRING("clear"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("getTileRectID"),
	HX_CSTRING("containsTileRect"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("getIDforSpriteFrameData"),
	HX_CSTRING("containsSpriteFrameData"),
	HX_CSTRING("addSpriteFramesData"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("pairsData"),
	HX_CSTRING("tileSheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
	HX_MARK_MEMBER_NAME(TileSheetData_obj::_DRAWCALLS,"_DRAWCALLS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::tileSheetData,"tileSheetData");
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::_DRAWCALLS,"_DRAWCALLS");
};

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetData_obj::__boot()
{
	tileSheetData= Array_obj< ::org::flixel::system::layer::TileSheetData >::__new();
	_DRAWCALLS= (int)0;
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
