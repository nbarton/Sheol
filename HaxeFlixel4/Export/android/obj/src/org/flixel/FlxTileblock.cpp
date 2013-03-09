#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
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
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTileblock
#include <org/flixel/FlxTileblock.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_DrawStackItem
#include <org/flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_PUSH("FlxTileblock::new","org/flixel/FlxTileblock.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct(X,Y,null());
	HX_STACK_LINE(37)
	this->bakedRotation = (int)0;
	HX_STACK_LINE(38)
	this->width = this->frameWidth = Width;
	HX_STACK_LINE(39)
	this->height = this->frameHeight = Height;
	HX_STACK_LINE(40)
	this->resetHelpers();
	HX_STACK_LINE(41)
	this->_tileData = null();
	HX_STACK_LINE(42)
	this->_tileIndices = null();
	HX_STACK_LINE(44)
	this->active = false;
	HX_STACK_LINE(45)
	this->immovable = true;
	HX_STACK_LINE(46)
	this->moves = false;
}
;
	return null();
}

FlxTileblock_obj::~FlxTileblock_obj() { }

Dynamic FlxTileblock_obj::__CreateEmpty() { return  new FlxTileblock_obj; }
hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(X,Y,Width,Height);
	return result;}

Dynamic FlxTileblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileblock_obj > result = new FlxTileblock_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxTileblock_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxTileblock::updateFrameData","org/flixel/FlxTileblock.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_LINE(326)
		if (((bool((bool((this->_node != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(329)
			this->_framesData = this->_node->addSpriteFramesData(this->_tileWidth,this->_tileHeight,null(),(int)0,(int)0,(int)0,(int)0,(int)1,(int)1);
			HX_STACK_LINE(331)
			if (((this->_tileData != null()))){
				HX_STACK_LINE(333)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_tileIndices->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				while(((_g1 < _g))){
					HX_STACK_LINE(333)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(335)
					this->_tileData[(i * (int)3)] = this->_framesData->frameIDs->__get(this->_tileIndices->__get(i));
				}
			}
		}
	}
return null();
}


Void FlxTileblock_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTileblock::destroy","org/flixel/FlxTileblock.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_LINE(320)
		this->_tileData = null();
		HX_STACK_LINE(321)
		this->_tileIndices = null();
		HX_STACK_LINE(322)
		this->super::destroy();
	}
return null();
}


Void FlxTileblock_obj::draw( ){
{
		HX_STACK_PUSH("FlxTileblock::draw","org/flixel/FlxTileblock.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		if (((this->_atlas == null()))){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(165)
		if (((this->_flickerTimer != (int)0))){
			HX_STACK_LINE(167)
			this->_flicker = !(this->_flicker);
			HX_STACK_LINE(168)
			if ((this->_flicker)){
				HX_STACK_LINE(169)
				return null();
			}
		}
		HX_STACK_LINE(174)
		if (((this->cameras == null()))){
			HX_STACK_LINE(175)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(178)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(179)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(180)
		Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(181)
		int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(182)
		::org::flixel::system::layer::DrawStackItem drawItem;		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(183)
		bool isColored = (this->_color < (int)16777215);		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(184)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(186)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(187)
		int numTiles = (int)0;		HX_STACK_VAR(numTiles,"numTiles");
		HX_STACK_LINE(188)
		if (((this->_tileData != null()))){
			HX_STACK_LINE(189)
			numTiles = ::Math_obj::floor((Float(this->_tileData->length) / Float((int)3)));
		}
		HX_STACK_LINE(193)
		int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
		HX_STACK_LINE(194)
		Float currTileID;		HX_STACK_VAR(currTileID,"currTileID");
		HX_STACK_LINE(195)
		Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
		HX_STACK_LINE(196)
		Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
		HX_STACK_LINE(198)
		Float radians;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(199)
		Float cos;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(200)
		Float sin;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(201)
		Float relativeX;		HX_STACK_VAR(relativeX,"relativeX");
		HX_STACK_LINE(202)
		Float relativeY;		HX_STACK_VAR(relativeY,"relativeY");
		HX_STACK_LINE(204)
		while(((i < l))){
			HX_STACK_LINE(206)
			camera = this->cameras->__get((i)++);
			HX_STACK_LINE(207)
			bool isColoredCamera = (camera->color < (int)16777215);		HX_STACK_VAR(isColoredCamera,"isColoredCamera");
			struct _Function_2_1{
				inline static ::org::flixel::system::layer::DrawStackItem Block( ::org::flixel::FlxTileblock_obj *__this,::org::flixel::FlxCamera &camera,bool &isColored,bool &isColoredCamera){
					HX_STACK_PUSH("*::closure","org/flixel/FlxTileblock.hx",208);
					{
						HX_STACK_LINE(208)
						::org::flixel::system::layer::Atlas ObjAtlas = __this->_atlas;		HX_STACK_VAR(ObjAtlas,"ObjAtlas");
						bool ObjColored = (bool(isColored) || bool(isColoredCamera));		HX_STACK_VAR(ObjColored,"ObjColored");
						int ObjBlending = __this->_blendInt;		HX_STACK_VAR(ObjBlending,"ObjBlending");
						HX_STACK_LINE(208)
						::org::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
						HX_STACK_LINE(208)
						if (((camera->_currentStackItem->initialized == false))){
							HX_STACK_LINE(208)
							camera->_headOfDrawStack = camera->_currentStackItem;
							HX_STACK_LINE(208)
							camera->_currentStackItem->atlas = ObjAtlas;
							HX_STACK_LINE(208)
							camera->_currentStackItem->colored = ObjColored;
							HX_STACK_LINE(208)
							camera->_currentStackItem->blending = ObjBlending;
							HX_STACK_LINE(208)
							itemToReturn = camera->_currentStackItem;
						}
						else{
							HX_STACK_LINE(208)
							if (((bool((bool((camera->_currentStackItem->atlas == ObjAtlas)) && bool((camera->_currentStackItem->colored == ObjColored)))) && bool((camera->_currentStackItem->blending == ObjBlending))))){
								HX_STACK_LINE(208)
								itemToReturn = camera->_currentStackItem;
							}
						}
						HX_STACK_LINE(208)
						if (((itemToReturn == null()))){
							HX_STACK_LINE(208)
							::org::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
							HX_STACK_LINE(208)
							if (((::org::flixel::FlxCamera_obj::_storageHead != null()))){
								HX_STACK_LINE(208)
								newItem = ::org::flixel::FlxCamera_obj::_storageHead;
								HX_STACK_LINE(208)
								::org::flixel::system::layer::DrawStackItem newHead = ::org::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
								HX_STACK_LINE(208)
								newItem->next = null();
								HX_STACK_LINE(208)
								::org::flixel::FlxCamera_obj::_storageHead = newHead;
							}
							else{
								HX_STACK_LINE(208)
								newItem = ::org::flixel::system::layer::DrawStackItem_obj::__new();
							}
							HX_STACK_LINE(208)
							newItem->atlas = ObjAtlas;
							HX_STACK_LINE(208)
							newItem->colored = ObjColored;
							HX_STACK_LINE(208)
							newItem->blending = ObjBlending;
							HX_STACK_LINE(208)
							camera->_currentStackItem->next = newItem;
							HX_STACK_LINE(208)
							camera->_currentStackItem = newItem;
							HX_STACK_LINE(208)
							itemToReturn = camera->_currentStackItem;
						}
						HX_STACK_LINE(208)
						itemToReturn->initialized = true;
						HX_STACK_LINE(208)
						return itemToReturn;
					}
					return null();
				}
			};
			HX_STACK_LINE(208)
			drawItem = _Function_2_1::Block(this,camera,isColored,isColoredCamera);
			HX_STACK_LINE(209)
			currDrawData = drawItem->drawData;
			HX_STACK_LINE(210)
			currIndex = drawItem->position;
			struct _Function_2_2{
				inline static bool Block( ::org::flixel::FlxCamera &camera,::org::flixel::FlxTileblock_obj *__this){
					HX_STACK_PUSH("*::closure","org/flixel/FlxTileblock.hx",212);
					{
						HX_STACK_LINE(212)
						::org::flixel::FlxCamera Camera = camera;		HX_STACK_VAR(Camera,"Camera");
						HX_STACK_LINE(212)
						if (((Camera == null()))){
							HX_STACK_LINE(212)
							Camera = ::org::flixel::FlxG_obj::camera;
						}
						HX_STACK_LINE(212)
						{
							HX_STACK_LINE(212)
							::org::flixel::FlxPoint point = __this->_point;		HX_STACK_VAR(point,"point");
							::org::flixel::FlxCamera Camera1 = Camera;		HX_STACK_VAR(Camera1,"Camera1");
							HX_STACK_LINE(212)
							if (((point == null()))){
								HX_STACK_LINE(212)
								point = ::org::flixel::FlxPoint_obj::__new(null(),null());
							}
							HX_STACK_LINE(212)
							if (((Camera1 == null()))){
								HX_STACK_LINE(212)
								Camera1 = ::org::flixel::FlxG_obj::camera;
							}
							HX_STACK_LINE(212)
							point->x = (__this->x - ::Math_obj::floor((Camera1->scroll->x * __this->scrollFactor->x)));
							HX_STACK_LINE(212)
							point->y = (__this->y - ::Math_obj::floor((Camera1->scroll->y * __this->scrollFactor->y)));
							HX_STACK_LINE(212)
							hx::AddEq(point->x,(  (((point->x > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(212)
							hx::AddEq(point->y,(  (((point->y > (int)0))) ? Float(0.0000001) : Float(-0.0000001) ));
							HX_STACK_LINE(212)
							point;
						}
						HX_STACK_LINE(212)
						__this->_point->x = (__this->_point->x - __this->offset->x);
						HX_STACK_LINE(212)
						__this->_point->y = (__this->_point->y - __this->offset->y);
						HX_STACK_LINE(212)
						bool result = false;		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(212)
						if (((bool((bool(((bool((__this->angle == (int)0)) || bool((__this->bakedRotation > (int)0))))) && bool((__this->scale->x == (int)1)))) && bool((__this->scale->y == (int)1))))){
							HX_STACK_LINE(212)
							result = (bool((bool((bool(((__this->_point->x + __this->frameWidth) > (int)0)) && bool((__this->_point->x < Camera->width)))) && bool(((__this->_point->y + __this->frameHeight) > (int)0)))) && bool((__this->_point->y < Camera->height)));
						}
						else{
							HX_STACK_LINE(212)
							Float halfWidth = (0.5 * __this->frameWidth);		HX_STACK_VAR(halfWidth,"halfWidth");
							HX_STACK_LINE(212)
							Float halfHeight = (0.5 * __this->frameHeight);		HX_STACK_VAR(halfHeight,"halfHeight");
							HX_STACK_LINE(212)
							Float absScaleX = (  (((__this->scale->x > (int)0))) ? Float(__this->scale->x) : Float(-(__this->scale->x)) );		HX_STACK_VAR(absScaleX,"absScaleX");
							HX_STACK_LINE(212)
							Float absScaleY = (  (((__this->scale->y > (int)0))) ? Float(__this->scale->y) : Float(-(__this->scale->y)) );		HX_STACK_VAR(absScaleY,"absScaleY");
							HX_STACK_LINE(212)
							Float radius = (((  (((__this->frameWidth >= __this->frameHeight))) ? int(__this->frameWidth) : int(__this->frameHeight) )) * ((  (((absScaleX >= absScaleY))) ? Float(absScaleX) : Float(absScaleY) )));		HX_STACK_VAR(radius,"radius");
							HX_STACK_LINE(212)
							hx::AddEq(__this->_point->x,halfWidth);
							HX_STACK_LINE(212)
							hx::AddEq(__this->_point->y,halfHeight);
							HX_STACK_LINE(212)
							result = (bool((bool((bool(((__this->_point->x + radius) > (int)0)) && bool(((__this->_point->x - radius) < Camera->width)))) && bool(((__this->_point->y + radius) > (int)0)))) && bool(((__this->_point->y - radius) < Camera->height)));
						}
						HX_STACK_LINE(212)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(212)
			if (((bool((bool(!(_Function_2_2::Block(camera,this))) || bool(!(camera->visible)))) || bool(!(camera->exists))))){
				HX_STACK_LINE(213)
				continue;
			}
			HX_STACK_LINE(217)
			this->_point->x = (((this->x - (camera->scroll->x * this->scrollFactor->x)) - this->offset->x) + this->origin->x);
			HX_STACK_LINE(218)
			this->_point->y = (((this->y - (camera->scroll->y * this->scrollFactor->y)) - this->offset->y) + this->origin->y);
			HX_STACK_LINE(220)
			Float redMult = (int)1;		HX_STACK_VAR(redMult,"redMult");
			HX_STACK_LINE(221)
			Float greenMult = (int)1;		HX_STACK_VAR(greenMult,"greenMult");
			HX_STACK_LINE(222)
			Float blueMult = (int)1;		HX_STACK_VAR(blueMult,"blueMult");
			HX_STACK_LINE(224)
			if ((isColoredCamera)){
				HX_STACK_LINE(226)
				redMult = (this->_red * camera->red);
				HX_STACK_LINE(227)
				greenMult = (this->_green * camera->green);
				HX_STACK_LINE(228)
				blueMult = (this->_blue * camera->blue);
			}
			else{
				HX_STACK_LINE(232)
				redMult = this->_red;
				HX_STACK_LINE(233)
				greenMult = this->_green;
				HX_STACK_LINE(234)
				blueMult = this->_blue;
			}
			HX_STACK_LINE(237)
			if (((this->_tileData != null()))){
				HX_STACK_LINE(239)
				if (((bool((bool(((bool((this->angle == (int)0)) || bool((this->bakedRotation > (int)0))))) && bool((this->scale->x == (int)1)))) && bool((this->scale->y == (int)1))))){
					HX_STACK_LINE(240)
					while(((j < numTiles))){
						HX_STACK_LINE(243)
						currPosInArr = (j * (int)3);
						HX_STACK_LINE(244)
						currTileID = this->_tileData->__get(currPosInArr);
						HX_STACK_LINE(245)
						currTileX = this->_tileData->__get((currPosInArr + (int)1));
						HX_STACK_LINE(246)
						currTileY = this->_tileData->__get((currPosInArr + (int)2));
						HX_STACK_LINE(248)
						currDrawData[(currIndex)++] = (this->_point->x + currTileX);
						HX_STACK_LINE(249)
						currDrawData[(currIndex)++] = (this->_point->y + currTileY);
						HX_STACK_LINE(250)
						currDrawData[(currIndex)++] = currTileID;
						HX_STACK_LINE(252)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(253)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(254)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(255)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(257)
						if (((bool(isColored) || bool(isColoredCamera)))){
							HX_STACK_LINE(259)
							currDrawData[(currIndex)++] = redMult;
							HX_STACK_LINE(260)
							currDrawData[(currIndex)++] = greenMult;
							HX_STACK_LINE(261)
							currDrawData[(currIndex)++] = blueMult;
						}
						HX_STACK_LINE(264)
						currDrawData[(currIndex)++] = this->alpha;
						HX_STACK_LINE(265)
						(j)++;
					}
				}
				else{
					HX_STACK_LINE(271)
					radians = (this->angle * 0.017453293);
					HX_STACK_LINE(272)
					cos = ::Math_obj::cos(radians);
					HX_STACK_LINE(273)
					sin = ::Math_obj::sin(radians);
					HX_STACK_LINE(275)
					while(((j < numTiles))){
						HX_STACK_LINE(277)
						currPosInArr = (j * (int)3);
						HX_STACK_LINE(278)
						currTileID = this->_tileData->__get(currPosInArr);
						HX_STACK_LINE(279)
						currTileX = this->_tileData->__get((currPosInArr + (int)1));
						HX_STACK_LINE(280)
						currTileY = this->_tileData->__get((currPosInArr + (int)2));
						HX_STACK_LINE(282)
						relativeX = (((currTileX * cos) * this->scale->x) - ((currTileY * sin) * this->scale->y));
						HX_STACK_LINE(283)
						relativeY = (((currTileX * sin) * this->scale->x) + ((currTileY * cos) * this->scale->y));
						HX_STACK_LINE(285)
						currDrawData[(currIndex)++] = (this->_point->x + relativeX);
						HX_STACK_LINE(286)
						currDrawData[(currIndex)++] = (this->_point->y + relativeY);
						HX_STACK_LINE(288)
						currDrawData[(currIndex)++] = currTileID;
						HX_STACK_LINE(290)
						currDrawData[(currIndex)++] = (cos * this->scale->x);
						HX_STACK_LINE(291)
						currDrawData[(currIndex)++] = (-(sin) * this->scale->y);
						HX_STACK_LINE(292)
						currDrawData[(currIndex)++] = (sin * this->scale->x);
						HX_STACK_LINE(293)
						currDrawData[(currIndex)++] = (cos * this->scale->y);
						HX_STACK_LINE(295)
						if (((bool(isColored) || bool(isColoredCamera)))){
							HX_STACK_LINE(297)
							currDrawData[(currIndex)++] = redMult;
							HX_STACK_LINE(298)
							currDrawData[(currIndex)++] = greenMult;
							HX_STACK_LINE(299)
							currDrawData[(currIndex)++] = blueMult;
						}
						HX_STACK_LINE(302)
						currDrawData[(currIndex)++] = this->alpha;
						HX_STACK_LINE(303)
						(j)++;
					}
				}
				HX_STACK_LINE(307)
				drawItem->position = currIndex;
			}
			HX_STACK_LINE(310)
			(::org::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
			HX_STACK_LINE(311)
			if (((bool(::org::flixel::FlxG_obj::visualDebug) && bool(!(this->ignoreDrawDebug))))){
				HX_STACK_LINE(312)
				this->drawDebug(camera);
			}
		}
	}
return null();
}


::org::flixel::FlxTileblock FlxTileblock_obj::loadTiles( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_Empties){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int Empties = __o_Empties.Default(0);
	HX_STACK_PUSH("FlxTileblock::loadTiles","org/flixel/FlxTileblock.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TileGraphic,"TileGraphic");
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(Empties,"Empties");
{
		HX_STACK_LINE(58)
		if (((TileGraphic == null()))){
			HX_STACK_LINE(59)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(64)
		::org::flixel::FlxSprite sprite = ::org::flixel::FlxSprite_obj::__new(null(),null(),null())->loadGraphic(TileGraphic,true,false,TileWidth,TileHeight,null(),null());		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(66)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
		HX_STACK_LINE(68)
		int spriteWidth = ::Std_obj::_int(sprite->width);		HX_STACK_VAR(spriteWidth,"spriteWidth");
		HX_STACK_LINE(69)
		int spriteHeight = ::Std_obj::_int(sprite->height);		HX_STACK_VAR(spriteHeight,"spriteHeight");
		HX_STACK_LINE(70)
		int total = (sprite->frames + Empties);		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(73)
		bool regen = false;		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(74)
		if (((hx::Mod(this->width,sprite->width) != (int)0))){
			HX_STACK_LINE(76)
			this->width = (::Std_obj::_int(((Float(this->width) / Float(spriteWidth)) + (int)1)) * spriteWidth);
			HX_STACK_LINE(77)
			regen = true;
		}
		HX_STACK_LINE(79)
		if (((hx::Mod(this->height,sprite->height) != (int)0))){
			HX_STACK_LINE(81)
			this->height = (::Std_obj::_int(((Float(this->height) / Float(spriteHeight)) + (int)1)) * spriteHeight);
			HX_STACK_LINE(82)
			regen = true;
		}
		HX_STACK_LINE(97)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(98)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(99)
		int destinationX;		HX_STACK_VAR(destinationX,"destinationX");
		HX_STACK_LINE(100)
		int destinationY = (int)0;		HX_STACK_VAR(destinationY,"destinationY");
		HX_STACK_LINE(101)
		int widthInTiles = ::Std_obj::_int((Float(this->width) / Float(spriteWidth)));		HX_STACK_VAR(widthInTiles,"widthInTiles");
		HX_STACK_LINE(102)
		int heightInTiles = ::Std_obj::_int((Float(this->height) / Float(spriteHeight)));		HX_STACK_VAR(heightInTiles,"heightInTiles");
		HX_STACK_LINE(104)
		if (((this->_tileData != null()))){
			HX_STACK_LINE(106)
			this->_tileData->splice((int)0,this->_tileData->length);
			HX_STACK_LINE(107)
			this->_tileIndices->splice((int)0,this->_tileIndices->length);
		}
		else{
			HX_STACK_LINE(111)
			this->_tileData = Array_obj< Float >::__new();
			HX_STACK_LINE(112)
			this->_tileIndices = Array_obj< int >::__new();
		}
		HX_STACK_LINE(114)
		this->_tileWidth = sprite->frameWidth;
		HX_STACK_LINE(115)
		this->_tileHeight = sprite->frameHeight;
		HX_STACK_LINE(116)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(TileGraphic,false,false,null(),this->_tileWidth,this->_tileHeight);
		HX_STACK_LINE(117)
		this->frameWidth = ::Math_obj::floor(this->width);
		HX_STACK_LINE(118)
		this->frameHeight = ::Math_obj::floor(this->height);
		HX_STACK_LINE(119)
		this->resetHelpers();
		HX_STACK_LINE(120)
		this->updateAtlasInfo(null());
		HX_STACK_LINE(122)
		while(((row < heightInTiles))){
			HX_STACK_LINE(124)
			destinationX = (int)0;
			HX_STACK_LINE(125)
			column = (int)0;
			HX_STACK_LINE(126)
			while(((column < widthInTiles))){
				struct _Function_3_1{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","org/flixel/FlxTileblock.hx",128);
						{
							HX_STACK_LINE(128)
							::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
							HX_STACK_LINE(128)
							if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
								HX_STACK_LINE(128)
								hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
							}
							HX_STACK_LINE(128)
							return ::org::flixel::FlxG_obj::globalSeed;
						}
						return null();
					}
				};
				HX_STACK_LINE(128)
				if ((((_Function_3_1::Block() * total) > Empties))){
					struct _Function_4_1{
						inline static Float Block( ){
							HX_STACK_PUSH("*::closure","org/flixel/FlxTileblock.hx",135);
							{
								HX_STACK_LINE(135)
								::org::flixel::FlxG_obj::globalSeed = (Float(hx::Mod(((int)69621 * ::Std_obj::_int((::org::flixel::FlxG_obj::globalSeed * (int)2147483647))),(int)2147483647)) / Float((int)2147483647));
								HX_STACK_LINE(135)
								if (((::org::flixel::FlxG_obj::globalSeed <= (int)0))){
									HX_STACK_LINE(135)
									hx::AddEq(::org::flixel::FlxG_obj::globalSeed,(int)1);
								}
								HX_STACK_LINE(135)
								return ::org::flixel::FlxG_obj::globalSeed;
							}
							return null();
						}
					};
					HX_STACK_LINE(135)
					int tileIndex = ::Math_obj::floor((_Function_4_1::Block() * this->_framesData->frameIDs->length));		HX_STACK_VAR(tileIndex,"tileIndex");
					HX_STACK_LINE(136)
					this->_tileIndices->push(tileIndex);
					HX_STACK_LINE(137)
					this->_tileData->push(this->_framesData->frameIDs->__get(tileIndex));
					HX_STACK_LINE(138)
					this->_tileData->push(((destinationX - this->origin->x) + (0.5 * this->_tileWidth)));
					HX_STACK_LINE(139)
					this->_tileData->push(((destinationY - this->origin->y) + (0.5 * this->_tileHeight)));
				}
				HX_STACK_LINE(143)
				hx::AddEq(destinationX,spriteWidth);
				HX_STACK_LINE(144)
				(column)++;
			}
			HX_STACK_LINE(146)
			hx::AddEq(destinationY,spriteHeight);
			HX_STACK_LINE(147)
			(row)++;
		}
		HX_STACK_LINE(150)
		this->updateFrameData();
		HX_STACK_LINE(152)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )


FlxTileblock_obj::FlxTileblock_obj()
{
}

void FlxTileblock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileblock);
	HX_MARK_MEMBER_NAME(_tileIndices,"_tileIndices");
	HX_MARK_MEMBER_NAME(_tileData,"_tileData");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileblock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tileIndices,"_tileIndices");
	HX_VISIT_MEMBER_NAME(_tileData,"_tileData");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileblock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return loadTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileData") ) { return _tileData; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tileIndices") ) { return _tileIndices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileblock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_tileData") ) { _tileData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_tileIndices") ) { _tileIndices=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileblock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tileIndices"));
	outFields->push(HX_CSTRING("_tileData"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_tileWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	HX_CSTRING("loadTiles"),
	HX_CSTRING("_tileIndices"),
	HX_CSTRING("_tileData"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_tileWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTileblock"), hx::TCanCast< FlxTileblock_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTileblock_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
