#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
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
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
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
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxLayer
#include <org/flixel/FlxLayer.h>
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
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTilemap
#include <org/flixel/FlxTilemap.h>
#endif
#ifndef INCLUDED_org_flixel_FlxU
#include <org/flixel/FlxU.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTile
#include <org/flixel/system/FlxTile.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxTilemapBuffer
#include <org/flixel/system/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxTilemap_obj::__construct()
{
HX_STACK_PUSH("FlxTilemap::new","org/flixel/FlxTilemap.hx",138);
{
	HX_STACK_LINE(139)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(140)
	this->_auto = (int)0;
	HX_STACK_LINE(141)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(142)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(143)
	this->totalTiles = (int)0;
	HX_STACK_LINE(144)
	this->_buffers = Array_obj< ::org::flixel::system::FlxTilemapBuffer >::__new();
	HX_STACK_LINE(145)
	this->_flashPoint = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(146)
	this->_flashRect = null();
	HX_STACK_LINE(147)
	this->_data = null();
	HX_STACK_LINE(148)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(149)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(154)
	this->_rectIDs = null();
	HX_STACK_LINE(156)
	this->_tiles = null();
	HX_STACK_LINE(157)
	this->_tileObjects = null();
	HX_STACK_LINE(158)
	this->immovable = true;
	HX_STACK_LINE(159)
	this->moves = false;
	HX_STACK_LINE(160)
	this->cameras = null();
	HX_STACK_LINE(166)
	this->_lastVisualDebug = ::org::flixel::FlxG_obj::visualDebug;
	HX_STACK_LINE(167)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(170)
	this->_helperPoint = ::neash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

::org::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_PUSH("FlxTilemap::tileToFlxSprite","org/flixel/FlxTilemap.hx",1927);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(NewTile,"NewTile");
{
		HX_STACK_LINE(1928)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1930)
		::neash::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1934)
		::org::flixel::system::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex));		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1935)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(1941)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * this->_tileWidth);		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1942)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1943)
			if (((::Std_obj::_int(rx) >= this->_tiles->nmeGetWidth()))){
				HX_STACK_LINE(1945)
				ry = (::Std_obj::_int((Float(rx) / Float(this->_tiles->nmeGetWidth()))) * this->_tileHeight);
				HX_STACK_LINE(1946)
				hx::ModEq(rx,this->_tiles->nmeGetWidth());
			}
			HX_STACK_LINE(1948)
			rect = ::neash::geom::Rectangle_obj::__new(rx,ry,this->_tileWidth,this->_tileHeight);
		}
		HX_STACK_LINE(1952)
		::neash::geom::Point pt = ::neash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(1953)
		::org::flixel::FlxSprite tileSprite = ::org::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(1955)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(1959)
		tileSprite->x = ((X * this->_tileWidth) + this->x);
		HX_STACK_LINE(1960)
		tileSprite->y = ((Y * this->_tileHeight) + this->y);
		HX_STACK_LINE(1961)
		if (((rect != null()))){
			HX_STACK_LINE(1961)
			tileSprite->getPixels()->copyPixels(this->_tiles,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(1962)
		tileSprite->dirty = true;
		HX_STACK_LINE(1963)
		tileSprite->updateFrameData();
		HX_STACK_LINE(1965)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(1965)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(1967)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxTilemap::updateFrameData","org/flixel/FlxTilemap.hx",1901);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1901)
		if (((bool((bool((this->_node != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(1905)
			this->_framesData = this->_node->addSpriteFramesData(this->_tileWidth,this->_tileHeight,::neash::geom::Point_obj::__new((int)0,(int)0),(int)0,(int)0,(int)0,(int)0,(int)1,(int)1);
			HX_STACK_LINE(1907)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(1908)
			::org::flixel::FlxU_obj::SetArrayLength(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(1909)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1910)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(1911)
				this->updateTile((i)++);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::updateTile","org/flixel/FlxTilemap.hx",1871);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(1872)
		::org::flixel::system::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index));		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1873)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(1878)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(1880)
			return null();
		}
		HX_STACK_LINE(1892)
		this->_rectIDs[Index] = this->_framesData->frameIDs->__get((this->_data->__get(Index) - this->_startingIndex));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::autoTile","org/flixel/FlxTilemap.hx",1837);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(1838)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(1839)
			return null();
		}
		HX_STACK_LINE(1843)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(1844)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(1845)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(1846)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(1847)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(1848)
		if (((bool((::Std_obj::_int((Index + this->widthInTiles)) >= this->totalTiles)) || bool((this->_data->__get((Index + this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(1849)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(1850)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(1851)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(1852)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			HX_STACK_LINE(1854)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(1855)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(1856)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(1857)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(1858)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(1859)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(1860)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(1861)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(1863)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::org::flixel::FlxPoint FlxTilemap_obj::rayHit( ::org::flixel::FlxPoint Start,::org::flixel::FlxPoint End,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::rayHit","org/flixel/FlxTilemap.hx",1584);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1585)
		::org::flixel::FlxPoint Result = null();		HX_STACK_VAR(Result,"Result");
		HX_STACK_LINE(1586)
		Float step = this->_tileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1587)
		if (((this->_tileHeight < this->_tileWidth))){
			HX_STACK_LINE(1588)
			step = this->_tileHeight;
		}
		HX_STACK_LINE(1591)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1592)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1593)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1594)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1595)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1596)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1597)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1598)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1599)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1600)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1601)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1602)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1603)
		while(((i < steps))){
			HX_STACK_LINE(1605)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1606)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1608)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->width)))) || bool((curY < (int)0)))) || bool((curY > this->height))))){
				HX_STACK_LINE(1610)
				(i)++;
				HX_STACK_LINE(1611)
				continue;
			}
			HX_STACK_LINE(1614)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_tileWidth)));
			HX_STACK_LINE(1615)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_tileHeight)));
			HX_STACK_LINE(1616)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX)))->allowCollisions != (int)0))){
				HX_STACK_LINE(1619)
				hx::MultEq(tileX,this->_tileWidth);
				HX_STACK_LINE(1620)
				hx::MultEq(tileY,this->_tileHeight);
				HX_STACK_LINE(1621)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1622)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1623)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1624)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1625)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1628)
				q = tileX;
				HX_STACK_LINE(1629)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1630)
					hx::AddEq(q,this->_tileWidth);
				}
				HX_STACK_LINE(1633)
				rx = q;
				HX_STACK_LINE(1634)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1635)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_tileHeight)))))){
					HX_STACK_LINE(1637)
					if (((Result == null()))){
						HX_STACK_LINE(1638)
						Result = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1641)
					Result->x = rx;
					HX_STACK_LINE(1642)
					Result->y = ry;
					HX_STACK_LINE(1643)
					return Result;
				}
				HX_STACK_LINE(1647)
				q = tileY;
				HX_STACK_LINE(1648)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1649)
					hx::AddEq(q,this->_tileHeight);
				}
				HX_STACK_LINE(1652)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1653)
				ry = q;
				HX_STACK_LINE(1654)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_tileWidth)))))){
					HX_STACK_LINE(1656)
					if (((Result == null()))){
						HX_STACK_LINE(1657)
						Result = ::org::flixel::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(1660)
					Result->x = rx;
					HX_STACK_LINE(1661)
					Result->y = ry;
					HX_STACK_LINE(1662)
					return Result;
				}
				HX_STACK_LINE(1664)
				return null();
			}
			HX_STACK_LINE(1666)
			(i)++;
		}
		HX_STACK_LINE(1668)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,rayHit,return )

