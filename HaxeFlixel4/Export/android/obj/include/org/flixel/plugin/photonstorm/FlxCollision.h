#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxCollision
#define INCLUDED_org_flixel_plugin_photonstorm_FlxCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxGroup)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxCollision)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxCollision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxCollision_obj OBJ_;
		FlxCollision_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxCollision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxCollision_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxCollision"); }

		static ::native::display::BitmapData debug; /* REM */ 
		static int CAMERA_WALL_OUTSIDE; /* REM */ 
		static int CAMERA_WALL_INSIDE; /* REM */ 
		static bool pixelPerfectCheck( ::org::flixel::FlxSprite contact,::org::flixel::FlxSprite target,hx::Null< int >  alphaTolerance,::org::flixel::FlxCamera camera);
		static Dynamic pixelPerfectCheck_dyn();

		static bool pixelPerfectPointCheck( int pointX,int pointY,::org::flixel::FlxSprite target,hx::Null< int >  alphaTolerance);
		static Dynamic pixelPerfectPointCheck_dyn();

		static ::org::flixel::FlxGroup createCameraWall( ::org::flixel::FlxCamera camera,int placement,int thickness,hx::Null< bool >  adjustWorldBounds);
		static Dynamic createCameraWall_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxCollision */ 
