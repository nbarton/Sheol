#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_neash_media_SoundLoaderContext
#include <neash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_neash_text_Font
#include <neash/text/Font.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_neash_utils_IMemoryRange
#include <neash/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",26);
		HX_STACK_LINE(26)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(30)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png.png"));
			HX_STACK_LINE(31)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(32)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png.png"));
			HX_STACK_LINE(33)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(34)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("assets_data_beep_mp3.mp3"));
			HX_STACK_LINE(35)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("music"));
			HX_STACK_LINE(36)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("assets_data_beep_wav.wav"));
			HX_STACK_LINE(37)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("sound"));
			HX_STACK_LINE(38)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png.png"));
			HX_STACK_LINE(39)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(40)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets_data_courier_ttf.ttf"));
			HX_STACK_LINE(41)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(42)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png.png"));
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png.png"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata10pt_png.png"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata11pt_png.png"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png.png"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png.png"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png.png"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png.png"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets_data_nokiafc22_ttf.ttf"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png.png"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png.png"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png.png"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png.png"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png.png"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png.png"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png.png"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png.png"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png.png"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png.png"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets_data_courier_ttf1.ttf"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets_data_nokiafc23.ttf"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png1.png"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png1.png"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png1.png"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png1.png"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png1.png"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata11.png"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata12.png"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png1.png"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png1.png"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png1.png"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png1.png"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png1.png"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png1.png"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png1.png"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png1.png"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png1.png"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png1.png"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png1.png"));
			HX_STACK_LINE(119)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(120)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png1.png"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(122)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png1.png"));
			HX_STACK_LINE(123)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(124)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png1.png"));
			HX_STACK_LINE(125)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(126)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png2.png"));
			HX_STACK_LINE(127)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(128)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png2.png"));
			HX_STACK_LINE(129)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(130)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png2.png"));
			HX_STACK_LINE(131)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(132)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png2.png"));
			HX_STACK_LINE(133)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(134)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png2.png"));
			HX_STACK_LINE(135)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(136)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata13.png"));
			HX_STACK_LINE(137)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(138)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata14.png"));
			HX_STACK_LINE(139)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(140)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png2.png"));
			HX_STACK_LINE(141)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(142)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png2.png"));
			HX_STACK_LINE(143)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(144)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png2.png"));
			HX_STACK_LINE(145)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(146)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png2.png"));
			HX_STACK_LINE(147)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(148)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png2.png"));
			HX_STACK_LINE(149)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(150)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png2.png"));
			HX_STACK_LINE(151)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(152)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png2.png"));
			HX_STACK_LINE(153)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(154)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png2.png"));
			HX_STACK_LINE(155)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(156)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png2.png"));
			HX_STACK_LINE(157)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(158)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png2.png"));
			HX_STACK_LINE(159)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(160)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png2.png"));
			HX_STACK_LINE(161)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(162)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png2.png"));
			HX_STACK_LINE(163)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(164)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png2.png"));
			HX_STACK_LINE(165)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(166)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png2.png"));
			HX_STACK_LINE(167)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(168)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png3.png"));
			HX_STACK_LINE(169)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(170)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png3.png"));
			HX_STACK_LINE(171)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(172)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png3.png"));
			HX_STACK_LINE(173)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(174)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png3.png"));
			HX_STACK_LINE(175)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(176)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png3.png"));
			HX_STACK_LINE(177)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(178)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png3.png"));
			HX_STACK_LINE(179)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(180)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png3.png"));
			HX_STACK_LINE(181)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(182)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png3.png"));
			HX_STACK_LINE(183)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(184)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png3.png"));
			HX_STACK_LINE(185)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(186)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png3.png"));
			HX_STACK_LINE(187)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(189)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::neash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",196);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(198)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(200)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("image")))))){
			HX_STACK_LINE(200)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(202)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(208)
				::neash::display::BitmapData data = ::neash::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(210)
				if ((useCache)){
					HX_STACK_LINE(210)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(216)
				return data;
			}
		}
		else{
			HX_STACK_LINE(222)
			::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),222,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			HX_STACK_LINE(224)
			return null();
		}
		HX_STACK_LINE(200)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::neash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",231);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(233)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(235)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(235)
		return ::neash::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(241)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),241,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(243)
		return null();
	}
	HX_STACK_LINE(235)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::neash::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",250);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(252)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(254)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("font")))))){
		HX_STACK_LINE(254)
		return ::neash::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(260)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),260,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(262)
		return null();
	}
	HX_STACK_LINE(254)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",269);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(271)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(273)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::neash::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",278);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(280)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(282)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(282)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("sound")))){
			HX_STACK_LINE(284)
			return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(288)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("music")))){
				HX_STACK_LINE(288)
				return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(296)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),296,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(298)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",303);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(305)
	::neash::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(307)
	if (((bytes == null()))){
		HX_STACK_LINE(307)
		return null();
	}
	else{
		HX_STACK_LINE(311)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(307)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::Hash_obj::__new();
	initialized= false;
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