bool FlxTilemap_obj::ray( ::org::flixel::FlxPoint Start,::org::flixel::FlxPoint End,::org::flixel::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::ray","org/flixel/FlxTilemap.hx",1485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Result,"Result");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1486)
		Float step = this->_tileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1487)
		if (((this->_tileHeight < this->_tileWidth))){
			HX_STACK_LINE(1488)
			step = this->_tileHeight;
		}
		HX_STACK_LINE(1491)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1492)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1493)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1494)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1495)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1496)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1497)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1498)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1499)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1500)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1501)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1502)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1503)
		while(((i < steps))){
			HX_STACK_LINE(1505)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1506)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1508)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->width)))) || bool((curY < (int)0)))) || bool((curY > this->height))))){
				HX_STACK_LINE(1510)
				(i)++;
				HX_STACK_LINE(1511)
				continue;
			}
			HX_STACK_LINE(1514)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_tileWidth)));
			HX_STACK_LINE(1515)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_tileHeight)));
			HX_STACK_LINE(1516)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX)))->allowCollisions != (int)0))){
				HX_STACK_LINE(1519)
				hx::MultEq(tileX,this->_tileWidth);
				HX_STACK_LINE(1520)
				hx::MultEq(tileY,this->_tileHeight);
				HX_STACK_LINE(1521)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1522)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1523)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1524)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1525)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1528)
				q = tileX;
				HX_STACK_LINE(1529)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1530)
					hx::AddEq(q,this->_tileWidth);
				}
				HX_STACK_LINE(1533)
				rx = q;
				HX_STACK_LINE(1534)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1535)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_tileHeight)))))){
					HX_STACK_LINE(1537)
					if (((Result != null()))){
						HX_STACK_LINE(1539)
						Result->x = rx;
						HX_STACK_LINE(1540)
						Result->y = ry;
					}
					HX_STACK_LINE(1542)
					return false;
				}
				HX_STACK_LINE(1546)
				q = tileY;
				HX_STACK_LINE(1547)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1548)
					hx::AddEq(q,this->_tileHeight);
				}
				HX_STACK_LINE(1551)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1552)
				ry = q;
				HX_STACK_LINE(1553)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_tileWidth)))))){
					HX_STACK_LINE(1555)
					if (((Result != null()))){
						HX_STACK_LINE(1557)
						Result->x = rx;
						HX_STACK_LINE(1558)
						Result->y = ry;
					}
					HX_STACK_LINE(1560)
					return false;
				}
				HX_STACK_LINE(1562)
				return true;
			}
			HX_STACK_LINE(1564)
			(i)++;
		}
		HX_STACK_LINE(1566)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

::org::flixel::FlxRect FlxTilemap_obj::getBounds( ::org::flixel::FlxRect Bounds){
	HX_STACK_PUSH("FlxTilemap::getBounds","org/flixel/FlxTilemap.hx",1467);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Bounds,"Bounds");
	HX_STACK_LINE(1468)
	if (((Bounds == null()))){
		HX_STACK_LINE(1469)
		Bounds = ::org::flixel::FlxRect_obj::__new(null(),null(),null(),null());
	}
	struct _Function_1_1{
		inline static ::org::flixel::FlxRect Block( ::org::flixel::FlxRect &Bounds,::org::flixel::FlxTilemap_obj *__this){
			HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1472);
			{
				HX_STACK_LINE(1472)
				Bounds->x = __this->x;
				HX_STACK_LINE(1472)
				Bounds->y = __this->y;
				HX_STACK_LINE(1472)
				Bounds->width = __this->width;
				HX_STACK_LINE(1472)
				Bounds->height = __this->height;
				HX_STACK_LINE(1472)
				return Bounds;
			}
			return null();
		}
	};
	HX_STACK_LINE(1472)
	return _Function_1_1::Block(Bounds,this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

Void FlxTilemap_obj::follow( ::org::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_PUSH("FlxTilemap::follow","org/flixel/FlxTilemap.hx",1453);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Border,"Border");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(1454)
		if (((Camera == null()))){
			HX_STACK_LINE(1455)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1458)
		Camera->setBounds((this->x + (Border * this->_tileWidth)),(this->y + (Border * this->_tileHeight)),(this->width - ((Border * this->_tileWidth) * (int)2)),(this->height - ((Border * this->_tileHeight) * (int)2)),UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_PUSH("FlxTilemap::setTileProperties","org/flixel/FlxTilemap.hx",1429);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(AllowCollisions,"AllowCollisions");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(CallbackFilter,"CallbackFilter");
	HX_STACK_ARG(Range,"Range");
{
		HX_STACK_LINE(1430)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1431)
			Range = (int)1;
		}
		HX_STACK_LINE(1434)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1435)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1436)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1437)
		while(((i < l))){
			HX_STACK_LINE(1439)
			tile = this->_tileObjects->__get((i)++);
			HX_STACK_LINE(1440)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1441)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1442)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTileByIndex","org/flixel/FlxTilemap.hx",1372);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1373)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1374)
			return false;
		}
		HX_STACK_LINE(1378)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1379)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1381)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1382)
			return ok;
		}
		HX_STACK_LINE(1386)
		this->setDirty(null());
		HX_STACK_LINE(1388)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1390)
			this->updateTile(Index);
			HX_STACK_LINE(1391)
			return ok;
		}
		HX_STACK_LINE(1395)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1396)
		int row = (::Std_obj::_int((Float(Index) / Float(this->widthInTiles))) - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1397)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1398)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1399)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1400)
		while(((row < rowLength))){
			HX_STACK_LINE(1402)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1403)
			while(((column < columnHeight))){
				HX_STACK_LINE(1405)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1407)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1408)
					this->autoTile(i);
					HX_STACK_LINE(1409)
					this->updateTile(i);
				}
				HX_STACK_LINE(1411)
				(column)++;
			}
			HX_STACK_LINE(1413)
			(row)++;
		}
		HX_STACK_LINE(1416)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTile","org/flixel/FlxTilemap.hx",1356);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1357)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1358)
			return false;
		}
		HX_STACK_LINE(1361)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

