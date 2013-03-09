#ifndef INCLUDED_org_flixel_FlxLayer
#define INCLUDED_org_flixel_FlxLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,BlendMode)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,Tilesheet)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxLayer)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS4(org,flixel,system,layer,Node)
namespace org{
namespace flixel{


class FlxLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxLayer_obj OBJ_;
		FlxLayer_obj();
		Void __construct(::String Name);

	public:
		static hx::ObjectPtr< FlxLayer_obj > __new(::String Name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxLayer"); }

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);
		Dynamic set_atlas_dyn();

		virtual ::org::flixel::system::layer::Atlas get_atlas( );
		Dynamic get_atlas_dyn();

		virtual ::neash::display::BlendMode set_blend( ::neash::display::BlendMode value);
		Dynamic set_blend_dyn();

		virtual ::neash::display::BlendMode get_blend( );
		Dynamic get_blend_dyn();

		::neash::display::BlendMode blend; /* REM */ 
		::org::flixel::system::layer::Atlas atlas; /* REM */ 
		virtual Void clearDrawData( int numCameras);
		Dynamic clearDrawData_dyn();

		virtual Void render( int numCameras);
		Dynamic render_dyn();

		virtual bool hasImage( ::String Key);
		Dynamic hasImage_dyn();

		virtual ::org::flixel::system::layer::Node addImage( Dynamic Image,::String Key,hx::Null< bool >  Unique);
		Dynamic addImage_dyn();

		virtual ::org::flixel::FlxBasic removeObjectFromLayer( ::org::flixel::FlxBasic Object);
		Dynamic removeObjectFromLayer_dyn();

		virtual ::org::flixel::FlxBasic remove( ::org::flixel::FlxBasic Object);
		Dynamic remove_dyn();

		virtual ::org::flixel::FlxBasic addObjectToLayer( ::org::flixel::FlxBasic Object);
		Dynamic addObjectToLayer_dyn();

		virtual ::org::flixel::FlxBasic add( ::org::flixel::FlxBasic Object);
		Dynamic add_dyn();

		virtual Void destroy( hx::Null< bool >  total);
		Dynamic destroy_dyn();

		virtual Void updateFlags( );
		Dynamic updateFlags_dyn();

		virtual bool set_isColored( bool value);
		Dynamic set_isColored_dyn();

		bool isColored; /* REM */ 
		virtual Void redrawNode( ::org::flixel::system::layer::Node node);
		Dynamic redrawNode_dyn();

		virtual Void redrawAtlas( );
		Dynamic redrawAtlas_dyn();

		bool onStage; /* REM */ 
		bool antialiasing; /* REM */ 
		Array< int > positionData; /* REM */ 
		Array< Array< Float > > drawData; /* REM */ 
		int _blend; /* REM */ 
		int flags; /* REM */ 
		int _numObjects; /* REM */ 
		::neash::display::Tilesheet _tileSheet; /* REM */ 
		::org::flixel::system::layer::Atlas _atlas; /* REM */ 
		static ::Hash _layerCache; /* REM */ 
		static ::org::flixel::FlxLayer fromBitmapData( ::String Key,::neash::display::BitmapData BmData,hx::Null< bool >  Unique);
		static Dynamic fromBitmapData_dyn();

		static ::org::flixel::FlxLayer fromLayer( ::org::flixel::FlxLayer Layer,::String Key);
		static Dynamic fromLayer_dyn();

		static ::org::flixel::system::layer::Atlas createAtlas( int Width,int Height,::String Key);
		static Dynamic createAtlas_dyn();

		static bool checkCache( ::String Key);
		static Dynamic checkCache_dyn();

		static ::org::flixel::FlxLayer getLayer( ::String Key);
		static Dynamic getLayer_dyn();

		static Void removeLayerFromCache( ::org::flixel::FlxLayer Layer,hx::Null< bool >  total);
		static Dynamic removeLayerFromCache_dyn();

		static Void clearLayerCache( );
		static Dynamic clearLayerCache_dyn();

};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxLayer */ 
