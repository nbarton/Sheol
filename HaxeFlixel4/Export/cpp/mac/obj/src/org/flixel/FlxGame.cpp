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
#ifndef INCLUDED_neash_Lib
#include <neash/Lib.h>
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
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_PixelSnapping
#include <neash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
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
#ifndef INCLUDED_neash_events_JoystickEvent
#include <neash/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_neash_events_KeyboardEvent
#include <neash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_neash_events_TouchEvent
#include <neash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
#ifndef INCLUDED_neash_text_TextFormat
#include <neash/text/TextFormat.h>
#endif
#ifndef INCLUDED_neash_text_TextFormatAlign
#include <neash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_neash_ui_Mouse
#include <neash/ui/Mouse.h>
#endif
#ifndef INCLUDED_neash_ui_Multitouch
#include <neash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_neash_ui_MultitouchInputMode
#include <neash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
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
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxLayer
#include <org/flixel/FlxLayer.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSave
#include <org/flixel/FlxSave.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTimer
#include <org/flixel/FlxTimer.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_TimerManager
#include <org/flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxDebugger
#include <org/flixel/system/FlxDebugger.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxReplay
#include <org/flixel/system/FlxReplay.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxWindow
#include <org/flixel/system/FlxWindow.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Perf
#include <org/flixel/system/debug/Perf.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_Watch
#include <org/flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Input
#include <org/flixel/system/input/Input.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_JoystickManager
#include <org/flixel/system/input/JoystickManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Keyboard
#include <org/flixel/system/input/Keyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_TouchManager
#include <org/flixel/system/input/TouchManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_tweens_FlxTween
#include <org/flixel/tweens/FlxTween.h>
#endif
namespace org{
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor)
{
HX_STACK_PUSH("FlxGame::new","org/flixel/FlxGame.hx",208);
Float Zoom = __o_Zoom.Default(1);
int GameFramerate = __o_GameFramerate.Default(60);
int FlashFramerate = __o_FlashFramerate.Default(30);
bool UseSystemCursor = __o_UseSystemCursor.Default(false);
{
	HX_STACK_LINE(209)
	super::__construct();
	HX_STACK_LINE(212)
	this->_lostFocus = false;
	HX_STACK_LINE(213)
	this->_focus = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(214)
	this->_focus->nmeSetVisible(false);
	HX_STACK_LINE(215)
	this->_soundTray = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(216)
	this->_mouse = ::neash::display::Sprite_obj::__new();
	HX_STACK_LINE(219)
	::org::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(220)
	::org::flixel::FlxG_obj::setFramerate(GameFramerate);
	HX_STACK_LINE(221)
	::org::flixel::FlxG_obj::setFlashFramerate(FlashFramerate);
	HX_STACK_LINE(222)
	this->_accumulator = this->_step;
	HX_STACK_LINE(223)
	this->_total = (int)0;
	HX_STACK_LINE(224)
	this->_mark = (int)0;
	HX_STACK_LINE(225)
	this->_state = null();
	HX_STACK_LINE(226)
	this->useSoundHotKeys = true;
	HX_STACK_LINE(227)
	this->useSystemCursor = UseSystemCursor;
	HX_STACK_LINE(228)
	if ((!(this->useSystemCursor))){
		HX_STACK_LINE(229)
		::neash::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(233)
	this->forceDebugger = true;
	HX_STACK_LINE(237)
	this->_debuggerUp = false;
	HX_STACK_LINE(240)
	this->_replay = ::org::flixel::system::FlxReplay_obj::__new();
	HX_STACK_LINE(241)
	this->_replayRequested = false;
	HX_STACK_LINE(242)
	this->_recordingRequested = false;
	HX_STACK_LINE(243)
	this->_replaying = false;
	HX_STACK_LINE(244)
	this->_recording = false;
	HX_STACK_LINE(247)
	this->_iState = InitialState;
	HX_STACK_LINE(248)
	this->_requestedState = null();
	HX_STACK_LINE(249)
	this->_requestedReset = true;
	HX_STACK_LINE(251)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_GameFramerate,__o_FlashFramerate,__o_UseSystemCursor);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::org::flixel::system::FlxDebugger FlxGame_obj::getDebugger( ){
	HX_STACK_PUSH("FlxGame::getDebugger","org/flixel/FlxGame.hx",1089);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1089)
	return this->_debugger;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,getDebugger,return )

Void FlxGame_obj::createFocusScreen( ){
{
		HX_STACK_PUSH("FlxGame::createFocusScreen","org/flixel/FlxGame.hx",1046);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1047)
		::neash::display::Graphics gfx = this->_focus->nmeGetGraphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(1048)
		int screenWidth = ::Math_obj::floor((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(1049)
		int screenHeight = ::Math_obj::floor((::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(1052)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(1053)
		gfx->beginFill((int)0,0.5);
		HX_STACK_LINE(1054)
		gfx->lineTo(screenWidth,(int)0);
		HX_STACK_LINE(1055)
		gfx->lineTo(screenWidth,screenHeight);
		HX_STACK_LINE(1056)
		gfx->lineTo((int)0,screenHeight);
		HX_STACK_LINE(1057)
		gfx->lineTo((int)0,(int)0);
		HX_STACK_LINE(1058)
		gfx->endFill();
		HX_STACK_LINE(1061)
		int halfWidth = ::Math_obj::floor((Float(screenWidth) / Float((int)2)));		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(1062)
		int halfHeight = ::Math_obj::floor((Float(screenHeight) / Float((int)2)));		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(1063)
		int helper = ::Math_obj::floor((Float(((  (((halfWidth <= halfHeight))) ? Float(halfWidth) : Float(halfHeight) ))) / Float((int)3)));		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(1064)
		gfx->moveTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(1065)
		gfx->beginFill((int)16777215,0.65);
		HX_STACK_LINE(1066)
		gfx->lineTo((halfWidth + helper),halfHeight);
		HX_STACK_LINE(1067)
		gfx->lineTo((halfWidth - helper),(halfHeight + helper));
		HX_STACK_LINE(1068)
		gfx->lineTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(1069)
		gfx->endFill();
		HX_STACK_LINE(1071)
		::neash::display::Sprite logo = ::neash::display::Sprite_obj::__new();		HX_STACK_VAR(logo,"logo");
		HX_STACK_LINE(1072)
		::org::flixel::FlxAssets_obj::drawLogo(logo->nmeGetGraphics());
		HX_STACK_LINE(1073)
		logo->nmeSetScaleX((Float(helper) / Float((int)1000)));
		HX_STACK_LINE(1074)
		if (((logo->nmeGetScaleX() < 0.2))){
			HX_STACK_LINE(1075)
			logo->nmeSetScaleX(0.2);
		}
		HX_STACK_LINE(1078)
		logo->nmeSetScaleY(logo->nmeGetScaleX());
		HX_STACK_LINE(1079)
		logo->nmeSetX(logo->nmeSetY((int)5));
		HX_STACK_LINE(1080)
		logo->nmeSetAlpha(0.35);
		HX_STACK_LINE(1081)
		this->_focus->addChild(logo);
		HX_STACK_LINE(1083)
		this->addChild(this->_focus);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createFocusScreen,(void))

Void FlxGame_obj::createSoundTray( ){
{
		HX_STACK_PUSH("FlxGame::createSoundTray","org/flixel/FlxGame.hx",971);
		HX_STACK_THIS(this);
		HX_STACK_LINE(972)
		this->_soundTray->nmeSetVisible(false);
		HX_STACK_LINE(973)
		this->_soundTray->nmeSetScaleX((int)2);
		HX_STACK_LINE(974)
		this->_soundTray->nmeSetScaleY((int)2);
		HX_STACK_LINE(976)
		::neash::display::Bitmap tmp = ::neash::display::Bitmap_obj::__new(::neash::display::BitmapData_obj::__new((int)80,(int)30,true,(int)2130706432,null()),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(980)
		this->_soundTray->nmeSetX((((Float(::org::flixel::FlxG_obj::width) / Float((int)2)) * ::org::flixel::FlxCamera_obj::defaultZoom) - ((Float(tmp->nmeGetWidth()) / Float((int)2)) * this->_soundTray->nmeGetScaleX())));
		HX_STACK_LINE(981)
		this->_soundTray->addChild(tmp);
		HX_STACK_LINE(983)
		::neash::text::TextField text = ::neash::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(984)
		text->nmeSetWidth(tmp->nmeGetWidth());
		HX_STACK_LINE(985)
		text->nmeSetHeight(tmp->nmeGetHeight());
		HX_STACK_LINE(986)
		text->nmeSetMultiline(true);
		HX_STACK_LINE(987)
		text->nmeSetWordWrap(true);
		HX_STACK_LINE(988)
		text->nmeSetSelectable(false);
		HX_STACK_LINE(996)
		::neash::text::TextFormat dtf = ::neash::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::getNokiaFont(),(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
		HX_STACK_LINE(997)
		dtf->align = ::neash::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(998)
		text->nmeSetDefaultTextFormat(dtf);
		HX_STACK_LINE(999)
		this->_soundTray->addChild(text);
		HX_STACK_LINE(1000)
		text->nmeSetText(HX_CSTRING("VOLUME"));
		HX_STACK_LINE(1001)
		text->nmeSetY((int)16);
		HX_STACK_LINE(1003)
		int bx = (int)10;		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(1004)
		int by = (int)14;		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(1005)
		this->_soundTrayBars = Array_obj< ::neash::display::Bitmap >::__new();
		HX_STACK_LINE(1006)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1007)
		while(((i < (int)10))){
			HX_STACK_LINE(1010)
			tmp = ::neash::display::Bitmap_obj::__new(::neash::display::BitmapData_obj::__new((int)4,++(i),false,(int)16777215,null()),null(),null());
			HX_STACK_LINE(1014)
			tmp->nmeSetX(bx);
			HX_STACK_LINE(1015)
			tmp->nmeSetY(by);
			HX_STACK_LINE(1016)
			this->_soundTray->addChild(tmp);
			HX_STACK_LINE(1017)
			this->_soundTrayBars->push(tmp);
			HX_STACK_LINE(1018)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(1019)
			(by)--;
		}
		HX_STACK_LINE(1022)
		this->_soundTray->nmeSetY(-(this->_soundTray->nmeGetHeight()));
		HX_STACK_LINE(1023)
		this->_soundTray->nmeSetVisible(false);
		HX_STACK_LINE(1024)
		this->addChild(this->_soundTray);
		HX_STACK_LINE(1027)
		::org::flixel::FlxSave soundPrefs = ::org::flixel::FlxSave_obj::__new();		HX_STACK_VAR(soundPrefs,"soundPrefs");
		HX_STACK_LINE(1028)
		if (((bool(soundPrefs->bind(HX_CSTRING("flixel"))) && bool((soundPrefs->data->__Field(HX_CSTRING("sound"),true) != null()))))){
			HX_STACK_LINE(1030)
			if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("volume"),true) != null()))){
				HX_STACK_LINE(1031)
				::org::flixel::FlxG_obj::setVolume(soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("volume"),true));
			}
			HX_STACK_LINE(1034)
			if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("mute"),true) != null()))){
				HX_STACK_LINE(1035)
				::org::flixel::FlxG_obj::mute = soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__Field(HX_CSTRING("mute"),true);
			}
			HX_STACK_LINE(1038)
			soundPrefs->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,createSoundTray,(void))

