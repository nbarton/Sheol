#include <hxcpp.h>

#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBackdrop
#include <org/flixel/FlxBackdrop.h>
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
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxBackdrop_obj::__construct(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{
HX_STACK_PUSH("FlxBackdrop::new","org/flixel/FlxBackdrop.hx",16);
Float scrollX = __o_scrollX.Default(1);
Float scrollY = __o_scrollY.Default(1);
bool repeatX = __o_repeatX.Default(true);
bool repeatY = __o_repeatY.Default(true);
{
	HX_STACK_LINE(27)
	this->_numTiles = (int)0;
	HX_STACK_LINE(42)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(44)
	::neash::display::BitmapData data = ::org::flixel::FlxG_obj::addBitmap(graphic,null(),null(),null(),null(),null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(45)
	int w = data->nmeGetWidth();		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(46)
	int h = data->nmeGetHeight();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(47)
	if ((repeatX)){
		HX_STACK_LINE(47)
		hx::AddEq(w,::org::flixel::FlxG_obj::width);
	}
	HX_STACK_LINE(48)
	if ((repeatY)){
		HX_STACK_LINE(48)
		hx::AddEq(h,::org::flixel::FlxG_obj::height);
	}
	HX_STACK_LINE(53)
	this->_ppoint = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(55)
	this->_scrollW = data->nmeGetWidth();
	HX_STACK_LINE(56)
	this->_scrollH = data->nmeGetHeight();
	HX_STACK_LINE(57)
	this->_repeatX = repeatX;
	HX_STACK_LINE(58)
	this->_repeatY = repeatY;
	HX_STACK_LINE(61)
	this->_bitmapDataKey = ::org::flixel::FlxG_obj::_lastBitmapDataKey;
	HX_STACK_LINE(62)
	this->_tileInfo = Array_obj< Float >::__new();
	HX_STACK_LINE(63)
	this->updateLayerInfo(null());
	HX_STACK_LINE(64)
	this->_numTiles = (int)0;
	HX_STACK_LINE(67)
	while(((this->_ppoint->y < (h + data->nmeGetHeight())))){
		HX_STACK_LINE(69)
		while(((this->_ppoint->x < (w + data->nmeGetWidth())))){
			HX_STACK_LINE(74)
			this->_tileInfo->push(this->_ppoint->x);
			HX_STACK_LINE(75)
			this->_tileInfo->push(this->_ppoint->y);
			HX_STACK_LINE(76)
			(this->_numTiles)++;
			HX_STACK_LINE(78)
			hx::AddEq(this->_ppoint->x,data->nmeGetWidth());
		}
		HX_STACK_LINE(80)
		this->_ppoint->x = (int)0;
		HX_STACK_LINE(81)
		hx::AddEq(this->_ppoint->y,data->nmeGetHeight());
	}
	HX_STACK_LINE(84)
	this->scrollFactor->x = scrollX;
	HX_STACK_LINE(85)
	this->scrollFactor->y = scrollY;
}
;
	return null();
}

FlxBackdrop_obj::~FlxBackdrop_obj() { }

Dynamic FlxBackdrop_obj::__CreateEmpty() { return  new FlxBackdrop_obj; }
hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new(Dynamic graphic,hx::Null< Float >  __o_scrollX,hx::Null< Float >  __o_scrollY,hx::Null< bool >  __o_repeatX,hx::Null< bool >  __o_repeatY)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(graphic,__o_scrollX,__o_scrollY,__o_repeatX,__o_repeatY);
	return result;}

Dynamic FlxBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxBackdrop_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxBackdrop::updateFrameData","org/flixel/FlxBackdrop.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_LINE(205)
		if (((this->_node != null()))){
			HX_STACK_LINE(208)
			this->_tileID = this->_node->addTileRect(::neash::geom::Rectangle_obj::__new((int)0,(int)0,this->_scrollW,this->_scrollH),::neash::geom::Point_obj::__new(null(),null()));
		}
	}
return null();
}


