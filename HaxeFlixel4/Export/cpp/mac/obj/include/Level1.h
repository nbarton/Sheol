#ifndef INCLUDED_Level1
#define INCLUDED_Level1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <BaseLevel.h>
HX_DECLARE_CLASS0(BaseLevel)
HX_DECLARE_CLASS0(Level1)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxState)


class Level1_obj : public ::BaseLevel_obj{
	public:
		typedef ::BaseLevel_obj super;
		typedef Level1_obj OBJ_;
		Level1_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Level1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Level1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level1"); }

		virtual Void update( );

		virtual Void create( );

};


#endif /* INCLUDED_Level1 */ 
