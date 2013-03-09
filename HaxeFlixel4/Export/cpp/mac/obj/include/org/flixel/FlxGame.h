#ifndef INCLUDED_org_flixel_FlxGame
#define INCLUDED_org_flixel_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,JoystickEvent)
HX_DECLARE_CLASS2(neash,events,KeyboardEvent)
HX_DECLARE_CLASS2(neash,events,MouseEvent)
HX_DECLARE_CLASS2(neash,events,TouchEvent)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGame)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS3(org,flixel,system,FlxDebugger)
HX_DECLARE_CLASS3(org,flixel,system,FlxReplay)
namespace org{
namespace flixel{


class FlxGame_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();
		Void __construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor);

	public:
		static hx::ObjectPtr< FlxGame_obj > __new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_GameFramerate,hx::Null< int >  __o_FlashFramerate,hx::Null< bool >  __o_UseSystemCursor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGame"); }

		virtual ::org::flixel::system::FlxDebugger getDebugger( );
		Dynamic getDebugger_dyn();

		::org::flixel::system::FlxDebugger debugger; /* REM */ 
		virtual Void createFocusScreen( );
		Dynamic createFocusScreen_dyn();

		virtual Void createSoundTray( );
		Dynamic createSoundTray_dyn();

		virtual Void create( ::neash::events::Event FlashEvent);
		Dynamic create_dyn();

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateSoundTray( Float MS);
		Dynamic updateSoundTray_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void switchState( );
		Dynamic switchState_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void onEnterFrame( ::neash::events::Event FlashEvent);
		Dynamic onEnterFrame_dyn();

		virtual Void onFocusLost( ::neash::events::Event FlashEvent);
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( ::neash::events::Event FlashEvent);
		Dynamic onFocus_dyn();

		virtual Void onJoyHatMove( ::neash::events::JoystickEvent FlashEvent);
		Dynamic onJoyHatMove_dyn();

		virtual Void onJoyButtonUp( ::neash::events::JoystickEvent FlashEvent);
		Dynamic onJoyButtonUp_dyn();

		virtual Void onJoyButtonDown( ::neash::events::JoystickEvent FlashEvent);
		Dynamic onJoyButtonDown_dyn();

		virtual Void onJoyBallMove( ::neash::events::JoystickEvent FlashEvent);
		Dynamic onJoyBallMove_dyn();

		virtual Void onJoyAxisMove( ::neash::events::JoystickEvent FlashEvent);
		Dynamic onJoyAxisMove_dyn();

		virtual Void onTouchMove( ::neash::events::TouchEvent FlashEvent);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchEnd( ::neash::events::TouchEvent FlashEvent);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchBegin( ::neash::events::TouchEvent FlashEvent);
		Dynamic onTouchBegin_dyn();

		virtual Void onMouseWheel( ::neash::events::MouseEvent FlashEvent);
		Dynamic onMouseWheel_dyn();

		virtual Void onMouseUp( ::neash::events::MouseEvent FlashEvent);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::neash::events::MouseEvent FlashEvent);
		Dynamic onMouseDown_dyn();

		virtual Void onKeyDown( ::neash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::neash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void showSoundTray( hx::Null< bool >  Silent);
		Dynamic showSoundTray_dyn();

		Dynamic _replayCallback; /* REM */ 
		Dynamic &_replayCallback_dyn() { return _replayCallback;}
		int _replayTimer; /* REM */ 
		Array< ::String > _replayCancelKeys; /* REM */ 
		bool _recording; /* REM */ 
		bool _replaying; /* REM */ 
		bool _recordingRequested; /* REM */ 
		bool _replayRequested; /* REM */ 
		::org::flixel::system::FlxReplay _replay; /* REM */ 
		bool _debuggerUp; /* REM */ 
		::org::flixel::system::FlxDebugger _debugger; /* REM */ 
		Array< ::neash::display::Bitmap > _soundTrayBars; /* REM */ 
		bool _updateSoundTray; /* REM */ 
		Float _soundTrayTimer; /* REM */ 
		::neash::display::Sprite _soundTray; /* REM */ 
		::neash::display::Sprite _focus; /* REM */ 
		bool _requestedReset; /* REM */ 
		::org::flixel::FlxState _requestedState; /* REM */ 
		int _maxAccumulation; /* REM */ 
		int _flashFramerate; /* REM */ 
		Float _stepSeconds; /* REM */ 
		int _step; /* REM */ 
		int _elapsedMS; /* REM */ 
		bool _lostFocus; /* REM */ 
		int _accumulator; /* REM */ 
		int _mark; /* REM */ 
		int _total; /* REM */ 
		::Class _iState; /* REM */ 
		::neash::display::Sprite _mouse; /* REM */ 
		::org::flixel::FlxState _state; /* REM */ 
		bool forceDebugger; /* REM */ 
		bool useSystemCursor; /* REM */ 
		bool useSoundHotKeys; /* REM */ 
		::String junk; /* REM */ 
		static ::neash::display::Sprite clickableArea; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxGame */ 