Void FlxGame_obj::create( ::neash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","org/flixel/FlxGame.hx",862);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(863)
		if (((this->nmeGetStage() == null()))){
			HX_STACK_LINE(864)
			return null();
		}
		HX_STACK_LINE(867)
		this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(869)
		this->_total = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(871)
		this->nmeGetStage()->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_STACK_LINE(872)
		this->nmeGetStage()->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(873)
		this->nmeGetStage()->nmeSetFrameRate(this->_flashFramerate);
		HX_STACK_LINE(875)
		::org::flixel::FlxG_obj::supportsTouchEvents = ::neash::ui::Multitouch_obj::nmeGetSupportsTouchEvents();
		HX_STACK_LINE(876)
		if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
			HX_STACK_LINE(878)
			::org::flixel::FlxG_obj::maxTouchPoints = ::neash::ui::Multitouch_obj::maxTouchPoints;
			HX_STACK_LINE(879)
			::neash::ui::Multitouch_obj::nmeSetInputMode(::neash::ui::MultitouchInputMode_obj::TOUCH_POINT_dyn());
		}
		HX_STACK_LINE(881)
		::org::flixel::FlxG_obj::touchManager = ::org::flixel::system::input::TouchManager_obj::__new();
		HX_STACK_LINE(896)
		::org::flixel::FlxGame_obj::clickableArea = ::neash::display::Sprite_obj::__new();
		HX_STACK_LINE(897)
		::org::flixel::FlxGame_obj::clickableArea->nmeGetGraphics()->beginFill((int)16711680,null());
		HX_STACK_LINE(898)
		::org::flixel::FlxGame_obj::clickableArea->nmeGetGraphics()->drawRect((int)0,(int)0,this->nmeGetStage()->nmeGetStageWidth(),this->nmeGetStage()->nmeGetStageHeight());
		HX_STACK_LINE(899)
		::org::flixel::FlxGame_obj::clickableArea->nmeGetGraphics()->endFill();
		HX_STACK_LINE(900)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addChild(::org::flixel::FlxGame_obj::clickableArea);
		HX_STACK_LINE(901)
		::org::flixel::FlxGame_obj::clickableArea->nmeSetAlpha((int)0);
		HX_STACK_LINE(902)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(903)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(904)
		::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
		HX_STACK_LINE(906)
		if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
			HX_STACK_LINE(908)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouchBegin_dyn(),null(),null(),null());
			HX_STACK_LINE(909)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::TouchEvent_obj::TOUCH_END,this->onTouchEnd_dyn(),null(),null(),null());
			HX_STACK_LINE(910)
			::org::flixel::FlxGame_obj::clickableArea->addEventListener(::neash::events::TouchEvent_obj::TOUCH_MOVE,this->onTouchMove_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(915)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::JoystickEvent_obj::AXIS_MOVE,this->onJoyAxisMove_dyn(),null(),null(),null());
		HX_STACK_LINE(916)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::JoystickEvent_obj::BALL_MOVE,this->onJoyBallMove_dyn(),null(),null(),null());
		HX_STACK_LINE(917)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::JoystickEvent_obj::BUTTON_DOWN,this->onJoyButtonDown_dyn(),null(),null(),null());
		HX_STACK_LINE(918)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::JoystickEvent_obj::BUTTON_UP,this->onJoyButtonUp_dyn(),null(),null(),null());
		HX_STACK_LINE(919)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::JoystickEvent_obj::HAT_MOVE,this->onJoyHatMove_dyn(),null(),null(),null());
		HX_STACK_LINE(922)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(923)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(925)
		this->addChild(this->_mouse);
		HX_STACK_LINE(928)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(931)
			if (((bool(::org::flixel::FlxG_obj::debug) || bool(this->forceDebugger)))){
				HX_STACK_LINE(933)
				this->_debugger = ::org::flixel::system::FlxDebugger_obj::__new((::org::flixel::FlxG_obj::width * ::org::flixel::FlxCamera_obj::defaultZoom),(::org::flixel::FlxG_obj::height * ::org::flixel::FlxCamera_obj::defaultZoom));
				HX_STACK_LINE(937)
				::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addChild(this->_debugger);
			}
			HX_STACK_LINE(942)
			this->createSoundTray();
			HX_STACK_LINE(945)
			this->nmeGetStage()->addEventListener(::neash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
			HX_STACK_LINE(946)
			this->nmeGetStage()->addEventListener(::neash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
			HX_STACK_LINE(952)
			this->createFocusScreen();
		}
		HX_STACK_LINE(956)
		if ((this->_requestedReset)){
			HX_STACK_LINE(958)
			{
				HX_STACK_LINE(958)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(958)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(958)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(958)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(959)
			this->switchState();
			HX_STACK_LINE(960)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(964)
		::nme::Lib_obj::nmeGetCurrent()->nmeGetStage()->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","org/flixel/FlxGame.hx",832);
		HX_STACK_THIS(this);
		HX_STACK_LINE(833)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(834)
			this->_mark = ::neash::Lib_obj::getTimer();
		}
		HX_STACK_LINE(837)
		this->_state->clearAllDrawData();
		HX_STACK_LINE(840)
		{
			HX_STACK_LINE(840)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(840)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(840)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(840)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(840)
			while(((i < l))){
				HX_STACK_LINE(840)
				cam = cams->__get((i)++);
				HX_STACK_LINE(840)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(840)
					continue;
				}
				HX_STACK_LINE(840)
				cam->_canvas->nmeGetGraphics()->clear();
				HX_STACK_LINE(840)
				cam->_debugLayer->nmeGetGraphics()->clear();
				HX_STACK_LINE(840)
				cam->fill((int(cam->bgColor) & int((int)16777215)),true,(Float(((int((int(cam->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(841)
		this->_state->draw();
		HX_STACK_LINE(844)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(845)
			this->_debugger->perf->drawCalls(::org::flixel::system::layer::TileSheetData_obj::_DRAWCALLS);
		}
		HX_STACK_LINE(850)
		{
			HX_STACK_LINE(850)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(850)
			Array< ::org::flixel::FlxBasic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(850)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(850)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(850)
			while(((i < l))){
				HX_STACK_LINE(850)
				plugin = pluginList->__get((i)++);
				HX_STACK_LINE(850)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(850)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(851)
		{
			HX_STACK_LINE(851)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(851)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(851)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(851)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(851)
			while(((i < l))){
				HX_STACK_LINE(851)
				cam = cams->__get((i)++);
				HX_STACK_LINE(851)
				if (((bool((bool((cam == null())) || bool(!(cam->exists)))) || bool(!(cam->visible))))){
					HX_STACK_LINE(851)
					continue;
				}
				HX_STACK_LINE(851)
				cam->drawFX();
			}
		}
		HX_STACK_LINE(852)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(853)
			this->_debugger->perf->flixelDraw((::neash::Lib_obj::getTimer() - this->_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","org/flixel/FlxGame.hx",808);
		HX_STACK_THIS(this);
		HX_STACK_LINE(809)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(810)
			this->_mark = ::neash::Lib_obj::getTimer();
		}
		HX_STACK_LINE(812)
		::org::flixel::FlxG_obj::elapsed = (::org::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		HX_STACK_LINE(813)
		::org::flixel::FlxG_obj::updateSounds();
		HX_STACK_LINE(814)
		{
			HX_STACK_LINE(814)
			::org::flixel::FlxBasic plugin;		HX_STACK_VAR(plugin,"plugin");
			HX_STACK_LINE(814)
			Array< ::org::flixel::FlxBasic > pluginList = ::org::flixel::FlxG_obj::plugins;		HX_STACK_VAR(pluginList,"pluginList");
			HX_STACK_LINE(814)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(814)
			int l = pluginList->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(814)
			while(((i < l))){
				HX_STACK_LINE(814)
				plugin = pluginList->__get((i)++);
				HX_STACK_LINE(814)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(814)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(815)
		this->_state->update();
		HX_STACK_LINE(817)
		if (((bool(::org::flixel::FlxG_obj::tweener->active) && bool(::org::flixel::FlxG_obj::tweener->getTween())))){
			HX_STACK_LINE(819)
			::org::flixel::tweens::FlxTween t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(819)
			Dynamic ft = ::org::flixel::FlxG_obj::tweener->_tween;		HX_STACK_VAR(ft,"ft");
			HX_STACK_LINE(819)
			while(((ft != null()))){
				HX_STACK_LINE(819)
				t = hx::TCast< org::flixel::tweens::FlxTween >::cast(ft);
				HX_STACK_LINE(819)
				if ((t->active)){
					HX_STACK_LINE(819)
					t->update();
					HX_STACK_LINE(819)
					if ((ft->__Field(HX_CSTRING("_finish"),true))){
						HX_STACK_LINE(819)
						ft->__Field(HX_CSTRING("finish"),true)();
					}
				}
				HX_STACK_LINE(819)
				ft = ft->__Field(HX_CSTRING("_next"),true);
			}
		}
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(822)
			::org::flixel::FlxCamera cam;		HX_STACK_VAR(cam,"cam");
			HX_STACK_LINE(822)
			Array< ::org::flixel::FlxCamera > cams = ::org::flixel::FlxG_obj::cameras;		HX_STACK_VAR(cams,"cams");
			HX_STACK_LINE(822)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(822)
			int l = cams->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(822)
			while(((i < l))){
				HX_STACK_LINE(822)
				cam = cams->__get((i)++);
				HX_STACK_LINE(822)
				if (((bool((cam != null())) && bool(cam->exists)))){
					HX_STACK_LINE(822)
					if ((cam->active)){
						HX_STACK_LINE(822)
						cam->update();
					}
					HX_STACK_LINE(822)
					cam->_flashSprite->nmeSetX((cam->x + cam->_flashOffsetX));
					HX_STACK_LINE(822)
					cam->_flashSprite->nmeSetY((cam->y + cam->_flashOffsetY));
					HX_STACK_LINE(822)
					cam->_flashSprite->nmeSetVisible(cam->visible);
				}
			}
		}
		HX_STACK_LINE(824)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(825)
			this->_debugger->perf->flixelUpdate((::neash::Lib_obj::getTimer() - this->_mark));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateSoundTray( Float MS){
{
		HX_STACK_PUSH("FlxGame::updateSoundTray","org/flixel/FlxGame.hx",773);
		HX_STACK_THIS(this);
		HX_STACK_ARG(MS,"MS");
		HX_STACK_LINE(773)
		if (((this->_soundTrayTimer > (int)0))){
			HX_STACK_LINE(776)
			hx::SubEq(this->_soundTrayTimer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(779)
			if (((this->_soundTray->nmeGetY() > -(this->_soundTray->nmeGetHeight())))){
				HX_STACK_LINE(781)
				{
					HX_STACK_LINE(781)
					::neash::display::Sprite _g = this->_soundTray;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(781)
					_g->nmeSetY((_g->nmeGetY() - (((Float(MS) / Float((int)1000)) * ::org::flixel::FlxG_obj::height) * (int)2)));
				}
				HX_STACK_LINE(782)
				if (((this->_soundTray->nmeGetY() <= -(this->_soundTray->nmeGetHeight())))){
					HX_STACK_LINE(784)
					this->_soundTray->nmeSetVisible(false);
					HX_STACK_LINE(785)
					this->_updateSoundTray = false;
					HX_STACK_LINE(788)
					::org::flixel::FlxSave soundPrefs = ::org::flixel::FlxSave_obj::__new();		HX_STACK_VAR(soundPrefs,"soundPrefs");
					HX_STACK_LINE(789)
					if ((soundPrefs->bind(HX_CSTRING("flixel")))){
						HX_STACK_LINE(791)
						if (((soundPrefs->data->__Field(HX_CSTRING("sound"),true) == null()))){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_PUSH("*::closure","org/flixel/FlxGame.hx",793);
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(792)
							soundPrefs->data->__FieldRef(HX_CSTRING("sound")) = _Function_6_1::Block();
						}
						HX_STACK_LINE(795)
						soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__FieldRef(HX_CSTRING("mute")) = ::org::flixel::FlxG_obj::mute;
						HX_STACK_LINE(796)
						soundPrefs->data->__Field(HX_CSTRING("sound"),true)->__FieldRef(HX_CSTRING("volume")) = ::org::flixel::FlxG_obj::volume;
						HX_STACK_LINE(797)
						soundPrefs->close(null(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,updateSoundTray,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","org/flixel/FlxGame.hx",677);
		HX_STACK_THIS(this);
		HX_STACK_LINE(679)
		if ((this->_requestedReset)){
			HX_STACK_LINE(681)
			{
				HX_STACK_LINE(681)
				this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(681)
				this->_replayTimer = (int)0;
				HX_STACK_LINE(681)
				this->_replayCancelKeys = null();
				HX_STACK_LINE(681)
				::org::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(682)
			this->_requestedReset = false;
		}
		HX_STACK_LINE(685)
		if ((this->_recordingRequested)){
			HX_STACK_LINE(687)
			this->_recordingRequested = false;
			HX_STACK_LINE(688)
			this->_replay->create(::org::flixel::FlxG_obj::globalSeed);
			HX_STACK_LINE(689)
			this->_recording = true;
			HX_STACK_LINE(690)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(692)
				this->_debugger->vcr->recording();
				HX_STACK_LINE(693)
				::org::flixel::FlxG_obj::log(HX_CSTRING("FLIXEL: starting new flixel gameplay record."));
			}
		}
		else{
			HX_STACK_LINE(696)
			if ((this->_replayRequested)){
				HX_STACK_LINE(698)
				this->_replayRequested = false;
				HX_STACK_LINE(699)
				this->_replay->rewind();
				HX_STACK_LINE(700)
				::org::flixel::FlxG_obj::globalSeed = this->_replay->seed;
				HX_STACK_LINE(701)
				if (((this->_debugger != null()))){
					HX_STACK_LINE(702)
					this->_debugger->vcr->playing();
				}
				HX_STACK_LINE(705)
				this->_replaying = true;
			}
		}
		HX_STACK_LINE(709)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(710)
			this->switchState();
		}
		HX_STACK_LINE(715)
		::org::flixel::FlxBasic_obj::_ACTIVECOUNT = (int)0;
		HX_STACK_LINE(716)
		if ((this->_replaying)){
			HX_STACK_LINE(718)
			this->_replay->playNextFrame();
			HX_STACK_LINE(719)
			if (((this->_replayTimer > (int)0))){
				HX_STACK_LINE(721)
				hx::SubEq(this->_replayTimer,this->_step);
				HX_STACK_LINE(722)
				if (((this->_replayTimer <= (int)0))){
					HX_STACK_LINE(723)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(726)
						this->_replayCallback();
						HX_STACK_LINE(727)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(730)
						::org::flixel::FlxG_obj::stopReplay();
					}
				}
			}
			HX_STACK_LINE(735)
			if (((bool(this->_replaying) && bool(this->_replay->finished)))){
				HX_STACK_LINE(737)
				::org::flixel::FlxG_obj::stopReplay();
				HX_STACK_LINE(738)
				if (((this->_replayCallback_dyn() != null()))){
					HX_STACK_LINE(740)
					this->_replayCallback();
					HX_STACK_LINE(741)
					this->_replayCallback = null();
				}
			}
			HX_STACK_LINE(744)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(745)
				this->_debugger->vcr->updateRuntime(this->_step);
			}
		}
		else{
			HX_STACK_LINE(751)
			::org::flixel::FlxG_obj::keys->update();
			HX_STACK_LINE(751)
			if (((bool(!(::org::flixel::FlxG_obj::_game->_debuggerUp)) || bool(!(::org::flixel::FlxG_obj::_game->_debugger->hasMouse))))){
				HX_STACK_LINE(751)
				::org::flixel::FlxG_obj::mouse->update(::Math_obj::floor(::org::flixel::FlxG_obj::_game->nmeGetMouseX()),::Math_obj::floor(::org::flixel::FlxG_obj::_game->nmeGetMouseY()));
			}
			HX_STACK_LINE(751)
			if ((::org::flixel::FlxG_obj::supportsTouchEvents)){
				HX_STACK_LINE(751)
				::org::flixel::FlxG_obj::touchManager->update();
			}
			HX_STACK_LINE(751)
			::org::flixel::FlxG_obj::joystickManager->update();
		}
		HX_STACK_LINE(753)
		if ((this->_recording)){
			HX_STACK_LINE(755)
			this->_replay->recordFrame();
			HX_STACK_LINE(756)
			if (((this->_debugger != null()))){
				HX_STACK_LINE(757)
				this->_debugger->vcr->updateRuntime(this->_step);
			}
		}
		HX_STACK_LINE(761)
		this->update();
		HX_STACK_LINE(762)
		::org::flixel::FlxG_obj::mouse->wheel = (int)0;
		HX_STACK_LINE(763)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(764)
			this->_debugger->perf->activeObjects(::org::flixel::FlxBasic_obj::_ACTIVECOUNT);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","org/flixel/FlxGame.hx",633);
		HX_STACK_THIS(this);
		HX_STACK_LINE(636)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(637)
		::org::flixel::FlxLayer_obj::clearLayerCache();
		HX_STACK_LINE(638)
		::org::flixel::system::layer::Atlas_obj::clearAtlasCache();
		HX_STACK_LINE(639)
		::org::flixel::system::layer::TileSheetData_obj::clear();
		HX_STACK_LINE(641)
		::org::flixel::FlxG_obj::clearBitmapCache();
		HX_STACK_LINE(642)
		::org::flixel::FlxG_obj::resetCameras(null());
		HX_STACK_LINE(643)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(644)
		::org::flixel::FlxG_obj::destroySounds(null());
		HX_STACK_LINE(647)
		if (((this->_debugger != null()))){
			HX_STACK_LINE(648)
			this->_debugger->watch->removeAll();
		}
		HX_STACK_LINE(653)
		::org::flixel::plugin::TimerManager timerManager = ::org::flixel::FlxTimer_obj::getManager();		HX_STACK_VAR(timerManager,"timerManager");
		HX_STACK_LINE(654)
		if (((timerManager != null()))){
			HX_STACK_LINE(655)
			timerManager->clear();
		}
		HX_STACK_LINE(660)
		if (((this->_state != null()))){
			HX_STACK_LINE(661)
			this->_state->destroy();
		}
		HX_STACK_LINE(666)
		this->_state = this->_requestedState;
		HX_STACK_LINE(667)
		this->_state->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","org/flixel/FlxGame.hx",620);
		HX_STACK_THIS(this);
		HX_STACK_LINE(621)
		this->_requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
		HX_STACK_LINE(622)
		this->_replayTimer = (int)0;
		HX_STACK_LINE(623)
		this->_replayCancelKeys = null();
		HX_STACK_LINE(624)
		::org::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::neash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","org/flixel/FlxGame.hx",568);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(569)
		this->_mark = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(570)
		this->_elapsedMS = (this->_mark - this->_total);
		HX_STACK_LINE(571)
		this->_total = this->_mark;
		HX_STACK_LINE(573)
		if ((this->_updateSoundTray)){
			HX_STACK_LINE(574)
			this->updateSoundTray(this->_elapsedMS);
		}
		HX_STACK_LINE(576)
		if ((!(this->_lostFocus))){
			HX_STACK_LINE(578)
			if (((bool((this->_debugger != null())) && bool(this->_debugger->vcr->paused)))){
				HX_STACK_LINE(579)
				if ((this->_debugger->vcr->stepRequested)){
					HX_STACK_LINE(582)
					this->_debugger->vcr->stepRequested = false;
					HX_STACK_LINE(583)
					this->step();
				}
			}
			else{
				HX_STACK_LINE(588)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(589)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(590)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(595)
				while(((this->_accumulator > this->_step))){
					HX_STACK_LINE(597)
					this->step();
					HX_STACK_LINE(598)
					this->_accumulator = (this->_accumulator - this->_step);
				}
			}
			HX_STACK_LINE(602)
			::org::flixel::FlxBasic_obj::_VISIBLECOUNT = (int)0;
			HX_STACK_LINE(603)
			this->draw();
			HX_STACK_LINE(605)
			if ((this->_debuggerUp)){
				HX_STACK_LINE(607)
				this->_debugger->perf->flash(this->_elapsedMS);
				HX_STACK_LINE(608)
				this->_debugger->perf->visibleObjects(::org::flixel::FlxBasic_obj::_VISIBLECOUNT);
				HX_STACK_LINE(609)
				this->_debugger->perf->update();
				HX_STACK_LINE(610)
				this->_debugger->watch->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onFocusLost( ::neash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","org/flixel/FlxGame.hx",551);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(552)
		if (((bool((this->nmeGetX() != (int)0)) || bool((this->nmeGetY() != (int)0))))){
			HX_STACK_LINE(554)
			this->nmeSetX((int)0);
			HX_STACK_LINE(555)
			this->nmeSetY((int)0);
		}
		HX_STACK_LINE(557)
		::neash::ui::Mouse_obj::show();
		HX_STACK_LINE(558)
		this->_lostFocus = this->_focus->nmeSetVisible(true);
		HX_STACK_LINE(559)
		this->nmeGetStage()->nmeSetFrameRate((int)10);
		HX_STACK_LINE(560)
		::org::flixel::FlxG_obj::pauseSounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::neash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","org/flixel/FlxGame.hx",535);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(536)
		if (((bool(!(this->_debuggerUp)) && bool(!(this->useSystemCursor))))){
			HX_STACK_LINE(537)
			::neash::ui::Mouse_obj::hide();
		}
		HX_STACK_LINE(540)
		::org::flixel::FlxG_obj::resetInput();
		HX_STACK_LINE(541)
		this->_lostFocus = this->_focus->nmeSetVisible(false);
		HX_STACK_LINE(542)
		this->nmeGetStage()->nmeSetFrameRate(this->_flashFramerate);
		HX_STACK_LINE(543)
		::org::flixel::FlxG_obj::resumeSounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onJoyHatMove( ::neash::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyHatMove","org/flixel/FlxGame.hx",525);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(525)
		::org::flixel::FlxG_obj::joystickManager->handleHatMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyHatMove,(void))

Void FlxGame_obj::onJoyButtonUp( ::neash::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyButtonUp","org/flixel/FlxGame.hx",516);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(516)
		::org::flixel::FlxG_obj::joystickManager->handleButtonUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyButtonUp,(void))

Void FlxGame_obj::onJoyButtonDown( ::neash::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyButtonDown","org/flixel/FlxGame.hx",507);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(507)
		::org::flixel::FlxG_obj::joystickManager->handleButtonDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyButtonDown,(void))

Void FlxGame_obj::onJoyBallMove( ::neash::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyBallMove","org/flixel/FlxGame.hx",498);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(498)
		::org::flixel::FlxG_obj::joystickManager->handleBallMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyBallMove,(void))

Void FlxGame_obj::onJoyAxisMove( ::neash::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onJoyAxisMove","org/flixel/FlxGame.hx",489);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(489)
		::org::flixel::FlxG_obj::joystickManager->handleAxisMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onJoyAxisMove,(void))

Void FlxGame_obj::onTouchMove( ::neash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchMove","org/flixel/FlxGame.hx",479);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(479)
		::org::flixel::FlxG_obj::touchManager->handleTouchMove(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchMove,(void))

Void FlxGame_obj::onTouchEnd( ::neash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchEnd","org/flixel/FlxGame.hx",470);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(470)
		::org::flixel::FlxG_obj::touchManager->handleTouchEnd(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchEnd,(void))

Void FlxGame_obj::onTouchBegin( ::neash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onTouchBegin","org/flixel/FlxGame.hx",461);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(461)
		::org::flixel::FlxG_obj::touchManager->handleTouchBegin(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onTouchBegin,(void))

Void FlxGame_obj::onMouseWheel( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseWheel","org/flixel/FlxGame.hx",448);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(449)
		if (((bool((bool(this->_debuggerUp) && bool(this->_debugger->hasMouse))) || bool(this->_replaying)))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(453)
		::org::flixel::FlxG_obj::mouse->handleMouseWheel(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseWheel,(void))

Void FlxGame_obj::onMouseUp( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseUp","org/flixel/FlxGame.hx",435);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(436)
		if (((bool((bool(this->_debuggerUp) && bool(this->_debugger->hasMouse))) || bool(this->_replaying)))){
			HX_STACK_LINE(437)
			return null();
		}
		HX_STACK_LINE(440)
		::org::flixel::FlxG_obj::mouse->handleMouseUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseUp,(void))

Void FlxGame_obj::onMouseDown( ::neash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onMouseDown","org/flixel/FlxGame.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(392)
		if ((this->_debuggerUp)){
			HX_STACK_LINE(394)
			if ((this->_debugger->hasMouse)){
				HX_STACK_LINE(395)
				return null();
			}
			HX_STACK_LINE(398)
			if ((this->_debugger->watch->editing)){
				HX_STACK_LINE(399)
				this->_debugger->watch->submit();
			}
		}
		HX_STACK_LINE(403)
		if (((bool(this->_replaying) && bool((this->_replayCancelKeys != null()))))){
			HX_STACK_LINE(405)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(406)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(407)
			int l = this->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(408)
			while(((i < l))){
				HX_STACK_LINE(410)
				replayCancelKey = this->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(411)
				if (((bool((replayCancelKey == HX_CSTRING("MOUSE"))) || bool((replayCancelKey == HX_CSTRING("ANY")))))){
					HX_STACK_LINE(413)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(415)
						this->_replayCallback();
						HX_STACK_LINE(416)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(419)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(422)
					break;
				}
			}
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(427)
		::org::flixel::FlxG_obj::mouse->handleMouseDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onMouseDown,(void))

Void FlxGame_obj::onKeyDown( ::neash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onKeyDown","org/flixel/FlxGame.hx",353);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(354)
		if (((bool(this->_debuggerUp) && bool(this->_debugger->watch->editing)))){
			HX_STACK_LINE(355)
			return null();
		}
		HX_STACK_LINE(358)
		if (((bool((bool((bool((bool(this->_replaying) && bool((this->_replayCancelKeys != null())))) && bool((this->_debugger == null())))) && bool((FlashEvent->keyCode != (int)192)))) && bool((FlashEvent->keyCode != (int)220))))){
			HX_STACK_LINE(360)
			bool cancel = false;		HX_STACK_VAR(cancel,"cancel");
			HX_STACK_LINE(361)
			::String replayCancelKey;		HX_STACK_VAR(replayCancelKey,"replayCancelKey");
			HX_STACK_LINE(362)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(363)
			int l = this->_replayCancelKeys->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(364)
			while(((i < l))){
				HX_STACK_LINE(366)
				replayCancelKey = this->_replayCancelKeys->__get((i)++);
				HX_STACK_LINE(367)
				if (((bool((replayCancelKey == HX_CSTRING("ANY"))) || bool((::org::flixel::FlxG_obj::keys->getKeyCode(replayCancelKey) == ::Std_obj::_int(FlashEvent->keyCode)))))){
					HX_STACK_LINE(369)
					if (((this->_replayCallback_dyn() != null()))){
						HX_STACK_LINE(371)
						this->_replayCallback();
						HX_STACK_LINE(372)
						this->_replayCallback = null();
					}
					else{
						HX_STACK_LINE(375)
						::org::flixel::FlxG_obj::stopReplay();
					}
					HX_STACK_LINE(378)
					break;
				}
			}
			HX_STACK_LINE(381)
			return null();
		}
		HX_STACK_LINE(383)
		::org::flixel::FlxG_obj::keys->handleKeyDown(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onKeyDown,(void))

Void FlxGame_obj::onKeyUp( ::neash::events::KeyboardEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onKeyUp","org/flixel/FlxGame.hx",285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(286)
		if (((bool(this->_debuggerUp) && bool(this->_debugger->watch->editing)))){
			HX_STACK_LINE(287)
			return null();
		}
		HX_STACK_LINE(290)
		if ((!(::org::flixel::FlxG_obj::mobile))){
			HX_STACK_LINE(292)
			if (((bool((this->_debugger != null())) && bool(((bool((FlashEvent->keyCode == (int)192)) || bool((FlashEvent->keyCode == (int)220)))))))){
				HX_STACK_LINE(294)
				this->_debugger->nmeSetVisible(!(this->_debugger->nmeGetVisible()));
				HX_STACK_LINE(295)
				this->_debuggerUp = this->_debugger->nmeGetVisible();
				HX_STACK_LINE(296)
				if ((this->_debugger->nmeGetVisible())){
					HX_STACK_LINE(297)
					::neash::ui::Mouse_obj::show();
				}
				else{
					HX_STACK_LINE(300)
					if ((!(this->useSystemCursor))){
						HX_STACK_LINE(301)
						::neash::ui::Mouse_obj::hide();
					}
				}
				HX_STACK_LINE(305)
				return null();
			}
			HX_STACK_LINE(307)
			if ((this->useSoundHotKeys)){
				HX_STACK_LINE(309)
				int c = FlashEvent->keyCode;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(310)
				::String code = ::String::fromCharCode(FlashEvent->charCode);		HX_STACK_VAR(code,"code");
				HX_STACK_LINE(311)
				if (((bool((c == (int)48)) || bool((c == (int)96))))){
					HX_STACK_LINE(313)
					::org::flixel::FlxG_obj::mute = !(::org::flixel::FlxG_obj::mute);
					HX_STACK_LINE(314)
					if (((::org::flixel::FlxG_obj::volumeHandler_dyn() != null()))){
						HX_STACK_LINE(315)
						::org::flixel::FlxG_obj::volumeHandler((  ((::org::flixel::FlxG_obj::mute)) ? Float((int)0) : Float(::org::flixel::FlxG_obj::volume) ));
					}
					HX_STACK_LINE(318)
					this->showSoundTray(null());
					HX_STACK_LINE(319)
					return null();
				}
				else{
					HX_STACK_LINE(321)
					if (((bool((c == (int)109)) || bool((c == (int)189))))){
						HX_STACK_LINE(323)
						::org::flixel::FlxG_obj::mute = false;
						HX_STACK_LINE(324)
						::org::flixel::FlxG_obj::setVolume((::org::flixel::FlxG_obj::volume - 0.1));
						HX_STACK_LINE(325)
						this->showSoundTray(null());
						HX_STACK_LINE(326)
						return null();
					}
					else{
						HX_STACK_LINE(328)
						if (((bool((c == (int)107)) || bool((c == (int)187))))){
							HX_STACK_LINE(330)
							::org::flixel::FlxG_obj::mute = false;
							HX_STACK_LINE(331)
							::org::flixel::FlxG_obj::setVolume((::org::flixel::FlxG_obj::volume + 0.1));
							HX_STACK_LINE(332)
							this->showSoundTray(null());
							HX_STACK_LINE(333)
							return null();
						}
						else{
						}
					}
				}
			}
		}
		HX_STACK_LINE(341)
		if ((this->_replaying)){
			HX_STACK_LINE(342)
			return null();
		}
		HX_STACK_LINE(345)
		::org::flixel::FlxG_obj::keys->handleKeyUp(FlashEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onKeyUp,(void))

Void FlxGame_obj::showSoundTray( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_PUSH("FlxGame::showSoundTray","org/flixel/FlxGame.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Silent,"Silent");
{
		HX_STACK_LINE(260)
		if ((!(Silent))){
			HX_STACK_LINE(261)
			::org::flixel::FlxG_obj::play(::org::flixel::FlxAssets_obj::sndBeep,null(),null(),null());
		}
		HX_STACK_LINE(264)
		this->_soundTrayTimer = (int)1;
		HX_STACK_LINE(265)
		this->_soundTray->nmeSetY((int)0);
		HX_STACK_LINE(266)
		this->_soundTray->nmeSetVisible(true);
		HX_STACK_LINE(267)
		this->_updateSoundTray = true;
		HX_STACK_LINE(268)
		int globalVolume = ::Math_obj::round((::org::flixel::FlxG_obj::volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(269)
		if ((::org::flixel::FlxG_obj::mute)){
			HX_STACK_LINE(270)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_soundTrayBars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while(((_g1 < _g))){
				HX_STACK_LINE(273)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				if (((i < globalVolume))){
					HX_STACK_LINE(275)
					this->_soundTrayBars->__get(i)->nmeSetAlpha((int)1);
				}
				else{
					HX_STACK_LINE(276)
					this->_soundTrayBars->__get(i)->nmeSetAlpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,showSoundTray,(void))

::neash::display::Sprite FlxGame_obj::clickableArea;


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(debugger,"debugger");
	HX_MARK_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_MARK_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_MARK_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_MARK_MEMBER_NAME(_recording,"_recording");
	HX_MARK_MEMBER_NAME(_replaying,"_replaying");
	HX_MARK_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_MARK_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_MARK_MEMBER_NAME(_replay,"_replay");
	HX_MARK_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_MARK_MEMBER_NAME(_debugger,"_debugger");
	HX_MARK_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_MARK_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_MARK_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_MARK_MEMBER_NAME(_soundTray,"_soundTray");
	HX_MARK_MEMBER_NAME(_focus,"_focus");
	HX_MARK_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_step,"_step");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_mark,"_mark");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(_mouse,"_mouse");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(forceDebugger,"forceDebugger");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(useSoundHotKeys,"useSoundHotKeys");
	HX_MARK_MEMBER_NAME(junk,"junk");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debugger,"debugger");
	HX_VISIT_MEMBER_NAME(_replayCallback,"_replayCallback");
	HX_VISIT_MEMBER_NAME(_replayTimer,"_replayTimer");
	HX_VISIT_MEMBER_NAME(_replayCancelKeys,"_replayCancelKeys");
	HX_VISIT_MEMBER_NAME(_recording,"_recording");
	HX_VISIT_MEMBER_NAME(_replaying,"_replaying");
	HX_VISIT_MEMBER_NAME(_recordingRequested,"_recordingRequested");
	HX_VISIT_MEMBER_NAME(_replayRequested,"_replayRequested");
	HX_VISIT_MEMBER_NAME(_replay,"_replay");
	HX_VISIT_MEMBER_NAME(_debuggerUp,"_debuggerUp");
	HX_VISIT_MEMBER_NAME(_debugger,"_debugger");
	HX_VISIT_MEMBER_NAME(_soundTrayBars,"_soundTrayBars");
	HX_VISIT_MEMBER_NAME(_updateSoundTray,"_updateSoundTray");
	HX_VISIT_MEMBER_NAME(_soundTrayTimer,"_soundTrayTimer");
	HX_VISIT_MEMBER_NAME(_soundTray,"_soundTray");
	HX_VISIT_MEMBER_NAME(_focus,"_focus");
	HX_VISIT_MEMBER_NAME(_requestedReset,"_requestedReset");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_flashFramerate,"_flashFramerate");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_step,"_step");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_mark,"_mark");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(_mouse,"_mouse");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(forceDebugger,"forceDebugger");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(useSoundHotKeys,"useSoundHotKeys");
	HX_VISIT_MEMBER_NAME(junk,"junk");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"junk") ) { return junk; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { return _step; }
		if (HX_FIELD_EQ(inName,"_mark") ) { return _mark; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_focus") ) { return _focus; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"_mouse") ) { return _mouse; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_replay") ) { return _replay; }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { return inCallProp ? getDebugger() : debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_debugger") ) { return _debugger; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"_recording") ) { return _recording; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { return _replaying; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { return _soundTray; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDebugger") ) { return getDebugger_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { return _debuggerUp; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { return onTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { return _replayTimer; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickableArea") ) { return clickableArea; }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"showSoundTray") ) { return showSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"forceDebugger") ) { return forceDebugger; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { return _soundTrayBars; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createSoundTray") ) { return createSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSoundTray") ) { return updateSoundTray_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { return _replayCallback; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { return _soundTrayTimer; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { return _requestedReset; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { return _flashFramerate; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"useSoundHotKeys") ) { return useSoundHotKeys; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { return _replayRequested; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { return _updateSoundTray; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createFocusScreen") ) { return createFocusScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { return _replayCancelKeys; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { return _recordingRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"junk") ) { junk=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { _step=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mark") ) { _mark=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouse") ) { _mouse=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_replay") ) { _replay=inValue.Cast< ::org::flixel::system::FlxReplay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_debugger") ) { _debugger=inValue.Cast< ::org::flixel::system::FlxDebugger >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_recording") ) { _recording=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_replaying") ) { _replaying=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTray") ) { _soundTray=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_debuggerUp") ) { _debuggerUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_replayTimer") ) { _replayTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickableArea") ) { clickableArea=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceDebugger") ) { forceDebugger=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_soundTrayBars") ) { _soundTrayBars=inValue.Cast< Array< ::neash::display::Bitmap > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_replayCallback") ) { _replayCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_soundTrayTimer") ) { _soundTrayTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedReset") ) { _requestedReset=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::org::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashFramerate") ) { _flashFramerate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { useSystemCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSoundHotKeys") ) { useSoundHotKeys=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_replayRequested") ) { _replayRequested=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateSoundTray") ) { _updateSoundTray=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_replayCancelKeys") ) { _replayCancelKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_recordingRequested") ) { _recordingRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("debugger"));
	outFields->push(HX_CSTRING("_replayTimer"));
	outFields->push(HX_CSTRING("_replayCancelKeys"));
	outFields->push(HX_CSTRING("_recording"));
	outFields->push(HX_CSTRING("_replaying"));
	outFields->push(HX_CSTRING("_recordingRequested"));
	outFields->push(HX_CSTRING("_replayRequested"));
	outFields->push(HX_CSTRING("_replay"));
	outFields->push(HX_CSTRING("_debuggerUp"));
	outFields->push(HX_CSTRING("_debugger"));
	outFields->push(HX_CSTRING("_soundTrayBars"));
	outFields->push(HX_CSTRING("_updateSoundTray"));
	outFields->push(HX_CSTRING("_soundTrayTimer"));
	outFields->push(HX_CSTRING("_soundTray"));
	outFields->push(HX_CSTRING("_focus"));
	outFields->push(HX_CSTRING("_requestedReset"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_flashFramerate"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_step"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_mark"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("_mouse"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("forceDebugger"));
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("useSoundHotKeys"));
	outFields->push(HX_CSTRING("junk"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clickableArea"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getDebugger"),
	HX_CSTRING("debugger"),
	HX_CSTRING("createFocusScreen"),
	HX_CSTRING("createSoundTray"),
	HX_CSTRING("create"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("updateSoundTray"),
	HX_CSTRING("step"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchBegin"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("showSoundTray"),
	HX_CSTRING("_replayCallback"),
	HX_CSTRING("_replayTimer"),
	HX_CSTRING("_replayCancelKeys"),
	HX_CSTRING("_recording"),
	HX_CSTRING("_replaying"),
	HX_CSTRING("_recordingRequested"),
	HX_CSTRING("_replayRequested"),
	HX_CSTRING("_replay"),
	HX_CSTRING("_debuggerUp"),
	HX_CSTRING("_debugger"),
	HX_CSTRING("_soundTrayBars"),
	HX_CSTRING("_updateSoundTray"),
	HX_CSTRING("_soundTrayTimer"),
	HX_CSTRING("_soundTray"),
	HX_CSTRING("_focus"),
	HX_CSTRING("_requestedReset"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_flashFramerate"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_step"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_mark"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("_mouse"),
	HX_CSTRING("_state"),
	HX_CSTRING("forceDebugger"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("useSoundHotKeys"),
	HX_CSTRING("junk"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGame_obj::clickableArea,"clickableArea");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGame_obj::clickableArea,"clickableArea");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
