#ifndef INCLUDED_BaseLevel
#define INCLUDED_BaseLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxState.h>
HX_DECLARE_CLASS0(BG1)
HX_DECLARE_CLASS0(BaseLevel)
HX_DECLARE_CLASS0(Detector)
HX_DECLARE_CLASS0(NewFlxTrail)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Stardust)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxPoint)
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

		virtual bool PNpoly( ::org::flixel::FlxPoint pt,::org::flixel::FlxPoint pos,Array< ::org::flixel::FlxPoint > verts);
		Dynamic PNpoly_dyn();

		virtual Void detect( );
		Dynamic detect_dyn();

		virtual Void redrawTail( );
		Dynamic redrawTail_dyn();

		virtual Void changeLength( int n);
		Dynamic changeLength_dyn();

		virtual Void update( );

		virtual Void create( );

		int deathTimer; /* REM */ 
		bool bottomRight; /* REM */ 
		bool bottomLeft; /* REM */ 
		bool topRight; /* REM */ 
		bool topLeft; /* REM */ 
		int outTimer; /* REM */ 
		bool notTouching; /* REM */ 
		::Stardust dust7; /* REM */ 
		::Stardust dust6; /* REM */ 
		::Stardust dust5; /* REM */ 
		::Stardust dust4; /* REM */ 
		::Stardust dust3; /* REM */ 
		::Stardust dust2; /* REM */ 
		::Stardust dust1; /* REM */ 
		::org::flixel::FlxPoint point6; /* REM */ 
		::org::flixel::FlxPoint point5; /* REM */ 
		::org::flixel::FlxPoint point4; /* REM */ 
		::org::flixel::FlxPoint point3; /* REM */ 
		::org::flixel::FlxPoint point2; /* REM */ 
		::org::flixel::FlxPoint point1; /* REM */ 
		::org::flixel::FlxPoint point0; /* REM */ 
		int detectTimer; /* REM */ 
		int tailTimer; /* REM */ 
		Float tailAlphaDec; /* REM */ 
		Float tailAlpha; /* REM */ 
		int tailDelay; /* REM */ 
		int tailLength; /* REM */ 
		::Detector detector; /* REM */ 
		int score; /* REM */ 
		::org::flixel::FlxSprite mouseSprite; /* REM */ 
		::NewFlxTrail trail; /* REM */ 
		::org::flixel::FlxSprite trailSprite; /* REM */ 
		::BG1 BG; /* REM */ 
		::Player p1; /* REM */ 
		::org::flixel::FlxText scoreText; /* REM */ 
		::org::flixel::FlxText levelText; /* REM */ 
};


#endif /* INCLUDED_BaseLevel */ 
