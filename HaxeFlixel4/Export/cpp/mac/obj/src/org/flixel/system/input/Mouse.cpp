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
#ifndef INCLUDED_neash_display_Bitmap
#include <neash/display/Bitmap.h>
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
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_PixelSnapping
#include <neash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
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
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_replay_MouseRecord
#include <org/flixel/system/replay/MouseRecord.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace input{

Void Mouse_obj::__construct(::neash::display::Sprite CursorContainer)
{
HX_STACK_PUSH("Mouse::new","org/flixel/system/input/Mouse.hx",74);
{
	HX_STACK_LINE(75)
	super::__construct(null(),null());
	HX_STACK_LINE(76)
	this->_cursorContainer = CursorContainer;
	HX_STACK_LINE(77)
	this->_lastX = this->screenX = (int)0;
	HX_STACK_LINE(78)
	this->_lastY = this->screenY = (int)0;
	HX_STACK_LINE(79)
	this->_lastWheel = this->wheel = (int)0;
	HX_STACK_LINE(80)
	this->_current = (int)0;
	HX_STACK_LINE(81)
	this->_last = (int)0;
	HX_STACK_LINE(82)
	this->_cursor = null();
	HX_STACK_LINE(83)
	this->_point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(84)
	this->_globalScreenPosition = ::org::flixel::FlxPoint_obj::__new(null(),null());
}
;
	return null();
}

Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new(::neash::display::Sprite CursorContainer)
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Mouse_obj::playback( ::org::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_PUSH("Mouse::playback","org/flixel/system/input/Mouse.hx",368);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(369)
		this->_current = Record->button;
		HX_STACK_LINE(370)
		this->wheel = Record->wheel;
		HX_STACK_LINE(371)
		this->_globalScreenPosition->x = Record->x;
		HX_STACK_LINE(372)
		this->_globalScreenPosition->y = Record->y;
		HX_STACK_LINE(373)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,playback,(void))

::org::flixel::system::replay::MouseRecord Mouse_obj::record( ){
	HX_STACK_PUSH("Mouse::record","org/flixel/system/input/Mouse.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_LINE(352)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenPosition->x)) && bool((this->_lastY == this->_globalScreenPosition->y)))) && bool((this->_current == (int)0)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(353)
		return null();
	}
	HX_STACK_LINE(356)
	this->_lastX = ::Math_obj::floor(this->_globalScreenPosition->x);
	HX_STACK_LINE(357)
	this->_lastY = ::Math_obj::floor(this->_globalScreenPosition->y);
	HX_STACK_LINE(358)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(359)
	return ::org::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,record,return )

