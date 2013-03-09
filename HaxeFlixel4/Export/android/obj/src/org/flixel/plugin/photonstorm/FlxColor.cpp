#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxColor
#include <org/flixel/plugin/photonstorm/FlxColor.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxMath
#include <org/flixel/plugin/photonstorm/FlxMath.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxColor_obj::__construct()
{
HX_STACK_PUSH("FlxColor::new","org/flixel/plugin/photonstorm/FlxColor.hx",29);
{
}
;
	return null();
}

FlxColor_obj::~FlxColor_obj() { }

Dynamic FlxColor_obj::__CreateEmpty() { return  new FlxColor_obj; }
hx::ObjectPtr< FlxColor_obj > FlxColor_obj::__new()
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

Dynamic FlxColor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_obj > result = new FlxColor_obj();
	result->__construct();
	return result;}

Array< int > FlxColor_obj::getHSVColorWheel( hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxColor::getHSVColorWheel","org/flixel/plugin/photonstorm/FlxColor.hx",43);
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(47)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while(((_g < (int)360))){
				HX_STACK_LINE(50)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(52)
				colors[c] = ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(c,1.0,1.0,alpha);
			}
		}
		HX_STACK_LINE(55)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getHSVColorWheel,return )

int FlxColor_obj::getComplementHarmony( int color){
	HX_STACK_PUSH("FlxColor::getComplementHarmony","org/flixel/plugin/photonstorm/FlxColor.hx",72);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(73)
	Dynamic hsv = ::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHSV(color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(75)
	int opposite = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(77)
	return ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(opposite,1.0,1.0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getComplementHarmony,return )

Dynamic FlxColor_obj::getAnalogousHarmony( int color,hx::Null< int >  __o_threshold){
int threshold = __o_threshold.Default(30);
	HX_STACK_PUSH("FlxColor::getAnalogousHarmony","org/flixel/plugin/photonstorm/FlxColor.hx",95);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(threshold,"threshold");
{
		HX_STACK_LINE(96)
		Dynamic hsv = ::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHSV(color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(98)
		if (((bool((threshold > (int)359)) || bool((threshold < (int)0))))){
			HX_STACK_LINE(99)
			hx::Throw (HX_CSTRING("FlxColor Warning: Invalid threshold given to getAnalogousHarmony()"));
		}
		HX_STACK_LINE(103)
		int warmer = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),((int)359 - threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(104)
		int colder = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),threshold,(int)359);		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &hsv,int &color,int &warmer,int &colder){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxColor.hx",106);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , color,false);
					__result->Add(HX_CSTRING("color2") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(warmer,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("color3") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(colder,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		return _Function_1_1::Block(hsv,color,warmer,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getAnalogousHarmony,return )

Dynamic FlxColor_obj::getSplitComplementHarmony( int color,hx::Null< int >  __o_threshold){
int threshold = __o_threshold.Default(30);
	HX_STACK_PUSH("FlxColor::getSplitComplementHarmony","org/flixel/plugin/photonstorm/FlxColor.hx",124);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(threshold,"threshold");
{
		HX_STACK_LINE(125)
		Dynamic hsv = ::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHSV(color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(127)
		if (((bool((threshold >= (int)359)) || bool((threshold <= (int)0))))){
			HX_STACK_LINE(128)
			hx::Throw (HX_CSTRING("FlxColor Warning: Invalid threshold given to getSplitComplementHarmony()"));
		}
		HX_STACK_LINE(132)
		int opposite = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(134)
		int warmer = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),(opposite - threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(135)
		int colder = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),(opposite + threshold),(int)359);		HX_STACK_VAR(colder,"colder");
		HX_STACK_LINE(137)
		::org::flixel::FlxG_obj::log((((((((HX_CSTRING("hue: ") + hsv->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" opposite: ")) + opposite) + HX_CSTRING(" warmer: ")) + warmer) + HX_CSTRING(" colder: ")) + colder));
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &hsv,int &color,int &warmer,int &colder){
				HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxColor.hx",141);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , color,false);
					__result->Add(HX_CSTRING("color2") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(warmer,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("color3") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(colder,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(141)
		return _Function_1_1::Block(hsv,color,warmer,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_obj,getSplitComplementHarmony,return )

Dynamic FlxColor_obj::getTriadicHarmony( int color){
	HX_STACK_PUSH("FlxColor::getTriadicHarmony","org/flixel/plugin/photonstorm/FlxColor.hx",158);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(159)
	Dynamic hsv = ::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHSV(color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(161)
	int triadic1 = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(::Math_obj::floor(hsv->__Field(HX_CSTRING("hue"),true)),(int)120,(int)359);		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(162)
	int triadic2 = ::org::flixel::plugin::photonstorm::FlxMath_obj::wrapValue(triadic1,(int)120,(int)359);		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &triadic2,int &color,int &triadic1){
			HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxColor.hx",164);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , color,false);
				__result->Add(HX_CSTRING("color2") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(triadic1,1.0,1.0,null()),false);
				__result->Add(HX_CSTRING("color3") , ::org::flixel::plugin::photonstorm::FlxColor_obj::HSVtoRGB(triadic2,1.0,1.0,null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(164)
	return _Function_1_1::Block(triadic2,color,triadic1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getTriadicHarmony,return )

::String FlxColor_obj::getColorInfo( int color){
	HX_STACK_PUSH("FlxColor::getColorInfo","org/flixel/plugin/photonstorm/FlxColor.hx",180);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(181)
	Dynamic argb = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color);		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(182)
	Dynamic hsl = ::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHSV(color);		HX_STACK_VAR(hsl,"hsl");
	HX_STACK_LINE(185)
	::String result = (::org::flixel::plugin::photonstorm::FlxColor_obj::RGBtoHexString(color) + HX_CSTRING("\n"));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(188)
	hx::AddEq(result,((((((((HX_CSTRING("Alpha: ") + argb->__Field(HX_CSTRING("alpha"),true)) + HX_CSTRING(" Red: ")) + argb->__Field(HX_CSTRING("red"),true)) + HX_CSTRING(" Green: ")) + argb->__Field(HX_CSTRING("green"),true)) + HX_CSTRING(" Blue: ")) + argb->__Field(HX_CSTRING("blue"),true)) + HX_CSTRING("\n")));
	HX_STACK_LINE(191)
	hx::AddEq(result,(((((HX_CSTRING("Hue: ") + hsl->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" Saturation: ")) + hsl->__Field(HX_CSTRING("saturation"),true)) + HX_CSTRING(" Lightnes: ")) + hsl->__Field(HX_CSTRING("lightness"),true)));
	HX_STACK_LINE(193)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getColorInfo,return )

::String FlxColor_obj::RGBtoHexString( int color){
	HX_STACK_PUSH("FlxColor::RGBtoHexString","org/flixel/plugin/photonstorm/FlxColor.hx",208);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(209)
	Dynamic argb = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color);		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(211)
	return ((((HX_CSTRING("0x") + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("alpha"),true))) + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("red"),true))) + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("green"),true))) + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("blue"),true)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoHexString,return )

::String FlxColor_obj::RGBtoWebString( int color){
	HX_STACK_PUSH("FlxColor::RGBtoWebString","org/flixel/plugin/photonstorm/FlxColor.hx",226);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(227)
	Dynamic argb = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color);		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(229)
	return (((HX_CSTRING("#") + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("red"),true))) + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("green"),true))) + ::org::flixel::plugin::photonstorm::FlxColor_obj::colorToHexString(argb->__Field(HX_CSTRING("blue"),true)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoWebString,return )

::String FlxColor_obj::colorToHexString( int color){
	HX_STACK_PUSH("FlxColor::colorToHexString","org/flixel/plugin/photonstorm/FlxColor.hx",244);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(245)
	::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(247)
	Float lsd = hx::Mod(color,(int)16);		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(248)
	Float msd = (Float(((color - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(250)
	::String hexified = (digits.charAt(::Math_obj::floor(msd)) + digits.charAt(::Math_obj::floor(lsd)));		HX_STACK_VAR(hexified,"hexified");
	HX_STACK_LINE(252)
	return hexified;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,colorToHexString,return )

int FlxColor_obj::HSVtoRGB( Float h,Float s,Float v,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxColor::HSVtoRGB","org/flixel/plugin/photonstorm/FlxColor.hx",270);
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(276)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(279)
		if (((s == 0.0))){
			HX_STACK_LINE(280)
			result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((v * (int)255)),::Math_obj::floor((v * (int)255)),::Math_obj::floor((v * (int)255)));
		}
		else{
			HX_STACK_LINE(285)
			h = (Float(h) / Float(60.0));
			HX_STACK_LINE(286)
			Float f = (h - ::Std_obj::_int(h));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(287)
			Float p = (v * ((1.0 - s)));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(288)
			Float q = (v * ((1.0 - (s * f))));		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(289)
			Float t = (v * ((1.0 - (s * ((1.0 - f))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(291)
			switch( (int)(::Std_obj::_int(h))){
				case (int)0: {
					HX_STACK_LINE(293)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((v * (int)255)),::Math_obj::floor((t * (int)255)),::Math_obj::floor((p * (int)255)));
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(296)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((q * (int)255)),::Math_obj::floor((v * (int)255)),::Math_obj::floor((p * (int)255)));
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(299)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((p * (int)255)),::Math_obj::floor((v * (int)255)),::Math_obj::floor((t * (int)255)));
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(302)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((p * (int)255)),::Math_obj::floor((q * (int)255)),::Math_obj::floor((v * (int)255)));
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(305)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((t * (int)255)),::Math_obj::floor((p * (int)255)),::Math_obj::floor((v * (int)255)));
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(308)
					result = ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,::Math_obj::floor((v * (int)255)),::Math_obj::floor((p * (int)255)),::Math_obj::floor((q * (int)255)));
				}
				;break;
				default: {
					HX_STACK_LINE(311)
					::org::flixel::FlxG_obj::log(HX_CSTRING("FlxColor Error: HSVtoRGB : Unknown color"));
				}
			}
		}
		HX_STACK_LINE(316)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,HSVtoRGB,return )

Dynamic FlxColor_obj::RGBtoHSV( int color){
	HX_STACK_PUSH("FlxColor::RGBtoHSV","org/flixel/plugin/photonstorm/FlxColor.hx",331);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(332)
	Dynamic rgb = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color);		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(334)
	Float red = (Float(rgb->__Field(HX_CSTRING("red"),true)) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(335)
	Float green = (Float(rgb->__Field(HX_CSTRING("green"),true)) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(336)
	Float blue = (Float(rgb->__Field(HX_CSTRING("blue"),true)) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(338)
	Float min = ::Math_obj::min(red,::Math_obj::min(green,blue));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(339)
	Float max = ::Math_obj::max(red,::Math_obj::max(green,blue));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(340)
	Float delta = (max - min);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(341)
	Float lightness = (Float(((max + min))) / Float((int)2));		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(342)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(343)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(346)
	if (((delta == (int)0))){
		HX_STACK_LINE(348)
		hue = (int)0;
		HX_STACK_LINE(349)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(353)
		if (((lightness < 0.5))){
			HX_STACK_LINE(354)
			saturation = (Float(delta) / Float(((max + min))));
		}
		else{
			HX_STACK_LINE(358)
			saturation = (Float(delta) / Float(((((int)2 - max) - min))));
		}
		HX_STACK_LINE(362)
		Float delta_r = (Float((((Float(((max - red))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(363)
		Float delta_g = (Float((((Float(((max - green))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(364)
		Float delta_b = (Float((((Float(((max - blue))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(366)
		if (((red == max))){
			HX_STACK_LINE(367)
			hue = (delta_b - delta_g);
		}
		else{
			HX_STACK_LINE(370)
			if (((green == max))){
				HX_STACK_LINE(371)
				hue = (((Float((int)1) / Float((int)3)) + delta_r) - delta_b);
			}
			else{
				HX_STACK_LINE(374)
				if (((blue == max))){
					HX_STACK_LINE(375)
					hue = (((Float((int)2) / Float((int)3)) + delta_g) - delta_r);
				}
			}
		}
		HX_STACK_LINE(379)
		if (((hue < (int)0))){
			HX_STACK_LINE(380)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(384)
		if (((hue > (int)1))){
			HX_STACK_LINE(385)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(391)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(392)
	hue = ::Math_obj::round(hue);
	struct _Function_1_1{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxColor.hx",398);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , hue,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("lightness") , lightness,false);
				__result->Add(HX_CSTRING("value") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(398)
	return _Function_1_1::Block(saturation,lightness,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,RGBtoHSV,return )

int FlxColor_obj::interpolateColor( int color1,int color2,int steps,int currentStep,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxColor::interpolateColor","org/flixel/plugin/photonstorm/FlxColor.hx",436);
	HX_STACK_ARG(color1,"color1");
	HX_STACK_ARG(color2,"color2");
	HX_STACK_ARG(steps,"steps");
	HX_STACK_ARG(currentStep,"currentStep");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(437)
		Dynamic src1 = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color1);		HX_STACK_VAR(src1,"src1");
		HX_STACK_LINE(438)
		Dynamic src2 = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color2);		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(440)
		int r = ::Math_obj::floor(((Float((((src2->__Field(HX_CSTRING("red"),true) - src1->__Field(HX_CSTRING("red"),true))) * currentStep)) / Float(steps)) + src1->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(441)
		int g = ::Math_obj::floor(((Float((((src2->__Field(HX_CSTRING("green"),true) - src1->__Field(HX_CSTRING("green"),true))) * currentStep)) / Float(steps)) + src1->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(442)
		int b = ::Math_obj::floor(((Float((((src2->__Field(HX_CSTRING("blue"),true) - src1->__Field(HX_CSTRING("blue"),true))) * currentStep)) / Float(steps)) + src1->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(444)
		return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,r,g,b);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_obj,interpolateColor,return )

int FlxColor_obj::interpolateColorWithRGB( int color,int r2,int g2,int b2,int steps,int currentStep){
	HX_STACK_PUSH("FlxColor::interpolateColorWithRGB","org/flixel/plugin/photonstorm/FlxColor.hx",448);
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(r2,"r2");
	HX_STACK_ARG(g2,"g2");
	HX_STACK_ARG(b2,"b2");
	HX_STACK_ARG(steps,"steps");
	HX_STACK_ARG(currentStep,"currentStep");
	HX_STACK_LINE(449)
	Dynamic src = ::org::flixel::plugin::photonstorm::FlxColor_obj::getRGB(color);		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(451)
	int r = ::Math_obj::floor(((Float((((r2 - src->__Field(HX_CSTRING("red"),true))) * currentStep)) / Float(steps)) + src->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(452)
	int g = ::Math_obj::floor(((Float((((g2 - src->__Field(HX_CSTRING("green"),true))) * currentStep)) / Float(steps)) + src->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(453)
	int b = ::Math_obj::floor(((Float((((b2 - src->__Field(HX_CSTRING("blue"),true))) * currentStep)) / Float(steps)) + src->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(455)
	return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor24(r,g,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_obj,interpolateColorWithRGB,return )

int FlxColor_obj::interpolateRGB( int r1,int g1,int b1,int r2,int g2,int b2,int steps,int currentStep){
	HX_STACK_PUSH("FlxColor::interpolateRGB","org/flixel/plugin/photonstorm/FlxColor.hx",459);
	HX_STACK_ARG(r1,"r1");
	HX_STACK_ARG(g1,"g1");
	HX_STACK_ARG(b1,"b1");
	HX_STACK_ARG(r2,"r2");
	HX_STACK_ARG(g2,"g2");
	HX_STACK_ARG(b2,"b2");
	HX_STACK_ARG(steps,"steps");
	HX_STACK_ARG(currentStep,"currentStep");
	HX_STACK_LINE(460)
	int r = ::Math_obj::floor(((Float((((r2 - r1)) * currentStep)) / Float(steps)) + r1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(461)
	int g = ::Math_obj::floor(((Float((((g2 - g1)) * currentStep)) / Float(steps)) + g1));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(462)
	int b = ::Math_obj::floor(((Float((((b2 - b1)) * currentStep)) / Float(steps)) + b1));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(464)
	return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor24(r,g,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColor_obj,interpolateRGB,return )

int FlxColor_obj::getRandomColor( hx::Null< int >  __o_min,hx::Null< int >  __o_max,hx::Null< int >  __o_alpha){
int min = __o_min.Default(0);
int max = __o_max.Default(255);
int alpha = __o_alpha.Default(255);
	HX_STACK_PUSH("FlxColor::getRandomColor","org/flixel/plugin/photonstorm/FlxColor.hx",503);
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(505)
		if (((max > (int)255))){
			HX_STACK_LINE(507)
			::org::flixel::FlxG_obj::log(HX_CSTRING("FlxColor Warning: getRandomColor - max value too high"));
			HX_STACK_LINE(508)
			return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor24((int)255,(int)255,(int)255);
		}
		HX_STACK_LINE(511)
		if (((min > max))){
			HX_STACK_LINE(513)
			::org::flixel::FlxG_obj::log(HX_CSTRING("FlxColor Warning: getRandomColor - min value higher than max"));
			HX_STACK_LINE(514)
			return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor24((int)255,(int)255,(int)255);
		}
		HX_STACK_LINE(517)
		int red = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(518)
		int green = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(519)
		int blue = (min + ::Std_obj::_int((::Math_obj::random() * ((max - min)))));		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(521)
		return ::org::flixel::plugin::photonstorm::FlxColor_obj::getColor32(alpha,red,green,blue);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_obj,getRandomColor,return )

int FlxColor_obj::getColor32( int alpha,int red,int green,int blue){
	HX_STACK_PUSH("FlxColor::getColor32","org/flixel/plugin/photonstorm/FlxColor.hx",542);
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(542)
	return (int((int((int((int(alpha) << int((int)24))) | int((int(red) << int((int)16))))) | int((int(green) << int((int)8))))) | int(blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_obj,getColor32,return )

int FlxColor_obj::getColor24( int red,int green,int blue){
	HX_STACK_PUSH("FlxColor::getColor24","org/flixel/plugin/photonstorm/FlxColor.hx",567);
	HX_STACK_ARG(red,"red");
	HX_STACK_ARG(green,"green");
	HX_STACK_ARG(blue,"blue");
	HX_STACK_LINE(567)
	return (int((int((int(red) << int((int)16))) | int((int(green) << int((int)8))))) | int(blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_obj,getColor24,return )

Dynamic FlxColor_obj::getRGB( int color){
	HX_STACK_PUSH("FlxColor::getRGB","org/flixel/plugin/photonstorm/FlxColor.hx",598);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(601)
	int alpha = (int((int(color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(602)
	int red = (int((int(color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(603)
	int green = (int((int(color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(604)
	int blue = (int(color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	struct _Function_1_1{
		inline static Dynamic Block( int &alpha,int &green,int &blue,int &red){
			HX_STACK_PUSH("*::closure","org/flixel/plugin/photonstorm/FlxColor.hx",612);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(612)
	return _Function_1_1::Block(alpha,green,blue,red);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getRGB,return )

int FlxColor_obj::getAlpha( int color){
	HX_STACK_PUSH("FlxColor::getAlpha","org/flixel/plugin/photonstorm/FlxColor.hx",628);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(628)
	return (int((int(color) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getAlpha,return )

Float FlxColor_obj::getAlphaFloat( int color){
	HX_STACK_PUSH("FlxColor::getAlphaFloat","org/flixel/plugin/photonstorm/FlxColor.hx",651);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(654)
	int f = (int((int(color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(660)
	return (Float(f) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getAlphaFloat,return )

int FlxColor_obj::getRed( int color){
	HX_STACK_PUSH("FlxColor::getRed","org/flixel/plugin/photonstorm/FlxColor.hx",675);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(675)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getRed,return )

int FlxColor_obj::getGreen( int color){
	HX_STACK_PUSH("FlxColor::getGreen","org/flixel/plugin/photonstorm/FlxColor.hx",691);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(691)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getGreen,return )

int FlxColor_obj::getBlue( int color){
	HX_STACK_PUSH("FlxColor::getBlue","org/flixel/plugin/photonstorm/FlxColor.hx",707);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(707)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_obj,getBlue,return )


FlxColor_obj::FlxColor_obj()
{
}

void FlxColor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxColor);
	HX_MARK_END_CLASS();
}

void FlxColor_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxColor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRGB") ) { return getRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HSVtoRGB") ) { return HSVtoRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { return RGBtoHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { return getColor32_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor24") ) { return getColor24_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { return getAlphaFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RGBtoHexString") ) { return RGBtoHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoWebString") ) { return RGBtoWebString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { return interpolateRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { return getRandomColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { return getHSVColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { return colorToHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { return interpolateColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { return interpolateColorWithRGB_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getHSVColorWheel"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("RGBtoHexString"),
	HX_CSTRING("RGBtoWebString"),
	HX_CSTRING("colorToHexString"),
	HX_CSTRING("HSVtoRGB"),
	HX_CSTRING("RGBtoHSV"),
	HX_CSTRING("interpolateColor"),
	HX_CSTRING("interpolateColorWithRGB"),
	HX_CSTRING("interpolateRGB"),
	HX_CSTRING("getRandomColor"),
	HX_CSTRING("getColor32"),
	HX_CSTRING("getColor24"),
	HX_CSTRING("getRGB"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("getAlphaFloat"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_obj::__mClass,"__mClass");
};

Class FlxColor_obj::__mClass;

void FlxColor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxColor"), hx::TCanCast< FlxColor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxColor_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
