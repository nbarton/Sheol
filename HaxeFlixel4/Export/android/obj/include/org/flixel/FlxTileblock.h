#ifndef INCLUDED_org_flixel_FlxTileblock
#define INCLUDED_org_flixel_FlxTileblock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxTileblock)
namespace org{
namespace flixel{


class FlxTileblock_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxTileblock_obj OBJ_;
		FlxTileblock_obj();
		Void __construct(int X,int Y,int Width,int Height);

	public:
		static hx::ObjectPtr< FlxTileblock_obj > __new(int X,int Y,int Width,int Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTileblock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTileblock"); }

		virtual Void updateFrameData( );

		virtual Void destroy( );

		virtual Void draw( );

		virtual ::org::flixel::FlxTileblock loadTiles( Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,hx::Null< int >  Empties);
		Dynamic loadTiles_dyn();

		Array< int > _tileIndices; /* REM */ 
		Array< Float > _tileData; /* REM */ 
		int _tileHeight; /* REM */ 
		int _tileWidth; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxTileblock */ 
