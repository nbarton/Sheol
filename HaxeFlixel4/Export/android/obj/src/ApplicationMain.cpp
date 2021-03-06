#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_HaxeFlixel4
#include <HaxeFlixel4.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_display_StageAlign
#include <native/display/StageAlign.h>
#endif
#ifndef INCLUDED_native_display_StageScaleMode
#include <native/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",13);
		HX_STACK_LINE(15)
		::nme::Lib_obj::setPackage(HX_CSTRING(""),HX_CSTRING("HaxeFlixel4"),HX_CSTRING("com.testing.myapplication"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",40);
			{
				HX_STACK_LINE(43)
				::nme::Lib_obj::get_current()->get_stage()->set_align(::native::display::StageAlign_obj::TOP_LEFT_dyn());
				HX_STACK_LINE(44)
				::nme::Lib_obj::get_current()->get_stage()->set_scaleMode(::native::display::StageScaleMode_obj::NO_SCALE_dyn());
				HX_STACK_LINE(47)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(49)
				{
					HX_STACK_LINE(49)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::HaxeFlixel4 >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(49)
					while(((_g < _g1->length))){
						HX_STACK_LINE(49)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(49)
						++(_g);
						HX_STACK_LINE(51)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(53)
							hasMain = true;
							HX_STACK_LINE(54)
							break;
						}
					}
				}
				HX_STACK_LINE(58)
				if ((hasMain)){
					HX_STACK_LINE(59)
					::Reflect_obj::callMethod(hx::ClassOf< ::HaxeFlixel4 >(),::Reflect_obj::field(hx::ClassOf< ::HaxeFlixel4 >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(64)
					::HaxeFlixel4 instance = ::Type_obj::createInstance(hx::ClassOf< ::HaxeFlixel4 >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(66)
					if ((::Std_obj::is(instance,hx::ClassOf< ::native::display::DisplayObject >()))){
						HX_STACK_LINE(66)
						::nme::Lib_obj::get_current()->addChild(instance);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)640,(int)400,(int)30,(int)16711680,(int((int((int((int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int(::nme::Lib_obj::FULLSCREEN))) | int((int)0))) | int((int)0)),HX_CSTRING("HaxeFlixel4"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",104);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(107)
	if (((inName == HX_CSTRING("assets/basetile4x.png")))){
		HX_STACK_LINE(108)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/basetile4x.png"),null());
	}
	HX_STACK_LINE(114)
	if (((inName == HX_CSTRING("assets/CHALONSE.TTF")))){
		HX_STACK_LINE(115)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/CHALONSE.TTF"));
	}
	HX_STACK_LINE(121)
	if (((inName == HX_CSTRING("assets/curs.png")))){
		HX_STACK_LINE(122)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/curs.png"),null());
	}
	HX_STACK_LINE(128)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(129)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(135)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(136)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(142)
	if (((inName == HX_CSTRING("assets/data/beep.mp3")))){
		HX_STACK_LINE(143)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.mp3"));
	}
	HX_STACK_LINE(149)
	if (((inName == HX_CSTRING("assets/data/beep.wav")))){
		HX_STACK_LINE(150)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.wav"));
	}
	HX_STACK_LINE(156)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(157)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(163)
	if (((inName == HX_CSTRING("assets/data/courier.ttf")))){
		HX_STACK_LINE(164)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/courier.ttf"));
	}
	HX_STACK_LINE(170)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(171)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(177)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(178)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(184)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(185)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(191)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(192)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(198)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(199)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(205)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(206)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(212)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(213)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(219)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(220)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(226)
	if (((inName == HX_CSTRING("assets/data/nokiafc22.ttf")))){
		HX_STACK_LINE(227)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/nokiafc22.ttf"));
	}
	HX_STACK_LINE(233)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(234)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(240)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(241)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(247)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(248)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(254)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(255)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(261)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(262)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(268)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(269)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(275)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(276)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(282)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(283)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(289)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(290)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(296)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(297)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(303)
	if (((inName == HX_CSTRING("assets/detector.png")))){
		HX_STACK_LINE(304)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/detector.png"),null());
	}
	HX_STACK_LINE(310)
	if (((inName == HX_CSTRING("assets/dust.png")))){
		HX_STACK_LINE(311)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/dust.png"),null());
	}
	HX_STACK_LINE(317)
	if (((inName == HX_CSTRING("assets/Icon.png")))){
		HX_STACK_LINE(318)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/Icon.png"),null());
	}
	HX_STACK_LINE(324)
	if (((inName == HX_CSTRING("assets/player.png")))){
		HX_STACK_LINE(325)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/player.png"),null());
	}
	HX_STACK_LINE(331)
	if (((inName == HX_CSTRING("assets/playerSprite.png")))){
		HX_STACK_LINE(332)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/playerSprite.png"),null());
	}
	HX_STACK_LINE(338)
	if (((inName == HX_CSTRING("assets/data/courier.ttf")))){
		HX_STACK_LINE(339)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/courier.ttf"));
	}
	HX_STACK_LINE(345)
	if (((inName == HX_CSTRING("assets/data/nokiafc22.ttf")))){
		HX_STACK_LINE(346)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/nokiafc22.ttf"));
	}
	HX_STACK_LINE(352)
	if (((inName == HX_CSTRING("assets/basetile4x.png")))){
		HX_STACK_LINE(353)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/basetile4x.png"),null());
	}
	HX_STACK_LINE(359)
	if (((inName == HX_CSTRING("assets/curs.png")))){
		HX_STACK_LINE(360)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/curs.png"),null());
	}
	HX_STACK_LINE(366)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(367)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(373)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(374)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(380)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(381)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(387)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(388)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(394)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(395)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(401)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(402)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(408)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(409)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(415)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(416)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(422)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(423)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(429)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(430)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(436)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(437)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(443)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(444)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(450)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(451)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(457)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(458)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(464)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(465)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(471)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(472)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(478)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(479)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(485)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(486)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(492)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(493)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(499)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(500)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(506)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(507)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(513)
	if (((inName == HX_CSTRING("assets/detector.png")))){
		HX_STACK_LINE(514)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/detector.png"),null());
	}
	HX_STACK_LINE(520)
	if (((inName == HX_CSTRING("assets/dust.png")))){
		HX_STACK_LINE(521)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/dust.png"),null());
	}
	HX_STACK_LINE(527)
	if (((inName == HX_CSTRING("assets/Icon.png")))){
		HX_STACK_LINE(528)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/Icon.png"),null());
	}
	HX_STACK_LINE(534)
	if (((inName == HX_CSTRING("assets/player.png")))){
		HX_STACK_LINE(535)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/player.png"),null());
	}
	HX_STACK_LINE(541)
	if (((inName == HX_CSTRING("assets/playerSprite.png")))){
		HX_STACK_LINE(542)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/playerSprite.png"),null());
	}
	HX_STACK_LINE(548)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(549)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(555)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(556)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(562)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(563)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(569)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(570)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(576)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(577)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(583)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(584)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(590)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(591)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(597)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(598)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(604)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(605)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(611)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(612)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(618)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(619)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(625)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(626)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(632)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(633)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(639)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(640)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(646)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(647)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(653)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(654)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(660)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(661)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(667)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(668)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(674)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(675)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(681)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(682)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(688)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(689)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(695)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(696)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(702)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(703)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(709)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(710)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(716)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(717)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(723)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(724)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(730)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(731)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(737)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(738)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(744)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(745)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(751)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(752)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(758)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(759)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(766)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

