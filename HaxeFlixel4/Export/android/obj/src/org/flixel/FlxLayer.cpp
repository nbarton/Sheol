#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
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
#ifndef INCLUDED_neash_display_Tilesheet
#include <neash/display/Tilesheet.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
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
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
namespace org{
namespace flixel{

Void FlxLayer_obj::__construct(::String Name)
{
HX_STACK_PUSH("FlxLayer::new","org/flixel/FlxLayer.hx",61);
{
	HX_STACK_LINE(62)
	this->_numObjects = (int)0;
	HX_STACK_LINE(63)
	this->drawData = Array_obj< Array< Float > >::__new();
	HX_STACK_LINE(64)
	this->positionData = Array_obj< int >::__new();
	HX_STACK_LINE(65)
	this->antialiasing = false;
	HX_STACK_LINE(67)
	this->onStage = false;
	HX_STACK_LINE(69)
	::org::flixel::FlxLayer_obj::_layerCache->set(Name,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(70)
	this->set_isColored(false);
	HX_STACK_LINE(71)
	this->_blend = (int)0;
}
;
	return null();
}

FlxLayer_obj::~FlxLayer_obj() { }

Dynamic FlxLayer_obj::__CreateEmpty() { return  new FlxLayer_obj; }
hx::ObjectPtr< FlxLayer_obj > FlxLayer_obj::__new(::String Name)
{  hx::ObjectPtr< FlxLayer_obj > result = new FlxLayer_obj();
	result->__construct(Name);
	return result;}

Dynamic FlxLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxLayer_obj > result = new FlxLayer_obj();
	result->__construct(inArgs[0]);
	return result;}

::org::flixel::system::layer::Atlas FlxLayer_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxLayer::set_atlas","org/flixel/FlxLayer.hx",392);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(393)
	if (((this->_numObjects == (int)0))){
		HX_STACK_LINE(395)
		this->_atlas = value;
		HX_STACK_LINE(397)
		if (((value != null()))){
			HX_STACK_LINE(398)
			this->_tileSheet = this->_atlas->_tileSheetData->tileSheet;
		}
		else{
			HX_STACK_LINE(402)
			this->_tileSheet = null();
		}
	}
	HX_STACK_LINE(407)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,set_atlas,return )

::org::flixel::system::layer::Atlas FlxLayer_obj::get_atlas( ){
	HX_STACK_PUSH("FlxLayer::get_atlas","org/flixel/FlxLayer.hx",387);
	HX_STACK_THIS(this);
	HX_STACK_LINE(387)
	return this->_atlas;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLayer_obj,get_atlas,return )

::neash::display::BlendMode FlxLayer_obj::set_blend( ::neash::display::BlendMode value){
	HX_STACK_PUSH("FlxLayer::set_blend","org/flixel/FlxLayer.hx",370);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(372)
	if (((value != null()))){
		HX_STACK_LINE(373)
		{
			::neash::display::BlendMode _switch_1 = (value);
			switch((_switch_1)->GetIndex()){
				case 7: {
					HX_STACK_LINE(376)
					this->_blend = (int)65536;
				}
				;break;
				default: {
					HX_STACK_LINE(378)
					this->_blend = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(383)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,set_blend,return )

::neash::display::BlendMode FlxLayer_obj::get_blend( ){
	HX_STACK_PUSH("FlxLayer::get_blend","org/flixel/FlxLayer.hx",357);
	HX_STACK_THIS(this);
	HX_STACK_LINE(358)
	::neash::display::BlendMode mode = ::neash::display::BlendMode_obj::NORMAL_dyn();		HX_STACK_VAR(mode,"mode");
	HX_STACK_LINE(360)
	switch( (int)(this->_blend)){
		case (int)65536: {
			HX_STACK_LINE(362)
			mode = ::neash::display::BlendMode_obj::ADD_dyn();
		}
		;break;
	}
	HX_STACK_LINE(366)
	return mode;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLayer_obj,get_blend,return )

Void FlxLayer_obj::clearDrawData( int numCameras){
{
		HX_STACK_PUSH("FlxLayer::clearDrawData","org/flixel/FlxLayer.hx",328);
		HX_STACK_THIS(this);
		HX_STACK_ARG(numCameras,"numCameras");
		HX_STACK_LINE(329)
		int numPositions = this->positionData->length;		HX_STACK_VAR(numPositions,"numPositions");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = numPositions;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			while(((_g1 < _g))){
				HX_STACK_LINE(330)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(332)
				this->positionData[i] = (int)0;
			}
		}
		HX_STACK_LINE(335)
		if (((numPositions < numCameras))){
			HX_STACK_LINE(337)
			int diff = (numCameras - numPositions);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(338)
			{
				HX_STACK_LINE(338)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = diff;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(338)
				while(((_g1 < _g))){
					HX_STACK_LINE(338)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(340)
					this->drawData->push(Array_obj< Float >::__new());
					HX_STACK_LINE(341)
					this->positionData->push((int)0);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,clearDrawData,(void))

Void FlxLayer_obj::render( int numCameras){
{
		HX_STACK_PUSH("FlxLayer::render","org/flixel/FlxLayer.hx",286);
		HX_STACK_THIS(this);
		HX_STACK_ARG(numCameras,"numCameras");
		HX_STACK_LINE(287)
		::neash::display::Graphics cameraGraphics;		HX_STACK_VAR(cameraGraphics,"cameraGraphics");
		HX_STACK_LINE(288)
		Array< Float > data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(289)
		int dataLen;		HX_STACK_VAR(dataLen,"dataLen");
		HX_STACK_LINE(290)
		int position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(291)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(292)
		int tempFlags;		HX_STACK_VAR(tempFlags,"tempFlags");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = numCameras;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			while(((_g1 < _g))){
				HX_STACK_LINE(293)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(295)
				tempFlags = this->flags;
				HX_STACK_LINE(297)
				data = this->drawData->__get(i);
				HX_STACK_LINE(298)
				dataLen = data->length;
				HX_STACK_LINE(299)
				position = this->positionData->__get(i);
				HX_STACK_LINE(301)
				if (((position > (int)0))){
					HX_STACK_LINE(303)
					if (((dataLen != position))){
						HX_STACK_LINE(304)
						data->splice(position,(dataLen - position));
					}
					HX_STACK_LINE(308)
					camera = ::org::flixel::FlxG_obj::cameras->__get(i);
					HX_STACK_LINE(310)
					if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
						HX_STACK_LINE(311)
						continue;
					}
					HX_STACK_LINE(315)
					if (((bool((camera->color < (int)16777215)) && bool(!(this->isColored))))){
						HX_STACK_LINE(316)
						hx::OrEq(tempFlags,(int)4);
					}
					HX_STACK_LINE(319)
					hx::OrEq(tempFlags,this->_blend);
					HX_STACK_LINE(320)
					cameraGraphics = camera->_canvas->nmeGetGraphics();
					HX_STACK_LINE(321)
					this->_tileSheet->drawTiles(cameraGraphics,data,(bool(this->antialiasing) || bool(camera->antialiasing)),tempFlags);
					HX_STACK_LINE(322)
					(::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,render,(void))

bool FlxLayer_obj::hasImage( ::String Key){
	HX_STACK_PUSH("FlxLayer::hasImage","org/flixel/FlxLayer.hx",280);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(280)
	return this->_atlas->hasNodeWithName(Key);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,hasImage,return )

::org::flixel::system::layer::Node FlxLayer_obj::addImage( Dynamic Image,::String Key,hx::Null< bool >  __o_Unique){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxLayer::addImage","org/flixel/FlxLayer.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Image,"Image");
	HX_STACK_ARG(Key,"Key");
	HX_STACK_ARG(Unique,"Unique");
{
		HX_STACK_LINE(238)
		::neash::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(239)
		::String key = null();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(240)
		if ((::Std_obj::is(Image,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(242)
			bd = ::Type_obj::createInstance(hx::TCast< Class >::cast(Image),Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
			HX_STACK_LINE(243)
			key = ::Type_obj::getClassName(hx::TCast< Class >::cast(Image));
		}
		else{
			HX_STACK_LINE(245)
			if (((bool(::Std_obj::is(Image,hx::ClassOf< ::neash::display::BitmapData >())) && bool((Key != null()))))){
				HX_STACK_LINE(247)
				bd = Image;
				HX_STACK_LINE(248)
				key = Key;
			}
			else{
				HX_STACK_LINE(250)
				if ((::Std_obj::is(Image,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(252)
					bd = ::nme::installer::Assets_obj::getBitmapData(Image,null());
					HX_STACK_LINE(253)
					key = Image;
				}
				else{
					HX_STACK_LINE(256)
					return null();
				}
			}
		}
		HX_STACK_LINE(260)
		if (((bool(Unique) && bool(this->hasImage(key))))){
			HX_STACK_LINE(262)
			int inc = (int)0;		HX_STACK_VAR(inc,"inc");
			HX_STACK_LINE(263)
			::String ukey;		HX_STACK_VAR(ukey,"ukey");
			HX_STACK_LINE(264)
			do{
				HX_STACK_LINE(265)
				ukey = (key + (inc)++);
			}
while((this->hasImage(ukey)));
			HX_STACK_LINE(268)
			key = ukey;
		}
		HX_STACK_LINE(271)
		if ((this->hasImage(key))){
			HX_STACK_LINE(272)
			return this->_atlas->getNodeByKey(key);
		}
		HX_STACK_LINE(276)
		return this->_atlas->addNode(bd,key);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxLayer_obj,addImage,return )

::org::flixel::FlxBasic FlxLayer_obj::removeObjectFromLayer( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxLayer::removeObjectFromLayer","org/flixel/FlxLayer.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(227)
	Object->set_layer(null());
	HX_STACK_LINE(229)
	(this->_numObjects)--;
	HX_STACK_LINE(230)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,removeObjectFromLayer,return )

::org::flixel::FlxBasic FlxLayer_obj::remove( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxLayer::remove","org/flixel/FlxLayer.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(200)
	if (((Object->get_layer() == hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(201)
		if ((::Std_obj::is(Object,hx::ClassOf< ::org::flixel::FlxGroup >()))){
			HX_STACK_LINE(204)
			::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(Object);		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::org::flixel::FlxBasic > _g1 = grp->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(205)
				while(((_g < _g1->length))){
					HX_STACK_LINE(205)
					::org::flixel::FlxBasic basic = _g1->__get(_g);		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(205)
					++(_g);
					HX_STACK_LINE(207)
					if (((basic != null()))){
						HX_STACK_LINE(208)
						this->remove(basic);
					}
				}
			}
			HX_STACK_LINE(213)
			Object->set_layer(null());
		}
		else{
			HX_STACK_LINE(216)
			this->removeObjectFromLayer(Object);
		}
	}
	HX_STACK_LINE(221)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,remove,return )

::org::flixel::FlxBasic FlxLayer_obj::addObjectToLayer( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxLayer::addObjectToLayer","org/flixel/FlxLayer.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(178)
	::org::flixel::FlxLayer objLayer = Object->get_layer();		HX_STACK_VAR(objLayer,"objLayer");
	HX_STACK_LINE(179)
	if (((objLayer != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(181)
		if (((objLayer != null()))){
			HX_STACK_LINE(182)
			objLayer->remove(Object);
		}
		HX_STACK_LINE(185)
		(this->_numObjects)++;
		HX_STACK_LINE(186)
		Object->set_layer(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(189)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,addObjectToLayer,return )

::org::flixel::FlxBasic FlxLayer_obj::add( ::org::flixel::FlxBasic Object){
	HX_STACK_PUSH("FlxLayer::add","org/flixel/FlxLayer.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(141)
	if (((this->_atlas == null()))){
		HX_STACK_LINE(143)
		::String key = Object->get_bitmapDataKey();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(144)
		::neash::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(Object->get_bitmapDataKey());		HX_STACK_VAR(bm,"bm");
		HX_STACK_LINE(145)
		if (((bm == null()))){
			HX_STACK_LINE(145)
			return null();
		}
		HX_STACK_LINE(146)
		this->set_atlas(::org::flixel::system::layer::Atlas_obj::getAtlas(key,bm,null()));
	}
	HX_STACK_LINE(149)
	if ((::Std_obj::is(Object,hx::ClassOf< ::org::flixel::FlxGroup >()))){
		HX_STACK_LINE(151)
		::org::flixel::FlxGroup grp = hx::TCast< org::flixel::FlxGroup >::cast(Object);		HX_STACK_VAR(grp,"grp");
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::FlxBasic > _g1 = grp->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(152)
			while(((_g < _g1->length))){
				HX_STACK_LINE(152)
				::org::flixel::FlxBasic basic = _g1->__get(_g);		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(152)
				++(_g);
				HX_STACK_LINE(154)
				if (((basic != null()))){
					HX_STACK_LINE(155)
					this->add(basic);
				}
			}
		}
		HX_STACK_LINE(160)
		Object->set_layer(hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(162)
		if ((::Std_obj::is(Object,hx::ClassOf< ::org::flixel::FlxText >()))){
			HX_STACK_LINE(163)
			return Object;
		}
		else{
			HX_STACK_LINE(168)
			this->addObjectToLayer(Object);
		}
	}
	HX_STACK_LINE(172)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,add,return )

Void FlxLayer_obj::destroy( hx::Null< bool >  __o_total){
bool total = __o_total.Default(false);
	HX_STACK_PUSH("FlxLayer::destroy","org/flixel/FlxLayer.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(total,"total");
{
		HX_STACK_LINE(120)
		if (((bool(total) && bool((this->_atlas != null()))))){
			HX_STACK_LINE(121)
			this->_atlas->destroy();
		}
		HX_STACK_LINE(125)
		this->_atlas = null();
		HX_STACK_LINE(126)
		this->_tileSheet = null();
		HX_STACK_LINE(127)
		this->drawData = null();
		HX_STACK_LINE(128)
		this->positionData = null();
		HX_STACK_LINE(129)
		this->onStage = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,destroy,(void))

Void FlxLayer_obj::updateFlags( ){
{
		HX_STACK_PUSH("FlxLayer::updateFlags","org/flixel/FlxLayer.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(106)
		this->flags = (int)24;
		HX_STACK_LINE(107)
		if ((this->isColored)){
			HX_STACK_LINE(108)
			hx::OrEq(this->flags,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLayer_obj,updateFlags,(void))

bool FlxLayer_obj::set_isColored( bool value){
	HX_STACK_PUSH("FlxLayer::set_isColored","org/flixel/FlxLayer.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(95)
	this->isColored = value;
	HX_STACK_LINE(96)
	this->updateFlags();
	HX_STACK_LINE(97)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,set_isColored,return )

Void FlxLayer_obj::redrawNode( ::org::flixel::system::layer::Node node){
{
		HX_STACK_PUSH("FlxLayer::redrawNode","org/flixel/FlxLayer.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(87)
		this->_atlas->redrawNode(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,redrawNode,(void))

Void FlxLayer_obj::redrawAtlas( ){
{
		HX_STACK_PUSH("FlxLayer::redrawAtlas","org/flixel/FlxLayer.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(78)
		this->_atlas->redrawAll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxLayer_obj,redrawAtlas,(void))

::Hash FlxLayer_obj::_layerCache;

::org::flixel::FlxLayer FlxLayer_obj::fromBitmapData( ::String Key,::neash::display::BitmapData BmData,hx::Null< bool >  __o_Unique){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("FlxLayer::fromBitmapData","org/flixel/FlxLayer.hx",418);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_ARG(BmData,"BmData");
	HX_STACK_ARG(Unique,"Unique");
{
		HX_STACK_LINE(419)
		::org::flixel::FlxLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(420)
		bool alreadyExist = ::org::flixel::FlxLayer_obj::checkCache(Key);		HX_STACK_VAR(alreadyExist,"alreadyExist");
		HX_STACK_LINE(421)
		if (((bool(Unique) || bool((alreadyExist == false))))){
			HX_STACK_LINE(423)
			::String LayerKey = Key;		HX_STACK_VAR(LayerKey,"LayerKey");
			HX_STACK_LINE(424)
			if (((bool(Unique) && bool(alreadyExist)))){
				HX_STACK_LINE(426)
				int i = (int)1;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(427)
				while((::org::flixel::FlxLayer_obj::checkCache((Key + i)))){
					HX_STACK_LINE(428)
					(i)++;
				}
				HX_STACK_LINE(431)
				LayerKey = (Key + i);
			}
			HX_STACK_LINE(434)
			layer = ::org::flixel::FlxLayer_obj::__new(LayerKey);
			HX_STACK_LINE(435)
			layer->set_atlas(::org::flixel::system::layer::Atlas_obj::getAtlas(Key,BmData,Unique));
		}
		else{
			HX_STACK_LINE(438)
			layer = ::org::flixel::FlxLayer_obj::_layerCache->get(Key);
		}
		HX_STACK_LINE(442)
		return layer;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxLayer_obj,fromBitmapData,return )

::org::flixel::FlxLayer FlxLayer_obj::fromLayer( ::org::flixel::FlxLayer Layer,::String Key){
	HX_STACK_PUSH("FlxLayer::fromLayer","org/flixel/FlxLayer.hx",452);
	HX_STACK_ARG(Layer,"Layer");
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(453)
	bool alreadyExist = ::org::flixel::FlxLayer_obj::checkCache(Key);		HX_STACK_VAR(alreadyExist,"alreadyExist");
	HX_STACK_LINE(454)
	if ((alreadyExist)){
		HX_STACK_LINE(456)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(457)
		while((::org::flixel::FlxLayer_obj::checkCache((Key + i)))){
			HX_STACK_LINE(458)
			(i)++;
		}
		HX_STACK_LINE(461)
		Key = (Key + i);
	}
	HX_STACK_LINE(464)
	::org::flixel::FlxLayer layer = ::org::flixel::FlxLayer_obj::__new(Key);		HX_STACK_VAR(layer,"layer");
	HX_STACK_LINE(465)
	layer->set_atlas(Layer->get_atlas());
	HX_STACK_LINE(466)
	return ::org::flixel::FlxLayer_obj::__new(Key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxLayer_obj,fromLayer,return )

::org::flixel::system::layer::Atlas FlxLayer_obj::createAtlas( int Width,int Height,::String Key){
	HX_STACK_PUSH("FlxLayer::createAtlas","org/flixel/FlxLayer.hx",477);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(478)
	::String AtlasKey = ::org::flixel::system::layer::Atlas_obj::getUniqueKey(Key);		HX_STACK_VAR(AtlasKey,"AtlasKey");
	HX_STACK_LINE(479)
	return ::org::flixel::system::layer::Atlas_obj::__new(AtlasKey,Width,Height,null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxLayer_obj,createAtlas,return )

bool FlxLayer_obj::checkCache( ::String Key){
	HX_STACK_PUSH("FlxLayer::checkCache","org/flixel/FlxLayer.hx",488);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(488)
	return ::org::flixel::FlxLayer_obj::_layerCache->exists(Key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,checkCache,return )

::org::flixel::FlxLayer FlxLayer_obj::getLayer( ::String Key){
	HX_STACK_PUSH("FlxLayer::getLayer","org/flixel/FlxLayer.hx",498);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(498)
	return ::org::flixel::FlxLayer_obj::_layerCache->get(Key);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxLayer_obj,getLayer,return )

Void FlxLayer_obj::removeLayerFromCache( ::org::flixel::FlxLayer Layer,hx::Null< bool >  __o_total){
bool total = __o_total.Default(false);
	HX_STACK_PUSH("FlxLayer::removeLayerFromCache","org/flixel/FlxLayer.hx",508);
	HX_STACK_ARG(Layer,"Layer");
	HX_STACK_ARG(total,"total");
{
		HX_STACK_LINE(509)
		::org::flixel::FlxLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(510)
		::String removeKey = null();		HX_STACK_VAR(removeKey,"removeKey");
		HX_STACK_LINE(511)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::FlxLayer_obj::_layerCache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(513)
				layer = ::org::flixel::FlxLayer_obj::_layerCache->get(key);
				HX_STACK_LINE(514)
				if (((layer == Layer))){
					HX_STACK_LINE(516)
					removeKey = key;
					HX_STACK_LINE(517)
					break;
				}
			}
;
		}
		HX_STACK_LINE(521)
		if (((bool((bool((removeKey != null())) && bool(!(Layer->onStage)))) && bool((Layer->_numObjects == (int)0))))){
			HX_STACK_LINE(523)
			::org::flixel::FlxLayer_obj::_layerCache->remove(removeKey);
			HX_STACK_LINE(524)
			Layer->destroy(total);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxLayer_obj,removeLayerFromCache,(void))

Void FlxLayer_obj::clearLayerCache( ){
{
		HX_STACK_PUSH("FlxLayer::clearLayerCache","org/flixel/FlxLayer.hx",532);
		HX_STACK_LINE(533)
		::org::flixel::FlxLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(534)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::org::flixel::FlxLayer_obj::_layerCache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(536)
				layer = ::org::flixel::FlxLayer_obj::_layerCache->get(key);
				HX_STACK_LINE(537)
				if (((bool(layer->onStage) || bool((layer->get_atlas() != null()))))){
					HX_STACK_LINE(538)
					layer->destroy(true);
				}
				HX_STACK_LINE(541)
				::org::flixel::FlxLayer_obj::_layerCache->remove(key);
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxLayer_obj,clearLayerCache,(void))


FlxLayer_obj::FlxLayer_obj()
{
}

void FlxLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxLayer);
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_MEMBER_NAME(isColored,"isColored");
	HX_MARK_MEMBER_NAME(onStage,"onStage");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(positionData,"positionData");
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(_blend,"_blend");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(_numObjects,"_numObjects");
	HX_MARK_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	HX_MARK_END_CLASS();
}

void FlxLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
	HX_VISIT_MEMBER_NAME(isColored,"isColored");
	HX_VISIT_MEMBER_NAME(onStage,"onStage");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(positionData,"positionData");
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(_blend,"_blend");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(_numObjects,"_numObjects");
	HX_VISIT_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
}

Dynamic FlxLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return inCallProp ? get_blend() : blend; }
		if (HX_FIELD_EQ(inName,"atlas") ) { return inCallProp ? get_atlas() : atlas; }
		if (HX_FIELD_EQ(inName,"flags") ) { return flags; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_blend") ) { return _blend; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"hasImage") ) { return hasImage_dyn(); }
		if (HX_FIELD_EQ(inName,"addImage") ) { return addImage_dyn(); }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromLayer") ) { return fromLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_atlas") ) { return get_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"isColored") ) { return isColored; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawNode") ) { return redrawNode_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { return _tileSheet; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerCache") ) { return _layerCache; }
		if (HX_FIELD_EQ(inName,"createAtlas") ) { return createAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFlags") ) { return updateFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"redrawAtlas") ) { return redrawAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"_numObjects") ) { return _numObjects; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"positionData") ) { return positionData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearDrawData") ) { return clearDrawData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isColored") ) { return set_isColored_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearLayerCache") ) { return clearLayerCache_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addObjectToLayer") ) { return addObjectToLayer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeLayerFromCache") ) { return removeLayerFromCache_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeObjectFromLayer") ) { return removeObjectFromLayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp) return set_blend(inValue);blend=inValue.Cast< ::neash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { if (inCallProp) return set_atlas(inValue);atlas=inValue.Cast< ::org::flixel::system::layer::Atlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_blend") ) { _blend=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::org::flixel::system::layer::Atlas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStage") ) { onStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Array< Float > > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isColored") ) { if (inCallProp) return set_isColored(inValue);isColored=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { _tileSheet=inValue.Cast< ::neash::display::Tilesheet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerCache") ) { _layerCache=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numObjects") ) { _numObjects=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"positionData") ) { positionData=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("atlas"));
	outFields->push(HX_CSTRING("isColored"));
	outFields->push(HX_CSTRING("onStage"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("positionData"));
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("_blend"));
	outFields->push(HX_CSTRING("flags"));
	outFields->push(HX_CSTRING("_numObjects"));
	outFields->push(HX_CSTRING("_tileSheet"));
	outFields->push(HX_CSTRING("_atlas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_layerCache"),
	HX_CSTRING("fromBitmapData"),
	HX_CSTRING("fromLayer"),
	HX_CSTRING("createAtlas"),
	HX_CSTRING("checkCache"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("removeLayerFromCache"),
	HX_CSTRING("clearLayerCache"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_atlas"),
	HX_CSTRING("get_atlas"),
	HX_CSTRING("set_blend"),
	HX_CSTRING("get_blend"),
	HX_CSTRING("blend"),
	HX_CSTRING("atlas"),
	HX_CSTRING("clearDrawData"),
	HX_CSTRING("render"),
	HX_CSTRING("hasImage"),
	HX_CSTRING("addImage"),
	HX_CSTRING("removeObjectFromLayer"),
	HX_CSTRING("remove"),
	HX_CSTRING("addObjectToLayer"),
	HX_CSTRING("add"),
	HX_CSTRING("destroy"),
	HX_CSTRING("updateFlags"),
	HX_CSTRING("set_isColored"),
	HX_CSTRING("isColored"),
	HX_CSTRING("redrawNode"),
	HX_CSTRING("redrawAtlas"),
	HX_CSTRING("onStage"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("positionData"),
	HX_CSTRING("drawData"),
	HX_CSTRING("_blend"),
	HX_CSTRING("flags"),
	HX_CSTRING("_numObjects"),
	HX_CSTRING("_tileSheet"),
	HX_CSTRING("_atlas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxLayer_obj::_layerCache,"_layerCache");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxLayer_obj::_layerCache,"_layerCache");
};

Class FlxLayer_obj::__mClass;

void FlxLayer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxLayer"), hx::TCanCast< FlxLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxLayer_obj::__boot()
{
	_layerCache= ::Hash_obj::__new();
}

} // end namespace org
} // end namespace flixel
