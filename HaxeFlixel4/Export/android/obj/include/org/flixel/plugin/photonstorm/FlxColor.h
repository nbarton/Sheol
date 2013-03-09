#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxColor
#define INCLUDED_org_flixel_plugin_photonstorm_FlxColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,flixel,plugin,photonstorm,FlxColor)
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{


class FlxColor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColor_obj OBJ_;
		FlxColor_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxColor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxColor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxColor"); }

		static Array< int > getHSVColorWheel( hx::Null< int >  alpha);
		static Dynamic getHSVColorWheel_dyn();

		static int getComplementHarmony( int color);
		static Dynamic getComplementHarmony_dyn();

		static Dynamic getAnalogousHarmony( int color,hx::Null< int >  threshold);
		static Dynamic getAnalogousHarmony_dyn();

		static Dynamic getSplitComplementHarmony( int color,hx::Null< int >  threshold);
		static Dynamic getSplitComplementHarmony_dyn();

		static Dynamic getTriadicHarmony( int color);
		static Dynamic getTriadicHarmony_dyn();

		static ::String getColorInfo( int color);
		static Dynamic getColorInfo_dyn();

		static ::String RGBtoHexString( int color);
		static Dynamic RGBtoHexString_dyn();

		static ::String RGBtoWebString( int color);
		static Dynamic RGBtoWebString_dyn();

		static ::String colorToHexString( int color);
		static Dynamic colorToHexString_dyn();

		static int HSVtoRGB( Float h,Float s,Float v,hx::Null< int >  alpha);
		static Dynamic HSVtoRGB_dyn();

		static Dynamic RGBtoHSV( int color);
		static Dynamic RGBtoHSV_dyn();

		static int interpolateColor( int color1,int color2,int steps,int currentStep,hx::Null< int >  alpha);
		static Dynamic interpolateColor_dyn();

		static int interpolateColorWithRGB( int color,int r2,int g2,int b2,int steps,int currentStep);
		static Dynamic interpolateColorWithRGB_dyn();

		static int interpolateRGB( int r1,int g1,int b1,int r2,int g2,int b2,int steps,int currentStep);
		static Dynamic interpolateRGB_dyn();

		static int getRandomColor( hx::Null< int >  min,hx::Null< int >  max,hx::Null< int >  alpha);
		static Dynamic getRandomColor_dyn();

		static int getColor32( int alpha,int red,int green,int blue);
		static Dynamic getColor32_dyn();

		static int getColor24( int red,int green,int blue);
		static Dynamic getColor24_dyn();

		static Dynamic getRGB( int color);
		static Dynamic getRGB_dyn();

		static int getAlpha( int color);
		static Dynamic getAlpha_dyn();

		static Float getAlphaFloat( int color);
		static Dynamic getAlphaFloat_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

};

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm

#endif /* INCLUDED_org_flixel_plugin_photonstorm_FlxColor */ 