Void FlxBackdrop_obj::draw( ){
{
		HX_STACK_PUSH("FlxBackdrop::draw","org/flixel/FlxBackdrop.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		if (((this->cameras == null()))){
			HX_STACK_LINE(106)
			this->cameras = ::org::flixel::FlxG_obj::cameras;
		}
		HX_STACK_LINE(109)
		::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(110)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = l;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			while(((_g1 < _g))){
				HX_STACK_LINE(112)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(114)
				camera = this->cameras->__get(i);
				HX_STACK_LINE(116)
				if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
					HX_STACK_LINE(117)
					continue;
				}
				HX_STACK_LINE(122)
				if ((this->_repeatX)){
					HX_STACK_LINE(124)
					this->_ppoint->x = hx::Mod(((this->x - (camera->scroll->x * this->scrollFactor->x))),this->_scrollW);
					HX_STACK_LINE(125)
					if (((this->_ppoint->x > (int)0))){
						HX_STACK_LINE(125)
						hx::SubEq(this->_ppoint->x,this->_scrollW);
					}
				}
				else{
					HX_STACK_LINE(128)
					this->_ppoint->x = (this->x - (camera->scroll->x * this->scrollFactor->x));
				}
				HX_STACK_LINE(133)
				if ((this->_repeatY)){
					HX_STACK_LINE(135)
					this->_ppoint->y = hx::Mod(((this->y - (camera->scroll->y * this->scrollFactor->y))),this->_scrollH);
					HX_STACK_LINE(136)
					if (((this->_ppoint->y > (int)0))){
						HX_STACK_LINE(136)
						hx::SubEq(this->_ppoint->y,this->_scrollH);
					}
				}
				else{
					HX_STACK_LINE(139)
					this->_ppoint->y = (this->y - (camera->scroll->y * this->scrollFactor->y));
				}
				HX_STACK_LINE(147)
				if (((bool((this->_layer == null())) || bool((this->_layer->onStage == false))))){
					HX_STACK_LINE(148)
					return null();
				}
				HX_STACK_LINE(152)
				Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
				HX_STACK_LINE(153)
				int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
				HX_STACK_LINE(155)
				currDrawData = this->_layer->drawData->__get(camera->ID);
				HX_STACK_LINE(156)
				currIndex = this->_layer->positionData->__get(camera->ID);
				HX_STACK_LINE(158)
				int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
				HX_STACK_LINE(159)
				Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
				HX_STACK_LINE(160)
				Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
				HX_STACK_LINE(162)
				Float redMult = (int)1;		HX_STACK_VAR(redMult,"redMult");
				HX_STACK_LINE(163)
				Float greenMult = (int)1;		HX_STACK_VAR(greenMult,"greenMult");
				HX_STACK_LINE(164)
				Float blueMult = (int)1;		HX_STACK_VAR(blueMult,"blueMult");
				HX_STACK_LINE(166)
				bool isColoredCamera = (camera->color < (int)16777215);		HX_STACK_VAR(isColoredCamera,"isColoredCamera");
				HX_STACK_LINE(167)
				if ((isColoredCamera)){
					HX_STACK_LINE(169)
					redMult = camera->red;
					HX_STACK_LINE(170)
					greenMult = camera->green;
					HX_STACK_LINE(171)
					blueMult = camera->blue;
				}
				HX_STACK_LINE(174)
				{
					HX_STACK_LINE(174)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_numTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(174)
					while(((_g3 < _g2))){
						HX_STACK_LINE(174)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(176)
						currPosInArr = (j * (int)2);
						HX_STACK_LINE(177)
						currTileX = this->_tileInfo->__get(currPosInArr);
						HX_STACK_LINE(178)
						currTileY = this->_tileInfo->__get((currPosInArr + (int)1));
						HX_STACK_LINE(180)
						currDrawData[(currIndex)++] = (this->_ppoint->x + currTileX);
						HX_STACK_LINE(181)
						currDrawData[(currIndex)++] = (this->_ppoint->y + currTileY);
						HX_STACK_LINE(182)
						currDrawData[(currIndex)++] = this->_tileID;
						HX_STACK_LINE(184)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(185)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(186)
						currDrawData[(currIndex)++] = (int)0;
						HX_STACK_LINE(187)
						currDrawData[(currIndex)++] = (int)1;
						HX_STACK_LINE(189)
						if (((bool(this->_layer->isColored) || bool(isColoredCamera)))){
							HX_STACK_LINE(191)
							currDrawData[(currIndex)++] = redMult;
							HX_STACK_LINE(192)
							currDrawData[(currIndex)++] = greenMult;
							HX_STACK_LINE(193)
							currDrawData[(currIndex)++] = blueMult;
						}
						HX_STACK_LINE(196)
						currDrawData[(currIndex)++] = 1.0;
					}
				}
				HX_STACK_LINE(199)
				this->_layer->positionData[camera->ID] = currIndex;
			}
		}
	}
return null();
}


Void FlxBackdrop_obj::destroy( ){
{
		HX_STACK_PUSH("FlxBackdrop::destroy","org/flixel/FlxBackdrop.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		this->_tileInfo = null();
		HX_STACK_LINE(99)
		this->_ppoint = null();
		HX_STACK_LINE(100)
		this->super::destroy();
	}
return null();
}



FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_tileID,"_tileID");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_tileID,"_tileID");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBackdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileID") ) { return _tileID; }
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return _ppoint; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return _scrollH; }
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return _scrollW; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return _tileInfo; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_tileID") ) { _tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_numTiles"));
	outFields->push(HX_CSTRING("_tileInfo"));
	outFields->push(HX_CSTRING("_tileID"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_scrollH"));
	outFields->push(HX_CSTRING("_scrollW"));
	outFields->push(HX_CSTRING("_ppoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("draw"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_numTiles"),
	HX_CSTRING("_tileInfo"),
	HX_CSTRING("_tileID"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_scrollH"),
	HX_CSTRING("_scrollW"),
	HX_CSTRING("_ppoint"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxBackdrop"), hx::TCanCast< FlxBackdrop_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxBackdrop_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
