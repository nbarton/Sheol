#ifndef INCLUDED_HaxeFlixel4
#define INCLUDED_HaxeFlixel4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS0(HaxeFlixel4)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)


class HaxeFlixel4_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef HaxeFlixel4_obj OBJ_;
		HaxeFlixel4_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HaxeFlixel4_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HaxeFlixel4_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HaxeFlixel4"); }

		virtual Void init( ::native::events::Event e);
		Dynamic init_dyn();

};


#endif /* INCLUDED_HaxeFlixel4 */ 
