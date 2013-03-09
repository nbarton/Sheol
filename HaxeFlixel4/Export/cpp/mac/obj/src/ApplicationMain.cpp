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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_text_Font
#include <neash/text/Font.h>
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
				HX_STACK_LINE(41)
				{
				}
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
					HX_STACK_LINE(63)
					::nme::Lib_obj::nmeGetCurrent()->addChild(hx::TCast< neash::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::HaxeFlixel4 >(),Dynamic( Array_obj<Dynamic>::__new()))));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(39)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)800,(int)600,(int)30,(int)16777215,(int((int((int((int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("HaxeFlixel4"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",87);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(90)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(91)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(97)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(98)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(104)
	if (((inName == HX_CSTRING("assets/data/beep.mp3")))){
		HX_STACK_LINE(105)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.mp3"));
	}
	HX_STACK_LINE(111)
	if (((inName == HX_CSTRING("assets/data/beep.wav")))){
		HX_STACK_LINE(112)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/data/beep.wav"));
	}
	HX_STACK_LINE(118)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(119)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(125)
	if (((inName == HX_CSTRING("assets/data/courier.ttf")))){
		HX_STACK_LINE(126)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/courier.ttf"));
	}
	HX_STACK_LINE(132)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(133)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(139)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(140)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(146)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(147)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(153)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(154)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(160)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(161)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(167)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(168)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(174)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(175)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(181)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(182)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(188)
	if (((inName == HX_CSTRING("assets/data/nokiafc22.ttf")))){
		HX_STACK_LINE(189)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/nokiafc22.ttf"));
	}
	HX_STACK_LINE(195)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(196)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(202)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(203)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(209)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(210)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(216)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(217)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(223)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(224)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(230)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(231)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(237)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(238)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(244)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(245)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(251)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(252)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(258)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(259)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(265)
	if (((inName == HX_CSTRING("assets/data/courier.ttf")))){
		HX_STACK_LINE(266)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/courier.ttf"));
	}
	HX_STACK_LINE(272)
	if (((inName == HX_CSTRING("assets/data/nokiafc22.ttf")))){
		HX_STACK_LINE(273)
		return ::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/data/nokiafc22.ttf"));
	}
	HX_STACK_LINE(279)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(280)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(286)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(287)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(293)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(294)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(300)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(301)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(307)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(308)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(314)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(315)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(321)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(322)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(328)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(329)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(335)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(336)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(342)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(343)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(349)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(350)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(356)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(357)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(363)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(364)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(370)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(371)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(377)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(378)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(384)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(385)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(391)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(392)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(398)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(399)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(405)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(406)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(412)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(413)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(419)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(420)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(426)
	if (((inName == HX_CSTRING("assets/data/autotiles.png")))){
		HX_STACK_LINE(427)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles.png"),null());
	}
	HX_STACK_LINE(433)
	if (((inName == HX_CSTRING("assets/data/autotiles_alt.png")))){
		HX_STACK_LINE(434)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/autotiles_alt.png"),null());
	}
	HX_STACK_LINE(440)
	if (((inName == HX_CSTRING("assets/data/button.png")))){
		HX_STACK_LINE(441)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/button.png"),null());
	}
	HX_STACK_LINE(447)
	if (((inName == HX_CSTRING("assets/data/cursor.png")))){
		HX_STACK_LINE(448)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/cursor.png"),null());
	}
	HX_STACK_LINE(454)
	if (((inName == HX_CSTRING("assets/data/default.png")))){
		HX_STACK_LINE(455)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/default.png"),null());
	}
	HX_STACK_LINE(461)
	if (((inName == HX_CSTRING("assets/data/fontData10pt.png")))){
		HX_STACK_LINE(462)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData10pt.png"),null());
	}
	HX_STACK_LINE(468)
	if (((inName == HX_CSTRING("assets/data/fontData11pt.png")))){
		HX_STACK_LINE(469)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/fontData11pt.png"),null());
	}
	HX_STACK_LINE(475)
	if (((inName == HX_CSTRING("assets/data/handle.png")))){
		HX_STACK_LINE(476)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/handle.png"),null());
	}
	HX_STACK_LINE(482)
	if (((inName == HX_CSTRING("assets/data/logo.png")))){
		HX_STACK_LINE(483)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo.png"),null());
	}
	HX_STACK_LINE(489)
	if (((inName == HX_CSTRING("assets/data/logo_corners.png")))){
		HX_STACK_LINE(490)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_corners.png"),null());
	}
	HX_STACK_LINE(496)
	if (((inName == HX_CSTRING("assets/data/logo_light.png")))){
		HX_STACK_LINE(497)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/logo_light.png"),null());
	}
	HX_STACK_LINE(503)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(504)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(510)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(511)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(517)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(518)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(524)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(525)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(531)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(532)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(538)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(539)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(545)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(546)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(552)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(553)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(559)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(560)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(566)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(567)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(573)
	if (((inName == HX_CSTRING("assets/data/vcr/flixel.png")))){
		HX_STACK_LINE(574)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/flixel.png"),null());
	}
	HX_STACK_LINE(580)
	if (((inName == HX_CSTRING("assets/data/vcr/open.png")))){
		HX_STACK_LINE(581)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/open.png"),null());
	}
	HX_STACK_LINE(587)
	if (((inName == HX_CSTRING("assets/data/vcr/pause.png")))){
		HX_STACK_LINE(588)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/pause.png"),null());
	}
	HX_STACK_LINE(594)
	if (((inName == HX_CSTRING("assets/data/vcr/play.png")))){
		HX_STACK_LINE(595)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/play.png"),null());
	}
	HX_STACK_LINE(601)
	if (((inName == HX_CSTRING("assets/data/vcr/record_off.png")))){
		HX_STACK_LINE(602)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_off.png"),null());
	}
	HX_STACK_LINE(608)
	if (((inName == HX_CSTRING("assets/data/vcr/record_on.png")))){
		HX_STACK_LINE(609)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/record_on.png"),null());
	}
	HX_STACK_LINE(615)
	if (((inName == HX_CSTRING("assets/data/vcr/restart.png")))){
		HX_STACK_LINE(616)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/restart.png"),null());
	}
	HX_STACK_LINE(622)
	if (((inName == HX_CSTRING("assets/data/vcr/step.png")))){
		HX_STACK_LINE(623)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/step.png"),null());
	}
	HX_STACK_LINE(629)
	if (((inName == HX_CSTRING("assets/data/vcr/stop.png")))){
		HX_STACK_LINE(630)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vcr/stop.png"),null());
	}
	HX_STACK_LINE(636)
	if (((inName == HX_CSTRING("assets/data/vis/bounds.png")))){
		HX_STACK_LINE(637)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/data/vis/bounds.png"),null());
	}
	HX_STACK_LINE(644)
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

