#ifndef INCLUDED_org_flixel_system_debug_WatchEntry
#define INCLUDED_org_flixel_system_debug_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,KeyboardEvent)
HX_DECLARE_CLASS2(neash,events,MouseEvent)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS2(neash,text,TextFormat)
HX_DECLARE_CLASS4(org,flixel,system,debug,WatchEntry)
namespace org{
namespace flixel{
namespace system{
namespace debug{


class WatchEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();
		Void __construct(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);

	public:
		static hx::ObjectPtr< WatchEntry_obj > __new(Float Y,Float NameWidth,Float ValueWidth,Dynamic Obj,::String Field,::String Custom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WatchEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WatchEntry"); }

		virtual Void doneEditing( );
		Dynamic doneEditing_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void onKeyUp( ::neash::events::KeyboardEvent FlashEvent);
		Dynamic onKeyUp_dyn();

		virtual Void onMouseUp( ::neash::events::MouseEvent FlashEvent);
		Dynamic onMouseUp_dyn();

		virtual bool updateValue( );
		Dynamic updateValue_dyn();

		virtual Void updateWidth( Float NameWidth,Float ValueWidth);
		Dynamic updateWidth_dyn();

		virtual Void setY( Float Y);
		Dynamic setY_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::neash::text::TextFormat _blackText; /* REM */ 
		::neash::text::TextFormat _whiteText; /* REM */ 
		Dynamic oldValue; /* REM */ 
		bool editing; /* REM */ 
		::neash::text::TextField valueDisplay; /* REM */ 
		::neash::text::TextField nameDisplay; /* REM */ 
		::String custom; /* REM */ 
		::String field; /* REM */ 
		Dynamic object; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_org_flixel_system_debug_WatchEntry */ 