Array< ::org::flixel::FlxPoint > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_PUSH("FlxTilemap::getTileCoords","org/flixel/FlxTilemap.hx",1319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Midpoint,"Midpoint");
{
		HX_STACK_LINE(1320)
		Array< ::org::flixel::FlxPoint > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1322)
		::org::flixel::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1323)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1324)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1325)
		while(((i < l))){
			HX_STACK_LINE(1327)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1329)
				point = ::org::flixel::FlxPoint_obj::__new((this->x + (::Math_obj::floor(hx::Mod(i,this->widthInTiles)) * this->_tileWidth)),(this->y + (::Math_obj::floor((Float(i) / Float(this->widthInTiles))) * this->_tileHeight)));
				HX_STACK_LINE(1330)
				if ((Midpoint)){
					HX_STACK_LINE(1332)
					hx::AddEq(point->x,(this->_tileWidth * 0.5));
					HX_STACK_LINE(1333)
					hx::AddEq(point->y,(this->_tileHeight * 0.5));
				}
				HX_STACK_LINE(1335)
				if (((array == null()))){
					HX_STACK_LINE(1336)
					array = Array_obj< ::org::flixel::FlxPoint >::__new();
				}
				HX_STACK_LINE(1339)
				array->push(point);
			}
			HX_STACK_LINE(1341)
			(i)++;
		}
		HX_STACK_LINE(1344)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileInstances","org/flixel/FlxTilemap.hx",1292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1293)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1294)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1295)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1296)
	while(((i < l))){
		HX_STACK_LINE(1298)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1300)
			if (((array == null()))){
				HX_STACK_LINE(1301)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1304)
			array->push(i);
		}
		HX_STACK_LINE(1306)
		(i)++;
	}
	HX_STACK_LINE(1309)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileByIndex","org/flixel/FlxTilemap.hx",1282);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1282)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_PUSH("FlxTilemap::getTile","org/flixel/FlxTilemap.hx",1269);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_LINE(1269)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

bool FlxTilemap_obj::overlapsPoint( ::org::flixel::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsPoint","org/flixel/FlxTilemap.hx",1246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1247)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1248)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((point->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + (Float(((point->x - this->x))) / Float(this->_tileWidth))))))->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1252)
		if (((Camera == null()))){
			HX_STACK_LINE(1253)
			Camera = ::org::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1256)
		point->x = (point->x - Camera->scroll->x);
		HX_STACK_LINE(1257)
		point->y = (point->y - Camera->scroll->y);
		HX_STACK_LINE(1258)
		{
			HX_STACK_LINE(1258)
			::org::flixel::FlxPoint point1 = this->_point;		HX_STACK_VAR(point1,"point1");
			::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
			HX_STACK_LINE(1258)
			if (((point1 == null()))){
				HX_STACK_LINE(1258)
				point1 = ::org::flixel::FlxPoint_obj::__new(null(),null());
			}
			HX_STACK_LINE(1258)
			if (((Camera1 == null()))){
				HX_STACK_LINE(1258)
				Camera1 = ::org::flixel::FlxG_obj::camera;
			}
			HX_STACK_LINE(1258)
			point1->x = (this->x - ::Math_obj::floor((Camera1->scroll->x * this->scrollFactor->x)));
			HX_STACK_LINE(1258)
			point1->y = (this->y - ::Math_obj::floor((Camera1->scroll->y * this->scrollFactor->y)));
			HX_STACK_LINE(1258)
			hx::AddEq(point1->x,(  (((point1->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1258)
			hx::AddEq(point1->y,(  (((point1->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
			HX_STACK_LINE(1258)
			point1;
		}
		HX_STACK_LINE(1259)
		return (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((point->y - this->_point->y))) / Float(this->_tileHeight))) * this->widthInTiles) + (Float(((point->x - this->_point->x))) / Float(this->_tileWidth))))))->allowCollisions > (int)0);
	}
}


