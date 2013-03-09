#ifndef INCLUDED_addons_FlxTrail
#define INCLUDED_addons_FlxTrail

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS1(addons,FlxTrail)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
namespace addons{


class FlxTrail_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef FlxTrail_obj OBJ_;
		FlxTrail_obj();
		Void __construct(::org::flixel::FlxSprite Sprite,Dynamic Image,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff);

	public:
		static hx::ObjectPtr< FlxTrail_obj > __new(::org::flixel::FlxSprite Sprite,Dynamic Image,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTrail_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTrail"); }

		virtual Void changeValuesEnabled( bool Angle,hx::Null< bool >  X,hx::Null< bool >  Y);
		Dynamic changeValuesEnabled_dyn();

		virtual Void changeGraphic( Dynamic Image);
		Dynamic changeGraphic_dyn();

		virtual Void increaseLength( int amount);
		Dynamic increaseLength_dyn();

		virtual Void resetTrail( );
		Dynamic resetTrail_dyn();

		virtual Void postUpdate( );

		Array< Float > recentAngles; /* REM */ 
		Array< ::org::flixel::FlxPoint > recentPositions; /* REM */ 
		Float difference; /* REM */ 
		Float transp; /* REM */ 
		Dynamic image; /* REM */ 
		int trailLength; /* REM */ 
		int counter; /* REM */ 
		bool rotationsEnabled; /* REM */ 
		bool yEnabled; /* REM */ 
		bool xEnabled; /* REM */ 
		int delay; /* REM */ 
		::org::flixel::FlxSprite sprite; /* REM */ 
};

} // end namespace addons

#endif /* INCLUDED_addons_FlxTrail */ 