Void Mouse_obj::handleMouseWheel( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("Mouse::handleMouseWheel","org/flixel/system/input/Mouse.hx",342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(342)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMouseWheel,(void))

Void Mouse_obj::handleMouseUp( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("Mouse::handleMouseUp","org/flixel/system/input/Mouse.hx",331);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(331)
		if (((this->_current > (int)0))){
			HX_STACK_LINE(332)
			this->_current = (int)-1;
		}
		else{
			HX_STACK_LINE(333)
			this->_current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMouseUp,(void))

Void Mouse_obj::handleMouseDown( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("Mouse::handleMouseDown","org/flixel/system/input/Mouse.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(321)
		if (((this->_current > (int)0))){
			HX_STACK_LINE(322)
			this->_current = (int)1;
		}
		else{
			HX_STACK_LINE(323)
			this->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,handleMouseDown,(void))

bool Mouse_obj::justReleased( ){
	HX_STACK_PUSH("Mouse::justReleased","org/flixel/system/input/Mouse.hx",314);
	HX_STACK_THIS(this);
	HX_STACK_LINE(314)
	return (this->_current == (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,justReleased,return )

bool Mouse_obj::justPressed( ){
	HX_STACK_PUSH("Mouse::justPressed","org/flixel/system/input/Mouse.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_LINE(308)
	return (this->_current == (int)2);
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,justPressed,return )

bool Mouse_obj::pressed( ){
	HX_STACK_PUSH("Mouse::pressed","org/flixel/system/input/Mouse.hx",302);
	HX_STACK_THIS(this);
	HX_STACK_LINE(302)
	return (this->_current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,pressed,return )

Void Mouse_obj::reset( ){
{
		HX_STACK_PUSH("Mouse::reset","org/flixel/system/input/Mouse.hx",293);
		HX_STACK_THIS(this);
		HX_STACK_LINE(294)
		this->_current = (int)0;
		HX_STACK_LINE(295)
		this->_last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,reset,(void))

::org::flixel::FlxPoint Mouse_obj::getScreenPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point){
	HX_STACK_PUSH("Mouse::getScreenPosition","org/flixel/system/input/Mouse.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(276)
	if (((Camera == null()))){
		HX_STACK_LINE(277)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(280)
	if (((point == null()))){
		HX_STACK_LINE(281)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(284)
	point->x = (Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom));
	HX_STACK_LINE(285)
	point->y = (Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom));
	HX_STACK_LINE(286)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,getScreenPosition,return )

::org::flixel::FlxPoint Mouse_obj::getWorldPosition( ::org::flixel::FlxCamera Camera,::org::flixel::FlxPoint point){
	HX_STACK_PUSH("Mouse::getWorldPosition","org/flixel/system/input/Mouse.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(253)
	if (((Camera == null()))){
		HX_STACK_LINE(254)
		Camera = ::org::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(257)
	if (((point == null()))){
		HX_STACK_LINE(258)
		point = ::org::flixel::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(261)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(262)
	point->x = (this->_point->x + Camera->scroll->x);
	HX_STACK_LINE(263)
	point->y = (this->_point->y + Camera->scroll->y);
	HX_STACK_LINE(264)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,getWorldPosition,return )

Void Mouse_obj::updateCursor( ){
{
		HX_STACK_PUSH("Mouse::updateCursor","org/flixel/system/input/Mouse.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_LINE(229)
		if ((this->_updateCursorContainer)){
			HX_STACK_LINE(231)
			this->_cursorContainer->nmeSetX(this->_globalScreenPosition->x);
			HX_STACK_LINE(232)
			this->_cursorContainer->nmeSetY(this->_globalScreenPosition->y);
		}
		HX_STACK_LINE(237)
		::org::flixel::FlxCamera camera = ::org::flixel::FlxG_obj::camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(238)
		this->screenX = ::Math_obj::floor((Float(((this->_globalScreenPosition->x - camera->x))) / Float(camera->zoom)));
		HX_STACK_LINE(239)
		this->screenY = ::Math_obj::floor((Float(((this->_globalScreenPosition->y - camera->y))) / Float(camera->zoom)));
		HX_STACK_LINE(240)
		this->x = (this->screenX + camera->scroll->x);
		HX_STACK_LINE(241)
		this->y = (this->screenY + camera->scroll->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,updateCursor,(void))

Void Mouse_obj::update( int X,int Y){
{
		HX_STACK_PUSH("Mouse::update","org/flixel/system/input/Mouse.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(209)
		this->_globalScreenPosition->x = X;
		HX_STACK_LINE(210)
		this->_globalScreenPosition->y = Y;
		HX_STACK_LINE(211)
		this->updateCursor();
		HX_STACK_LINE(212)
		if (((bool((this->_last == (int)-1)) && bool((this->_current == (int)-1))))){
			HX_STACK_LINE(213)
			this->_current = (int)0;
		}
		else{
			HX_STACK_LINE(216)
			if (((bool((this->_last == (int)2)) && bool((this->_current == (int)2))))){
				HX_STACK_LINE(217)
				this->_current = (int)1;
			}
		}
		HX_STACK_LINE(220)
		this->_last = this->_current;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,update,(void))

Void Mouse_obj::unload( ){
{
		HX_STACK_PUSH("Mouse::unload","org/flixel/system/input/Mouse.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(187)
			if ((this->_cursorContainer->nmeGetVisible())){
				HX_STACK_LINE(189)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(194)
				this->_cursorContainer->removeChild(this->_cursor);
				HX_STACK_LINE(195)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,unload,(void))

Void Mouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("Mouse::load","org/flixel/system/input/Mouse.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(145)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(146)
			this->_cursorContainer->removeChild(this->_cursor);
		}
		HX_STACK_LINE(150)
		if (((Graphic == null()))){
			HX_STACK_LINE(151)
			Graphic = ::org::flixel::FlxAssets_obj::imgDefaultCursor;
		}
		HX_STACK_LINE(155)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(156)
			this->_cursor = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(159)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::neash::display::BitmapData >()))){
				HX_STACK_LINE(160)
				this->_cursor = ::neash::display::Bitmap_obj::__new(hx::TCast< neash::display::BitmapData >::cast(Graphic),null(),null());
			}
			else{
				HX_STACK_LINE(163)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(164)
					this->_cursor = ::neash::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(Graphic,null()),null(),null());
				}
				else{
					HX_STACK_LINE(168)
					this->_cursor = ::neash::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgDefaultCursor,null()),null(),null());
				}
			}
		}
		HX_STACK_LINE(172)
		this->_cursor->nmeSetX(XOffset);
		HX_STACK_LINE(173)
		this->_cursor->nmeSetY(YOffset);
		HX_STACK_LINE(174)
		this->_cursor->nmeSetScaleX(Scale);
		HX_STACK_LINE(175)
		this->_cursor->nmeSetScaleY(Scale);
		HX_STACK_LINE(177)
		this->_cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,load,(void))

bool Mouse_obj::getVisible( ){
	HX_STACK_PUSH("Mouse::getVisible","org/flixel/system/input/Mouse.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	return this->_updateCursorContainer;
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,getVisible,return )

Void Mouse_obj::hide( ){
{
		HX_STACK_PUSH("Mouse::hide","org/flixel/system/input/Mouse.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(124)
		this->_updateCursorContainer = false;
		HX_STACK_LINE(125)
		this->_cursorContainer->nmeSetVisible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("Mouse::show","org/flixel/system/input/Mouse.hx",106);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(107)
		this->_updateCursorContainer = true;
		HX_STACK_LINE(108)
		this->_cursorContainer->nmeSetVisible(true);
		HX_STACK_LINE(109)
		if (((Graphic != null()))){
			HX_STACK_LINE(110)
			this->load(Graphic,Scale,XOffset,YOffset);
		}
		else{
			HX_STACK_LINE(113)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(114)
				this->load(null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Mouse_obj,show,(void))

Void Mouse_obj::destroy( ){
{
		HX_STACK_PUSH("Mouse::destroy","org/flixel/system/input/Mouse.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->_cursorContainer = null();
		HX_STACK_LINE(93)
		this->_cursor = null();
		HX_STACK_LINE(94)
		this->_point = null();
		HX_STACK_LINE(95)
		this->_globalScreenPosition = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,destroy,(void))


Mouse_obj::Mouse_obj()
{
}

void Mouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mouse);
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_MARK_MEMBER_NAME(_cursorContainer,"_cursorContainer");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_updateCursorContainer,"_updateCursorContainer");
	HX_VISIT_MEMBER_NAME(_cursorContainer,"_cursorContainer");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Mouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"visible") ) { return inCallProp ? getVisible() : visible; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getVisible") ) { return getVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleMouseUp") ) { return handleMouseUp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleMouseDown") ) { return handleMouseDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleMouseWheel") ) { return handleMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursorContainer") ) { return _cursorContainer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { return _updateCursorContainer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::neash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cursorContainer") ) { _cursorContainer=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_updateCursorContainer") ) { _updateCursorContainer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_updateCursorContainer"));
	outFields->push(HX_CSTRING("_cursorContainer"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("handleMouseWheel"),
	HX_CSTRING("handleMouseUp"),
	HX_CSTRING("handleMouseDown"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("reset"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("update"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("getVisible"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_updateCursorContainer"),
	HX_CSTRING("_cursorContainer"),
	HX_CSTRING("_last"),
	HX_CSTRING("_current"),
	HX_CSTRING("visible"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

Class Mouse_obj::__mClass;

void Mouse_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.input.Mouse"), hx::TCanCast< Mouse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mouse_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace input
