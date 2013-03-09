#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
namespace org{
namespace flixel{

Void FlxState_obj::__construct()
{
HX_STACK_PUSH("FlxState::new","org/flixel/FlxState.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct(null());
	HX_STACK_LINE(22)
	this->_layers = Array_obj< ::org::flixel::FlxLayer >::__new();
}
;
	return null();
}

FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new()
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct();
	return result;}

::org::flixel::FlxLayer FlxState_obj::getLayerFor( ::String KeyInBitmapCache){
	HX_STACK_PUSH("FlxState::getLayerFor","org/flixel/FlxState.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(KeyInBitmapCache,"KeyInBitmapCache");
	HX_STACK_LINE(211)
	::org::flixel::FlxLayer layer = ::org::flixel::FlxLayer_obj::getLayer(KeyInBitmapCache);		HX_STACK_VAR(layer,"layer");
	HX_STACK_LINE(212)
	if (((layer != null()))){
		HX_STACK_LINE(214)
		if ((!(layer->onStage))){
			HX_STACK_LINE(214)
			this->addLayer(layer);
		}
		HX_STACK_LINE(215)
		return layer;
	}
	HX_STACK_LINE(218)
	::neash::display::BitmapData bm = ::org::flixel::FlxG_obj::_cache->get(KeyInBitmapCache);		HX_STACK_VAR(bm,"bm");
	HX_STACK_LINE(219)
	if (((bm != null()))){
		HX_STACK_LINE(220)
		return this->addLayer(::org::flixel::FlxLayer_obj::fromBitmapData(KeyInBitmapCache,bm,null()));
	}
	else{
		HX_STACK_LINE(224)
		hx::Throw ((HX_CSTRING("There isn't bitmapdata in cache with key: ") + KeyInBitmapCache));
	}
	HX_STACK_LINE(230)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,getLayerFor,return )

::org::flixel::FlxLayer FlxState_obj::removeLayer( ::org::flixel::FlxLayer Layer){
	HX_STACK_PUSH("FlxState::removeLayer","org/flixel/FlxState.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Layer,"Layer");
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxState_obj *__this,::org::flixel::FlxLayer &Layer){
			HX_STACK_PUSH("*::closure","org/flixel/FlxState.hx",192);
			{
				HX_STACK_LINE(192)
				Dynamic array = __this->_layers;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(192)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(192)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(192)
				{
					HX_STACK_LINE(192)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(192)
					while(((_g < len))){
						HX_STACK_LINE(192)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(192)
						if (((array->__GetItem(i) == Layer))){
							HX_STACK_LINE(192)
							index = i;
						}
					}
				}
				HX_STACK_LINE(192)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	int pos = _Function_1_1::Block(this,Layer);		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(193)
	if (((pos >= (int)0))){
		HX_STACK_LINE(195)
		this->_layers->splice(pos,(int)1);
		HX_STACK_LINE(196)
		Layer->onStage = false;
		HX_STACK_LINE(197)
		return Layer;
	}
	HX_STACK_LINE(200)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,removeLayer,return )

::org::flixel::FlxLayer FlxState_obj::addLayer( ::org::flixel::FlxLayer Layer){
	HX_STACK_PUSH("FlxState::addLayer","org/flixel/FlxState.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Layer,"Layer");
	HX_STACK_LINE(177)
	this->removeLayer(Layer);
	HX_STACK_LINE(178)
	this->_layers->push(Layer);
	HX_STACK_LINE(179)
	Layer->onStage = true;
	HX_STACK_LINE(181)
	return Layer;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,addLayer,return )

Void FlxState_obj::swapLayersAt( int id1,int id2){
{
		HX_STACK_PUSH("FlxState::swapLayersAt","org/flixel/FlxState.hx",161);
		HX_STACK_THIS(this);
		HX_STACK_ARG(id1,"id1");
		HX_STACK_ARG(id2,"id2");
		HX_STACK_LINE(162)
		int numLayers = this->_layers->length;		HX_STACK_VAR(numLayers,"numLayers");
		HX_STACK_LINE(163)
		if (((bool((bool((bool((bool((id1 < (int)0)) || bool((id2 < (int)0)))) || bool((id1 == id2)))) || bool((id1 >= numLayers)))) || bool((id2 >= numLayers))))){
			HX_STACK_LINE(163)
			return null();
		}
		HX_STACK_LINE(164)
		::org::flixel::FlxLayer tempLayer = this->_layers->__get(id1);		HX_STACK_VAR(tempLayer,"tempLayer");
		HX_STACK_LINE(165)
		this->_layers[id1] = this->_layers->__get(id2);
		HX_STACK_LINE(166)
		this->_layers[id2] = tempLayer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,swapLayersAt,(void))

Void FlxState_obj::swapLayers( ::org::flixel::FlxLayer layer1,::org::flixel::FlxLayer layer2){
{
		HX_STACK_PUSH("FlxState::swapLayers","org/flixel/FlxState.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(layer1,"layer1");
		HX_STACK_ARG(layer2,"layer2");
		HX_STACK_LINE(149)
		if (((layer1 == layer2))){
			HX_STACK_LINE(149)
			return null();
		}
		struct _Function_1_1{
			inline static int Block( ::org::flixel::FlxState_obj *__this,::org::flixel::FlxLayer &layer1){
				HX_STACK_PUSH("*::closure","org/flixel/FlxState.hx",150);
				{
					HX_STACK_LINE(150)
					Dynamic array = __this->_layers;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(150)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(150)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(150)
						while(((_g < len))){
							HX_STACK_LINE(150)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(150)
							if (((array->__GetItem(i) == layer1))){
								HX_STACK_LINE(150)
								index = i;
							}
						}
					}
					HX_STACK_LINE(150)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(150)
		int id1 = _Function_1_1::Block(this,layer1);		HX_STACK_VAR(id1,"id1");
		struct _Function_1_2{
			inline static int Block( ::org::flixel::FlxState_obj *__this,::org::flixel::FlxLayer &layer2){
				HX_STACK_PUSH("*::closure","org/flixel/FlxState.hx",151);
				{
					HX_STACK_LINE(151)
					Dynamic array = __this->_layers;		HX_STACK_VAR(array,"array");
					int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
					HX_STACK_LINE(151)
					int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(151)
					int index = (int)-1;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(151)
					{
						HX_STACK_LINE(151)
						int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(151)
						while(((_g < len))){
							HX_STACK_LINE(151)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(151)
							if (((array->__GetItem(i) == layer2))){
								HX_STACK_LINE(151)
								index = i;
							}
						}
					}
					HX_STACK_LINE(151)
					return index;
				}
				return null();
			}
		};
		HX_STACK_LINE(151)
		int id2 = _Function_1_2::Block(this,layer2);		HX_STACK_VAR(id2,"id2");
		HX_STACK_LINE(152)
		if (((bool((id1 < (int)0)) || bool((id2 < (int)0))))){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(154)
		this->swapLayersAt(id1,id2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,swapLayers,(void))

::org::flixel::FlxLayer FlxState_obj::removeLayerAt( int index){
	HX_STACK_PUSH("FlxState::removeLayerAt","org/flixel/FlxState.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(136)
	::org::flixel::FlxLayer layer = this->getLayerAt(index);		HX_STACK_VAR(layer,"layer");
	HX_STACK_LINE(137)
	if (((layer != null()))){
		HX_STACK_LINE(138)
		return this->removeLayer(layer);
	}
	HX_STACK_LINE(141)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,removeLayerAt,return )

::org::flixel::FlxLayer FlxState_obj::addLayerAt( ::org::flixel::FlxLayer layer,int index){
	HX_STACK_PUSH("FlxState::addLayerAt","org/flixel/FlxState.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(101)
	int layerIndex = this->getLayerIndex(layer);		HX_STACK_VAR(layerIndex,"layerIndex");
	HX_STACK_LINE(102)
	if (((layerIndex == index))){
		HX_STACK_LINE(103)
		return layer;
	}
	HX_STACK_LINE(107)
	int maxIndex = this->getMaxIndex();		HX_STACK_VAR(maxIndex,"maxIndex");
	HX_STACK_LINE(108)
	if (((layerIndex >= (int)0))){
		HX_STACK_LINE(110)
		this->removeLayer(layer);
		HX_STACK_LINE(111)
		if (((index > maxIndex))){
			HX_STACK_LINE(112)
			return this->addLayer(layer);
		}
	}
	else{
		HX_STACK_LINE(116)
		if (((index > maxIndex))){
			HX_STACK_LINE(117)
			return this->addLayer(layer);
		}
	}
	HX_STACK_LINE(121)
	if (((index < (int)0))){
		HX_STACK_LINE(122)
		index = (int)0;
	}
	HX_STACK_LINE(126)
	this->_layers->insert(index,layer);
	HX_STACK_LINE(127)
	layer->onStage = true;
	HX_STACK_LINE(128)
	return layer;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,addLayerAt,return )

int FlxState_obj::getMaxIndex( ){
	HX_STACK_PUSH("FlxState::getMaxIndex","org/flixel/FlxState.hx",92);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	return (this->_layers->length - (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,getMaxIndex,return )

int FlxState_obj::getLayerIndex( ::org::flixel::FlxLayer layer){
	HX_STACK_PUSH("FlxState::getLayerIndex","org/flixel/FlxState.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(layer,"layer");
	HX_STACK_LINE(84)
	if (((bool((layer == null())) || bool(!(layer->onStage))))){
		HX_STACK_LINE(84)
		return (int)-1;
	}
	struct _Function_1_1{
		inline static int Block( ::org::flixel::FlxState_obj *__this,::org::flixel::FlxLayer &layer){
			HX_STACK_PUSH("*::closure","org/flixel/FlxState.hx",85);
			{
				HX_STACK_LINE(85)
				Dynamic array = __this->_layers;		HX_STACK_VAR(array,"array");
				int fromIndex = (int)0;		HX_STACK_VAR(fromIndex,"fromIndex");
				HX_STACK_LINE(85)
				int len = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(85)
				int index = (int)-1;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					int _g = fromIndex;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(85)
					while(((_g < len))){
						HX_STACK_LINE(85)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(85)
						if (((array->__GetItem(i) == layer))){
							HX_STACK_LINE(85)
							index = i;
						}
					}
				}
				HX_STACK_LINE(85)
				return index;
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	return _Function_1_1::Block(this,layer);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,getLayerIndex,return )

::org::flixel::FlxLayer FlxState_obj::getLayerAt( int index){
	HX_STACK_PUSH("FlxState::getLayerAt","org/flixel/FlxState.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(72)
	if (((bool((index < (int)0)) || bool((index > this->getMaxIndex()))))){
		HX_STACK_LINE(73)
		return null();
	}
	HX_STACK_LINE(76)
	return this->_layers->__get(index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,getLayerAt,return )

Void FlxState_obj::create( ){
{
		HX_STACK_PUSH("FlxState::create","org/flixel/FlxState.hx",63);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))

Void FlxState_obj::clearAllDrawData( ){
{
		HX_STACK_PUSH("FlxState::clearAllDrawData","org/flixel/FlxState.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		int numCameras = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(numCameras,"numCameras");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::FlxLayer > _g1 = this->_layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			while(((_g < _g1->length))){
				HX_STACK_LINE(51)
				::org::flixel::FlxLayer layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(51)
				++(_g);
				HX_STACK_LINE(53)
				layer->clearDrawData(numCameras);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,clearAllDrawData,(void))

Void FlxState_obj::draw( ){
{
		HX_STACK_PUSH("FlxState::draw","org/flixel/FlxState.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		this->super::draw();
		HX_STACK_LINE(40)
		::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(41)
		int numCameras = ::org::flixel::FlxG_obj::cameras->length;		HX_STACK_VAR(numCameras,"numCameras");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::FlxLayer > _g1 = this->_layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			while(((_g < _g1->length))){
				HX_STACK_LINE(42)
				::org::flixel::FlxLayer layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(42)
				++(_g);
				HX_STACK_LINE(44)
				layer->render(numCameras);
			}
		}
	}
return null();
}


Void FlxState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxState::destroy","org/flixel/FlxState.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(27)
		this->super::destroy();
		HX_STACK_LINE(28)
		::org::flixel::FlxLayer_obj::clearLayerCache();
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::org::flixel::FlxLayer > _g1 = this->_layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			while(((_g < _g1->length))){
				HX_STACK_LINE(29)
				::org::flixel::FlxLayer layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(29)
				++(_g);
				HX_STACK_LINE(31)
				layer->destroy(true);
			}
		}
		HX_STACK_LINE(33)
		this->_layers = null();
	}
return null();
}



FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addLayer") ) { return addLayer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"swapLayers") ) { return swapLayers_dyn(); }
		if (HX_FIELD_EQ(inName,"addLayerAt") ) { return addLayerAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerAt") ) { return getLayerAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLayerFor") ) { return getLayerFor_dyn(); }
		if (HX_FIELD_EQ(inName,"removeLayer") ) { return removeLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getMaxIndex") ) { return getMaxIndex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapLayersAt") ) { return swapLayersAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeLayerAt") ) { return removeLayerAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerIndex") ) { return getLayerIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearAllDrawData") ) { return clearAllDrawData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< Array< ::org::flixel::FlxLayer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_layers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getLayerFor"),
	HX_CSTRING("removeLayer"),
	HX_CSTRING("addLayer"),
	HX_CSTRING("swapLayersAt"),
	HX_CSTRING("swapLayers"),
	HX_CSTRING("removeLayerAt"),
	HX_CSTRING("addLayerAt"),
	HX_CSTRING("getMaxIndex"),
	HX_CSTRING("getLayerIndex"),
	HX_CSTRING("getLayerAt"),
	HX_CSTRING("create"),
	HX_CSTRING("clearAllDrawData"),
	HX_CSTRING("draw"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_layers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxState_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
