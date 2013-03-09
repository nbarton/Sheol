#ifndef INCLUDED_org_flixel_FlxState
#define INCLUDED_org_flixel_FlxState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxGroup.h>
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxLayer)
HX_DECLARE_CLASS2(org,flixel,FlxState)
namespace org{
namespace flixel{


class FlxState_obj : public ::org::flixel::FlxGroup_obj{
	public:
		typedef ::org::flixel::FlxGroup_obj super;
		typedef FlxState_obj OBJ_;
		FlxState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxState"); }

		virtual ::org::flixel::FlxLayer getLayerFor( ::String KeyInBitmapCache);
		Dynamic getLayerFor_dyn();

		virtual ::org::flixel::FlxLayer removeLayer( ::org::flixel::FlxLayer Layer);
		Dynamic removeLayer_dyn();

		virtual ::org::flixel::FlxLayer addLayer( ::org::flixel::FlxLayer Layer);
		Dynamic addLayer_dyn();

		virtual Void swapLayersAt( int id1,int id2);
		Dynamic swapLayersAt_dyn();

		virtual Void swapLayers( ::org::flixel::FlxLayer layer1,::org::flixel::FlxLayer layer2);
		Dynamic swapLayers_dyn();

		virtual ::org::flixel::FlxLayer removeLayerAt( int index);
		Dynamic removeLayerAt_dyn();

		virtual ::org::flixel::FlxLayer addLayerAt( ::org::flixel::FlxLayer layer,int index);
		Dynamic addLayerAt_dyn();

		virtual int getMaxIndex( );
		Dynamic getMaxIndex_dyn();

		virtual int getLayerIndex( ::org::flixel::FlxLayer layer);
		Dynamic getLayerIndex_dyn();

		virtual ::org::flixel::FlxLayer getLayerAt( int index);
		Dynamic getLayerAt_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void clearAllDrawData( );
		Dynamic clearAllDrawData_dyn();

		virtual Void draw( );

		virtual Void destroy( );

		Array< ::org::flixel::FlxLayer > _layers; /* REM */ 
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxState */ 