bool FlxTilemap_obj::overlapsWithCallback( ::org::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::org::flixel::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsWithCallback","org/flixel/FlxTilemap.hx",1137);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(1138)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(1140)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1141)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1142)
		if (((Position != null()))){
			HX_STACK_LINE(1144)
			X = Position->x;
			HX_STACK_LINE(1145)
			Y = Position->y;
		}
		struct _Function_1_1{
			inline static int Block( ::org::flixel::FlxObject &Object,::org::flixel::FlxTilemap_obj *__this,Float &X){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1149);
				{
					HX_STACK_LINE(1149)
					Float Value = (Float(((Object->x - X))) / Float(__this->_tileWidth));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(1149)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(1149)
					return (  (((Value > (int)0))) ? int(number) : int((  (((number != Value))) ? int((number - (int)1)) : int(number) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1149)
		int selectionX = _Function_1_1::Block(Object,this,X);		HX_STACK_VAR(selectionX,"selectionX");
		struct _Function_1_2{
			inline static int Block( ::org::flixel::FlxObject &Object,Float &Y,::org::flixel::FlxTilemap_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1150);
				{
					HX_STACK_LINE(1150)
					Float Value = (Float(((Object->y - Y))) / Float(__this->_tileHeight));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(1150)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					HX_STACK_LINE(1150)
					return (  (((Value > (int)0))) ? int(number) : int((  (((number != Value))) ? int((number - (int)1)) : int(number) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1150)
		int selectionY = _Function_1_2::Block(Object,Y,this);		HX_STACK_VAR(selectionY,"selectionY");
		struct _Function_1_3{
			inline static int Block( ::org::flixel::FlxObject &Object,::org::flixel::FlxTilemap_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1151);
				{
					HX_STACK_LINE(1151)
					Float Value = (Float(Object->width) / Float(__this->_tileWidth));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(1151)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					struct _Function_2_1{
						inline static int Block( int &number,Float &Value){
							HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1151);
							{
								HX_STACK_LINE(1151)
								return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1151)
					return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1151)
		int selectionWidth = ((selectionX + _Function_1_3::Block(Object,this)) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		struct _Function_1_4{
			inline static int Block( ::org::flixel::FlxObject &Object,::org::flixel::FlxTilemap_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1152);
				{
					HX_STACK_LINE(1152)
					Float Value = (Float(Object->height) / Float(__this->_tileHeight));		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(1152)
					int number = ::Std_obj::_int(Value);		HX_STACK_VAR(number,"number");
					struct _Function_2_1{
						inline static int Block( int &number,Float &Value){
							HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1152);
							{
								HX_STACK_LINE(1152)
								return (  (((number != Value))) ? int((number + (int)1)) : int(number) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1152)
					return (  (((Value > (int)0))) ? int(_Function_2_1::Block(number,Value)) : int(number) );
				}
				return null();
			}
		};
		HX_STACK_LINE(1152)
		int selectionHeight = ((selectionY + _Function_1_4::Block(Object,this)) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(1155)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(1156)
			selectionX = (int)0;
		}
		HX_STACK_LINE(1159)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(1160)
			selectionY = (int)0;
		}
		HX_STACK_LINE(1163)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(1164)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(1167)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(1168)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(1173)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(1174)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1175)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1176)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1177)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(1178)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1179)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1180)
		while(((row < selectionHeight))){
			HX_STACK_LINE(1182)
			column = selectionX;
			HX_STACK_LINE(1183)
			while(((column < selectionWidth))){
				HX_STACK_LINE(1185)
				overlapFound = false;
				HX_STACK_LINE(1186)
				int dataIndex = this->_data->__get((rowStart + column));		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(1187)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(1189)
					(column)++;
					HX_STACK_LINE(1190)
					continue;
				}
				HX_STACK_LINE(1193)
				tile = this->_tileObjects->__get(dataIndex);
				HX_STACK_LINE(1194)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(1196)
					tile->x = (X + (column * this->_tileWidth));
					HX_STACK_LINE(1197)
					tile->y = (Y + (row * this->_tileHeight));
					HX_STACK_LINE(1198)
					tile->last->x = (tile->x - deltaX);
					HX_STACK_LINE(1199)
					tile->last->y = (tile->y - deltaY);
					HX_STACK_LINE(1200)
					if (((Callback != null()))){
						HX_STACK_LINE(1201)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(1203)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1207)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
					else{
						HX_STACK_LINE(1212)
						overlapFound = (bool((bool((bool(((Object->x + Object->width) > tile->x)) && bool((Object->x < (tile->x + tile->width))))) && bool(((Object->y + Object->height) > tile->y)))) && bool((Object->y < (tile->y + tile->height))));
					}
					HX_STACK_LINE(1215)
					if ((overlapFound)){
						HX_STACK_LINE(1217)
						if (((bool((tile->callbackFunction_dyn() != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
							HX_STACK_LINE(1219)
							tile->mapIndex = (rowStart + column);
							HX_STACK_LINE(1220)
							tile->callbackFunction(tile,Object);
						}
						HX_STACK_LINE(1222)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(1225)
					if (((bool((tile->callbackFunction_dyn() != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(1227)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1228)
						tile->callbackFunction(tile,Object);
					}
				}
				HX_STACK_LINE(1230)
				(column)++;
			}
			HX_STACK_LINE(1232)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1233)
			(row)++;
		}
		HX_STACK_LINE(1235)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsAt","org/flixel/FlxTilemap.hx",1087);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1088)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(1090)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1091)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1092)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1093)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1094)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1095)
			while(((i < grp->length))){
				HX_STACK_LINE(1097)
				basic = members->__get((i)++);
				HX_STACK_LINE(1098)
				if ((::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxObject >()))){
					HX_STACK_LINE(1100)
					this->_point->x = X;
					HX_STACK_LINE(1101)
					this->_point->y = Y;
					HX_STACK_LINE(1102)
					if ((this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(basic),null(),false,this->_point))){
						HX_STACK_LINE(1103)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(1108)
					if ((this->overlapsAt(X,Y,basic,InScreenSpace,Camera))){
						HX_STACK_LINE(1110)
						results = true;
					}
				}
			}
			HX_STACK_LINE(1115)
			return results;
		}
		else{
			HX_STACK_LINE(1117)
			if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxObject >()))){
				HX_STACK_LINE(1119)
				this->_point->x = X;
				HX_STACK_LINE(1120)
				this->_point->y = Y;
				HX_STACK_LINE(1121)
				return this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point);
			}
		}
		HX_STACK_LINE(1123)
		return false;
	}
}


bool FlxTilemap_obj::overlaps( ::org::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::org::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlaps","org/flixel/FlxTilemap.hx",1039);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1040)
		if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(1042)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1043)
			::org::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1044)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1045)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(ObjectOrGroup);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1046)
			Array< ::org::flixel::FlxBasic > members = grp->members;		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1048)
			while(((i < grp->length))){
				HX_STACK_LINE(1050)
				basic = members->__get((i)++);
				HX_STACK_LINE(1051)
				if ((::Std_obj::is(basic,hx::ClassOf< ::org::flixel::FlxObject >()))){
					HX_STACK_LINE(1052)
					if ((this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(basic),null(),null(),null()))){
						HX_STACK_LINE(1054)
						results = true;
					}
				}
				else{
					HX_STACK_LINE(1059)
					if ((this->overlaps(basic,InScreenSpace,Camera))){
						HX_STACK_LINE(1061)
						results = true;
					}
				}
			}
			HX_STACK_LINE(1066)
			return results;
		}
		else{
			HX_STACK_LINE(1068)
			if ((::Std_obj::is(ObjectOrGroup,hx::ClassOf< ::org::flixel::FlxObject >()))){
				HX_STACK_LINE(1069)
				return this->overlapsWithCallback(hx::TCast< org::flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null());
			}
		}
		HX_STACK_LINE(1072)
		return false;
	}
}


Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::org::flixel::FlxPoint > Points){
{
		HX_STACK_PUSH("FlxTilemap::walkPath","org/flixel/FlxTilemap.hx",948);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Start,"Start");
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(949)
		Points->push(::org::flixel::FlxPoint_obj::__new(((this->x + (::Math_obj::floor(hx::Mod(Start,this->widthInTiles)) * this->_tileWidth)) + (this->_tileWidth * 0.5)),((this->y + (::Math_obj::floor((Float(Start) / Float(this->widthInTiles))) * this->_tileHeight)) + (this->_tileHeight * 0.5))));
		HX_STACK_LINE(950)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(951)
			return null();
		}
		HX_STACK_LINE(955)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(956)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(957)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(958)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(960)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(961)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(962)
		if ((up)){
			HX_STACK_LINE(964)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(965)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(966)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(970)
		if ((right)){
			HX_STACK_LINE(972)
			i = (Start + (int)1);
			HX_STACK_LINE(973)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(974)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(978)
		if ((down)){
			HX_STACK_LINE(980)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(981)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(982)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(986)
		if ((left)){
			HX_STACK_LINE(988)
			i = (Start - (int)1);
			HX_STACK_LINE(989)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(990)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(994)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(996)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(997)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(998)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1002)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1004)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1005)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1006)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1010)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1012)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1013)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1014)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1018)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1020)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1021)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1022)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1026)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal){
	HX_STACK_PUSH("FlxTilemap::computePathDistance","org/flixel/FlxTilemap.hx",784);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(EndIndex,"EndIndex");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
	HX_STACK_LINE(787)
	int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
	HX_STACK_LINE(788)
	Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
	HX_STACK_LINE(789)
	::org::flixel::FlxU_obj::SetArrayLength(distances,mapSize);
	HX_STACK_LINE(790)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(791)
	while(((i < mapSize))){
		HX_STACK_LINE(793)
		if (((this->_tileObjects->__get(this->_data->__get(i))->allowCollisions != (int)0))){
			HX_STACK_LINE(794)
			distances[i] = (int)-2;
		}
		else{
			HX_STACK_LINE(798)
			distances[i] = (int)-1;
		}
		HX_STACK_LINE(801)
		(i)++;
	}
	HX_STACK_LINE(803)
	distances[StartIndex] = (int)0;
	HX_STACK_LINE(804)
	int distance = (int)1;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(805)
	Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
	HX_STACK_LINE(806)
	Array< int > current;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(807)
	int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
	HX_STACK_LINE(808)
	bool left;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(809)
	bool right;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(810)
	bool up;		HX_STACK_VAR(up,"up");
	HX_STACK_LINE(811)
	bool down;		HX_STACK_VAR(down,"down");
	HX_STACK_LINE(812)
	int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(813)
	bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
	HX_STACK_LINE(814)
	while(((neighbors->length > (int)0))){
		HX_STACK_LINE(816)
		current = neighbors;
		HX_STACK_LINE(817)
		neighbors = Array_obj< int >::__new();
		HX_STACK_LINE(819)
		i = (int)0;
		HX_STACK_LINE(820)
		currentLength = current->length;
		HX_STACK_LINE(821)
		while(((i < currentLength))){
			HX_STACK_LINE(823)
			currentIndex = current->__get((i)++);
			HX_STACK_LINE(824)
			if (((currentIndex == ::Std_obj::_int(EndIndex)))){
				HX_STACK_LINE(826)
				foundEnd = true;
				HX_STACK_LINE(828)
				neighbors = Array_obj< int >::__new();
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(833)
			left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
			HX_STACK_LINE(834)
			right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
			HX_STACK_LINE(835)
			up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
			HX_STACK_LINE(836)
			down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
			HX_STACK_LINE(838)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(839)
			if ((up)){
				HX_STACK_LINE(841)
				index = (currentIndex - this->widthInTiles);
				HX_STACK_LINE(842)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(844)
					distances[index] = distance;
					HX_STACK_LINE(845)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(848)
			if ((right)){
				HX_STACK_LINE(850)
				index = (currentIndex + (int)1);
				HX_STACK_LINE(851)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(853)
					distances[index] = distance;
					HX_STACK_LINE(854)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(857)
			if ((down)){
				HX_STACK_LINE(859)
				index = (currentIndex + this->widthInTiles);
				HX_STACK_LINE(860)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(862)
					distances[index] = distance;
					HX_STACK_LINE(863)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(866)
			if ((left)){
				HX_STACK_LINE(868)
				index = (currentIndex - (int)1);
				HX_STACK_LINE(869)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(871)
					distances[index] = distance;
					HX_STACK_LINE(872)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(875)
			if (((bool(up) && bool(right)))){
				HX_STACK_LINE(877)
				index = ((currentIndex - this->widthInTiles) + (int)1);
				HX_STACK_LINE(878)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(880)
					distances[index] = distance;
					HX_STACK_LINE(881)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(883)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(885)
						distances[index] = distance;
						HX_STACK_LINE(886)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(889)
			if (((bool(right) && bool(down)))){
				HX_STACK_LINE(891)
				index = ((currentIndex + this->widthInTiles) + (int)1);
				HX_STACK_LINE(892)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(894)
					distances[index] = distance;
					HX_STACK_LINE(895)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(897)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(899)
						distances[index] = distance;
						HX_STACK_LINE(900)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(903)
			if (((bool(left) && bool(down)))){
				HX_STACK_LINE(905)
				index = ((currentIndex + this->widthInTiles) - (int)1);
				HX_STACK_LINE(906)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(908)
					distances[index] = distance;
					HX_STACK_LINE(909)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(911)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(913)
						distances[index] = distance;
						HX_STACK_LINE(914)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(917)
			if (((bool(up) && bool(left)))){
				HX_STACK_LINE(919)
				index = ((currentIndex - this->widthInTiles) - (int)1);
				HX_STACK_LINE(920)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(922)
					distances[index] = distance;
					HX_STACK_LINE(923)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(925)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(927)
						distances[index] = distance;
						HX_STACK_LINE(928)
						neighbors->push(index);
					}
				}
			}
		}
		HX_STACK_LINE(932)
		(distance)++;
	}
	HX_STACK_LINE(934)
	if ((!(foundEnd))){
		HX_STACK_LINE(935)
		distances = null();
	}
	HX_STACK_LINE(938)
	return distances;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::raySimplifyPath( Array< ::org::flixel::FlxPoint > Points){
{
		HX_STACK_PUSH("FlxTilemap::raySimplifyPath","org/flixel/FlxTilemap.hx",747);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(748)
		::org::flixel::FlxPoint source = Points->__get((int)0);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(749)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(750)
		::org::flixel::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(751)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(752)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(753)
		while(((i < l))){
			HX_STACK_LINE(755)
			node = Points->__get((i)++);
			HX_STACK_LINE(756)
			if (((node == null()))){
				HX_STACK_LINE(757)
				continue;
			}
			HX_STACK_LINE(760)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(761)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(763)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(768)
				source = Points->__get(lastIndex);
			}
			HX_STACK_LINE(771)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::org::flixel::FlxPoint > Points){
{
		HX_STACK_PUSH("FlxTilemap::simplifyPath","org/flixel/FlxTilemap.hx",718);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(719)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(720)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(721)
		::org::flixel::FlxPoint last = Points->__get((int)0);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(722)
		::org::flixel::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(723)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(724)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(725)
		while(((i < l))){
			HX_STACK_LINE(727)
			node = Points->__get(i);
			HX_STACK_LINE(728)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(729)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1))->x))) / Float(((node->y - Points->__get((i + (int)1))->y))));
			HX_STACK_LINE(730)
			if (((bool((bool((last->x == Points->__get((i + (int)1))->x)) || bool((last->y == Points->__get((i + (int)1))->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(731)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(735)
				last = node;
			}
			HX_STACK_LINE(738)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

::org::flixel::FlxPath FlxTilemap_obj::findPath( ::org::flixel::FlxPoint Start,::org::flixel::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_PUSH("FlxTilemap::findPath","org/flixel/FlxTilemap.hx",657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Simplify,"Simplify");
	HX_STACK_ARG(RaySimplify,"RaySimplify");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
{
		HX_STACK_LINE(659)
		int startIndex = ((::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_tileWidth))));		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(660)
		int endIndex = ((::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_tileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_tileWidth))));		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(663)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex))->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex))->allowCollisions > (int)0))))){
			HX_STACK_LINE(665)
			return null();
		}
		HX_STACK_LINE(670)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal);		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(671)
		if (((distances == null()))){
			HX_STACK_LINE(672)
			return null();
		}
		HX_STACK_LINE(677)
		Array< ::org::flixel::FlxPoint > points = Array_obj< ::org::flixel::FlxPoint >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(678)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(681)
		::org::flixel::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(682)
		node = points->__get((points->length - (int)1));
		HX_STACK_LINE(683)
		node->x = Start->x;
		HX_STACK_LINE(684)
		node->y = Start->y;
		HX_STACK_LINE(685)
		node = points->__get((int)0);
		HX_STACK_LINE(686)
		node->x = End->x;
		HX_STACK_LINE(687)
		node->y = End->y;
		HX_STACK_LINE(690)
		if ((Simplify)){
			HX_STACK_LINE(691)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(694)
		if ((RaySimplify)){
			HX_STACK_LINE(695)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(700)
		::org::flixel::FlxPath path = ::org::flixel::FlxPath_obj::__new(null());		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(701)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(702)
		while(((i >= (int)0))){
			HX_STACK_LINE(704)
			node = points->__get((i)--);
			HX_STACK_LINE(705)
			if (((node != null()))){
				HX_STACK_LINE(706)
				path->addPoint(node,true);
			}
		}
		HX_STACK_LINE(710)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_PUSH("FlxTilemap::setDirty","org/flixel/FlxTilemap.hx",637);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Dirty,"Dirty");
{
		HX_STACK_LINE(638)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(639)
		int l = this->_buffers->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(640)
		while(((i < l))){
			HX_STACK_LINE(641)
			this->_buffers->__get((i)++)->dirty = Dirty;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_PUSH("FlxTilemap::getData","org/flixel/FlxTilemap.hx",613);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Simple,"Simple");
{
		HX_STACK_LINE(614)
		if ((!(Simple))){
			HX_STACK_LINE(615)
			return this->_data;
		}
		HX_STACK_LINE(619)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(620)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(621)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(622)
		::org::flixel::FlxU_obj::SetArrayLength(data,l);
		HX_STACK_LINE(623)
		while(((i < l))){
			HX_STACK_LINE(625)
			data[i] = (  (((this->_tileObjects->__get(this->_data->__get(i))->allowCollisions > (int)0))) ? int((int)1) : int((int)0) );
			HX_STACK_LINE(626)
			(i)++;
		}
		HX_STACK_LINE(628)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::draw( ){
{
		HX_STACK_PUSH("FlxTilemap::draw","org/flixel/FlxTilemap.hx",552);
		HX_STACK_THIS(this);
		HX_STACK_LINE(553)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(555)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(556)
			if ((this->_flicker)){
				HX_STACK_LINE(557)
				return null();
			}
		}
		HX_STACK_LINE(562)
		if (((this->cameras == null()))){
			HX_STACK_LINE(563)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(566)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(567)
		::org::flixel::system::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(568)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(569)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(570)
		while(((i < l))){
			HX_STACK_LINE(572)
			camera = this->cameras->__get(i);
			HX_STACK_LINE(573)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(574)
				continue;
			}
			HX_STACK_LINE(577)
			if (((this->_buffers->__get(i) == null()))){
				HX_STACK_LINE(578)
				this->_buffers[i] = ::org::flixel::system::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera);
			}
			HX_STACK_LINE(581)
			buffer = this->_buffers->__get((i)++);
			HX_STACK_LINE(600)
			this->drawTilemap(buffer,camera);
			HX_STACK_LINE(603)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
	}
return null();
}


Void FlxTilemap_obj::drawTilemap( ::org::flixel::system::FlxTilemapBuffer Buffer,::org::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemap::drawTilemap","org/flixel/FlxTilemap.hx",387);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Buffer,"Buffer");
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(391)
		this->_helperPoint->x = (Float(::Math_obj::floor((((this->x - (Camera->scroll->x * this->scrollFactor->x))) * (int)5))) / Float((int)5));
		HX_STACK_LINE(392)
		this->_helperPoint->y = (Float(::Math_obj::floor((((this->y - (Camera->scroll->y * this->scrollFactor->y))) * (int)5))) / Float((int)5));
		HX_STACK_LINE(393)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(394)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(395)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(396)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(398)
		Array< Float > currDrawData = this->_layer->drawData->__get(Camera->ID);		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(399)
		int currIndex = this->_layer->positionData->__get(Camera->ID);		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(400)
		bool isColored = this->_layer->isColored;		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(401)
		bool isColoredCamera = (Camera->color < (int)16777215);		HX_STACK_VAR(isColoredCamera,"isColoredCamera");
		HX_STACK_LINE(405)
		this->_point->x = (::Std_obj::_int((Camera->scroll->x * this->scrollFactor->x)) - this->x);
		HX_STACK_LINE(406)
		this->_point->y = (::Std_obj::_int((Camera->scroll->y * this->scrollFactor->y)) - this->y);
		HX_STACK_LINE(407)
		int screenXInTiles = ::Math_obj::floor((Float(((this->_point->x + ((  (((this->_point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ))))) / Float(this->_tileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(408)
		int screenYInTiles = ::Math_obj::floor((Float(((this->_point->y + ((  (((this->_point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ))))) / Float(this->_tileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(409)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(410)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(413)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(414)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(417)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(418)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(421)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(422)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(425)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(426)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(430)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(431)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(432)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(433)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(434)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(435)
		::org::flixel::system::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(436)
		::neash::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(437)
		while(((row < screenRows))){
			HX_STACK_LINE(439)
			columnIndex = rowIndex;
			HX_STACK_LINE(440)
			column = (int)0;
			HX_STACK_LINE(441)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(442)
			while(((column < screenColumns))){
				HX_STACK_LINE(471)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(472)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(474)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_tileWidth));
					HX_STACK_LINE(475)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_tileHeight));
					HX_STACK_LINE(476)
					currDrawData[(currIndex)++] = drawX;
					HX_STACK_LINE(477)
					currDrawData[(currIndex)++] = drawY;
					HX_STACK_LINE(478)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(480)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(481)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(482)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(483)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(485)
					if (((bool(isColoredCamera) || bool(isColored)))){
						HX_STACK_LINE(487)
						currDrawData[(currIndex)++] = Camera->red;
						HX_STACK_LINE(488)
						currDrawData[(currIndex)++] = Camera->green;
						HX_STACK_LINE(489)
						currDrawData[(currIndex)++] = Camera->blue;
					}
					HX_STACK_LINE(491)
					currDrawData[(currIndex)++] = 1.0;
					HX_STACK_LINE(493)
					if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
						HX_STACK_LINE(495)
						tile = this->_tileObjects->__get(this->_data->__get(columnIndex));
						HX_STACK_LINE(496)
						if (((tile != null()))){
							HX_STACK_LINE(498)
							if (((tile->allowCollisions <= (int)0))){
								HX_STACK_LINE(499)
								debugColor = (int)-16740119;
							}
							else{
								HX_STACK_LINE(506)
								if (((tile->allowCollisions != (int)4369))){
									HX_STACK_LINE(507)
									debugColor = (int)-1040641;
								}
								else{
									HX_STACK_LINE(515)
									debugColor = (int)-16715227;
								}
							}
							HX_STACK_LINE(524)
							::neash::display::Graphics gfx = Camera->_debugLayer->nmeGetGraphics();		HX_STACK_VAR(gfx,"gfx");
							HX_STACK_LINE(525)
							gfx->lineStyle((int)1,debugColor,0.5,null(),null(),null(),null(),null());
							HX_STACK_LINE(526)
							gfx->drawRect(drawX,drawY,this->_tileWidth,this->_tileHeight);
						}
					}
				}
				HX_STACK_LINE(531)
				hx::AddEq(this->_flashPoint->x,this->_tileWidth);
				HX_STACK_LINE(532)
				(column)++;
				HX_STACK_LINE(533)
				(columnIndex)++;
			}
			HX_STACK_LINE(535)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(536)
			hx::AddEq(this->_flashPoint->y,this->_tileHeight);
			HX_STACK_LINE(537)
			(row)++;
		}
		HX_STACK_LINE(541)
		this->_layer->positionData[Camera->ID] = currIndex;
		HX_STACK_LINE(544)
		Buffer->x = (screenXInTiles * this->_tileWidth);
		HX_STACK_LINE(545)
		Buffer->y = (screenYInTiles * this->_tileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::update( ){
{
		HX_STACK_PUSH("FlxTilemap::update","org/flixel/FlxTilemap.hx",373);
		HX_STACK_THIS(this);
		HX_STACK_LINE(373)
		if (((this->_lastVisualDebug != ::org::flixel::FlxG_obj::visualDebug))){
			HX_STACK_LINE(376)
			this->_lastVisualDebug = ::org::flixel::FlxG_obj::visualDebug;
			HX_STACK_LINE(377)
			this->setDirty(null());
		}
	}
return null();
}


::org::flixel::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_PUSH("FlxTilemap::loadMap","org/flixel/FlxTilemap.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MapData,"MapData");
	HX_STACK_ARG(TileGraphic,"TileGraphic");
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(AutoTile,"AutoTile");
	HX_STACK_ARG(StartingIndex,"StartingIndex");
	HX_STACK_ARG(DrawIndex,"DrawIndex");
	HX_STACK_ARG(CollideIndex,"CollideIndex");
{
		HX_STACK_LINE(225)
		this->_auto = AutoTile;
		HX_STACK_LINE(226)
		this->_startingIndex = (  (((StartingIndex <= (int)0))) ? int((int)0) : int(StartingIndex) );
		HX_STACK_LINE(229)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(232)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(233)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(234)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(235)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(236)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(237)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(238)
			while(((row < this->heightInTiles))){
				HX_STACK_LINE(240)
				columns = rows->__get((row)++).split(HX_CSTRING(","));
				HX_STACK_LINE(241)
				if (((columns->length <= (int)1))){
					HX_STACK_LINE(243)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(244)
					continue;
				}
				HX_STACK_LINE(246)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(247)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(250)
				column = (int)0;
				HX_STACK_LINE(251)
				while(((column < this->widthInTiles))){
					HX_STACK_LINE(252)
					this->_data->push(::Std_obj::parseInt(columns->__get((column)++)));
				}
			}
		}
		else{
			HX_STACK_LINE(259)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(260)
				this->_data = MapData;
			}
			else{
				HX_STACK_LINE(264)
				hx::Throw (((HX_CSTRING("Unexpected MapData format '") + ::Std_obj::string(::Type_obj::_typeof(MapData))) + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(269)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(270)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(271)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(273)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(274)
			DrawIndex = (int)1;
			HX_STACK_LINE(275)
			CollideIndex = (int)1;
			HX_STACK_LINE(276)
			i = (int)0;
			HX_STACK_LINE(277)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(278)
				this->autoTile((i)++);
			}
		}
		HX_STACK_LINE(284)
		this->_tiles = ::org::flixel::FlxG_obj::addBitmap(TileGraphic,null(),null(),null(),null(),null());
		HX_STACK_LINE(285)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(286)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(287)
			this->_tileWidth = this->_tiles->nmeGetHeight();
		}
		HX_STACK_LINE(290)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(291)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(292)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(297)
		this->_tiles = ::org::flixel::FlxG_obj::addBitmap(TileGraphic,false,false,null(),this->_tileWidth,this->_tileHeight);
		HX_STACK_LINE(298)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(302)
		this->_tileObjects = Array_obj< ::org::flixel::system::FlxTile >::__new();
		HX_STACK_LINE(304)
		int length = ::Math_obj::floor((Float(((Float(this->_tiles->nmeGetWidth()) / Float(this->_tileWidth)) * this->_tiles->nmeGetHeight())) / Float(this->_tileHeight)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(305)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(307)
		{
			HX_STACK_LINE(307)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(307)
			while(((_g < length))){
				HX_STACK_LINE(307)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(309)
				this->_tileObjects[i1] = ::org::flixel::system::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(312)
		this->updateLayerInfo(null());
		HX_STACK_LINE(322)
		this->width = (this->widthInTiles * this->_tileWidth);
		HX_STACK_LINE(323)
		this->height = (this->heightInTiles * this->_tileHeight);
		HX_STACK_LINE(335)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemap::destroy","org/flixel/FlxTilemap.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		this->_flashPoint = null();
		HX_STACK_LINE(180)
		this->_flashRect = null();
		HX_STACK_LINE(181)
		this->_tiles = null();
		HX_STACK_LINE(182)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(183)
		int l = this->_tileObjects->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while(((_g < l))){
				HX_STACK_LINE(184)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(186)
				this->_tileObjects->__get(i1)->destroy();
			}
		}
		HX_STACK_LINE(188)
		this->_tileObjects = null();
		HX_STACK_LINE(189)
		i = (int)0;
		HX_STACK_LINE(190)
		l = this->_buffers->length;
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			while(((_g < l))){
				HX_STACK_LINE(191)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(193)
				this->_buffers->__get(i1)->destroy();
			}
		}
		HX_STACK_LINE(195)
		this->_buffers = null();
		HX_STACK_LINE(196)
		this->_data = null();
		HX_STACK_LINE(204)
		this->_helperPoint = null();
		HX_STACK_LINE(205)
		this->_rectIDs = null();
		HX_STACK_LINE(208)
		this->super::destroy();
	}
return null();
}


::String FlxTilemap_obj::imgAuto;

::String FlxTilemap_obj::imgAutoAlt;

int FlxTilemap_obj::OFF;

int FlxTilemap_obj::AUTO;

int FlxTilemap_obj::ALT;

::String FlxTilemap_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_PUSH("FlxTilemap::arrayToCSV","org/flixel/FlxTilemap.hx",1679);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Invert,"Invert");
{
		HX_STACK_LINE(1680)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1681)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1682)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(1683)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1684)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(1685)
		while(((row < Height))){
			HX_STACK_LINE(1687)
			column = (int)0;
			HX_STACK_LINE(1688)
			while(((column < Width))){
				HX_STACK_LINE(1690)
				index = Data->__get(((row * Width) + column));
				HX_STACK_LINE(1691)
				if ((Invert)){
					HX_STACK_LINE(1692)
					if (((index == (int)0))){
						HX_STACK_LINE(1694)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(1697)
						if (((index == (int)1))){
							HX_STACK_LINE(1698)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(1703)
				if (((column == (int)0))){
					HX_STACK_LINE(1704)
					if (((row == (int)0))){
						HX_STACK_LINE(1706)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(1710)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(1715)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(1718)
				(column)++;
			}
			HX_STACK_LINE(1720)
			(row)++;
		}
		HX_STACK_LINE(1722)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,arrayToCSV,return )

::String FlxTilemap_obj::bitmapToCSV( ::neash::display::BitmapData bitmapData,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::bitmapToCSV","org/flixel/FlxTilemap.hx",1741);
	HX_STACK_ARG(bitmapData,"bitmapData");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(ColorMap,"ColorMap");
{
		HX_STACK_LINE(1742)
		if (((Scale < (int)1))){
			HX_STACK_LINE(1742)
			Scale = (int)1;
		}
		HX_STACK_LINE(1745)
		if (((Scale > (int)1))){
			HX_STACK_LINE(1747)
			::neash::display::BitmapData bd = bitmapData;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(1748)
			bitmapData = ::neash::display::BitmapData_obj::__new((bitmapData->nmeGetWidth() * Scale),(bitmapData->nmeGetHeight() * Scale),null(),null(),null());
			HX_STACK_LINE(1749)
			::neash::geom::Matrix mtx = ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(1750)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(1751)
			bitmapData->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(1755)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1756)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1760)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(1762)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(1763)
		int bitmapWidth = bitmapData->nmeGetWidth();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(1764)
		int bitmapHeight = bitmapData->nmeGetHeight();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(1765)
		while(((row < bitmapHeight))){
			HX_STACK_LINE(1767)
			column = (int)0;
			HX_STACK_LINE(1768)
			while(((column < bitmapWidth))){
				HX_STACK_LINE(1771)
				pixel = bitmapData->getPixel(column,row);
				HX_STACK_LINE(1772)
				if (((ColorMap != null()))){
					struct _Function_4_1{
						inline static int Block( Array< int > &ColorMap,int &pixel){
							HX_STACK_PUSH("*::closure","org/flixel/FlxTilemap.hx",1774);
							{
								HX_STACK_LINE(1774)
								int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
								HX_STACK_LINE(1774)
								int len = ColorMap->length;		HX_STACK_VAR(len,"len");
								HX_STACK_LINE(1774)
								int index = (int)-1;		HX_STACK_VAR(index,"index");
								HX_STACK_LINE(1774)
								{
									HX_STACK_LINE(1774)
									int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1774)
									while(((_g < len))){
										HX_STACK_LINE(1774)
										int i = (_g)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1774)
										if (((ColorMap->__get(i) == pixel))){
											HX_STACK_LINE(1774)
											index = i;
										}
									}
								}
								HX_STACK_LINE(1774)
								return index;
							}
							return null();
						}
					};
					HX_STACK_LINE(1773)
					pixel = _Function_4_1::Block(ColorMap,pixel);
				}
				else{
					HX_STACK_LINE(1776)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(1777)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(1781)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(1786)
				if (((column == (int)0))){
					HX_STACK_LINE(1787)
					if (((row == (int)0))){
						HX_STACK_LINE(1789)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(1793)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(1798)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(1801)
				(column)++;
			}
			HX_STACK_LINE(1803)
			(row)++;
		}
		HX_STACK_LINE(1805)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,bitmapToCSV,return )

::String FlxTilemap_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::imageToCSV","org/flixel/FlxTilemap.hx",1819);
	HX_STACK_ARG(ImageFile,"ImageFile");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
{
		HX_STACK_LINE(1820)
		::neash::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(1821)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(1822)
			tempBitmapData = ::nme::installer::Assets_obj::getBitmapData(ImageFile,null());
		}
		else{
			HX_STACK_LINE(1826)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(1829)
		return ::org::flixel::FlxTilemap_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,imageToCSV,return )


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_lastVisualDebug,"_lastVisualDebug");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(_auto,"auto");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_lastVisualDebug,"_lastVisualDebug");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"OFF") ) { return OFF; }
		if (HX_FIELD_EQ(inName,"ALT") ) { return ALT; }
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"AUTO") ) { return AUTO; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rayHit") ) { return rayHit_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_tiles") ) { return _tiles; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imgAuto") ) { return imgAuto; }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { return imgAutoAlt; }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastVisualDebug") ) { return _lastVisualDebug; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"OFF") ) { OFF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALT") ) { ALT=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"AUTO") ) { AUTO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imgAuto") ) { imgAuto=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::org::flixel::system::FlxTilemapBuffer > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { imgAutoAlt=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::org::flixel::system::FlxTile > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_lastVisualDebug") ) { _lastVisualDebug=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rectIDs"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_lastVisualDebug"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_tiles"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("auto"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("imgAuto"),
	HX_CSTRING("imgAutoAlt"),
	HX_CSTRING("OFF"),
	HX_CSTRING("AUTO"),
	HX_CSTRING("ALT"),
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("rayHit"),
	HX_CSTRING("ray"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("follow"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTile"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTile"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("findPath"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("getData"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("update"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_lastVisualDebug"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_data"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_tiles"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("auto"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::imgAuto,"imgAuto");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::imgAutoAlt,"imgAutoAlt");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::imgAuto,"imgAuto");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::imgAutoAlt,"imgAutoAlt");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
};

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemap_obj::__boot()
{
	imgAuto= ::org::flixel::FlxAssets_obj::imgAuto;
	imgAutoAlt= ::org::flixel::FlxAssets_obj::imgAutoAlt;
	OFF= (int)0;
	AUTO= (int)1;
	ALT= (int)2;
}

} // end namespace org
} // end namespace flixel
