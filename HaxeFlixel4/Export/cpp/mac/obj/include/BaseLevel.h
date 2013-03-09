#ifndef INCLUDED_BaseLevel
#define INCLUDED_BaseLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS0(BaseLevel)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxState)
HX_DECLARE_CLASS2(org,flixel,FlxText)


class BaseLevel_obj : public ::org::flixel::FlxState_obj{
	public:
		typedef ::org::flixel::FlxState_obj super;
		typedef BaseLevel_obj OBJ_;
		BaseLevel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BaseLevel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BaseLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BaseLevel"); }

		virtual Void update( );

		virtual Void create( );

		::org::flixel::FlxText scoreText; /* REM */ 
		::org::flixel::FlxText levelText; /* REM */ 
};


#endif /* INCLUDED_BaseLevel */ 
