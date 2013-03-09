#ifndef INCLUDED_org_flixel_system_FlxWindow
#define INCLUDED_org_flixel_system_FlxWindow

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
HX_DECLARE_CLASS2(neash,events,MouseEvent)
HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS3(org,flixel,system,FlxWindow)
namespace org{
namespace flixel{
namespace system{


class FlxWindow_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef FlxWindow_obj OBJ_;
		FlxWindow_obj();
		Void __construct(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::neash::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);

	public:
		static hx::ObjectPtr< FlxWindow_obj > __new(::String Title,Float Width,Float Height,hx::Null< bool >  __o_Resizable,::neash::geom::Rectangle Bounds,Dynamic BGColor,Dynamic TopColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxWindow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxWindow"); }

		virtual Void updateGUI( );
		Dynamic updateGUI_dyn();

		virtual Void updateSize( );
		Dynamic updateSize_dyn();

		virtual Void bound( );
		Dynamic bound_dyn();

		virtual Void onMouseUp( ::neash::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::neash::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( ::neash::events::MouseEvent E);
		Dynamic onMouseMove_dyn();

		virtual Void init( ::neash::events::Event E);
		Dynamic init_dyn();

		virtual Void reposition( Float X,Float Y);
		Dynamic reposition_dyn();

		virtual Void resize( Float Width,Float Height);
		Dynamic resize_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _resizable; /* REM */ 
		bool _resizing; /* REM */ 
		bool _dragging; /* REM */ 
		::neash::geom::Point _drag; /* REM */ 
		bool _overHandle; /* REM */ 
		bool _overHeader; /* REM */ 
		::neash::display::Bitmap _handle; /* REM */ 
		::neash::text::TextField _title; /* REM */ 
		::neash::display::Bitmap _shadow; /* REM */ 
		::neash::display::Bitmap _header; /* REM */ 
		::neash::display::Bitmap _background; /* REM */ 
		::neash::geom::Rectangle _bounds; /* REM */ 
		int _height; /* REM */ 
		int _width; /* REM */ 
		::neash::geom::Point maxSize; /* REM */ 
		::neash::geom::Point minSize; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_org_flixel_system_FlxWindow */ 
