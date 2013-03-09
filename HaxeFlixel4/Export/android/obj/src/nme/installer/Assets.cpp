#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_format_display_MovieClip
#include <format/display/MovieClip.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
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
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
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

::Hash Assets_obj::libraryTypes;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",39);
		HX_STACK_LINE(39)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/basetile4x.png"),HX_CSTRING("assets_basetile4x_png"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/basetile4x.png"),HX_CSTRING("image"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/CHALONSE.TTF"),HX_CSTRING("assets_chalonse_ttf"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/CHALONSE.TTF"),HX_CSTRING("font"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/curs.png"),HX_CSTRING("assets_curs_png"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/curs.png"),HX_CSTRING("image"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("assets/data/beep.mp3"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("music"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("sound"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets_data_courier_ttf"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata10pt_png"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata11pt_png"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets_data_nokiafc22_ttf"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/detector.png"),HX_CSTRING("assets_detector_png"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/detector.png"),HX_CSTRING("image"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/dust.png"),HX_CSTRING("assets_dust_png"));
			HX_STACK_LINE(102)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/dust.png"),HX_CSTRING("image"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/Icon.png"),HX_CSTRING("assets_icon_png"));
			HX_STACK_LINE(104)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/Icon.png"),HX_CSTRING("image"));
			HX_STACK_LINE(105)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/player.png"),HX_CSTRING("assets_player_png"));
			HX_STACK_LINE(106)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/player.png"),HX_CSTRING("image"));
			HX_STACK_LINE(107)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/playerSprite.png"),HX_CSTRING("assets_playersprite_png"));
			HX_STACK_LINE(108)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/playerSprite.png"),HX_CSTRING("image"));
			HX_STACK_LINE(109)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets_data_courier_ttf1"));
			HX_STACK_LINE(110)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(111)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets_data_nokiafc23"));
			HX_STACK_LINE(112)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(113)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/basetile4x.png"),HX_CSTRING("assets_basetile5"));
			HX_STACK_LINE(114)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/basetile4x.png"),HX_CSTRING("image"));
			HX_STACK_LINE(115)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/curs.png"),HX_CSTRING("assets_curs_png1"));
			HX_STACK_LINE(116)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/curs.png"),HX_CSTRING("image"));
			HX_STACK_LINE(117)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png1"));
			HX_STACK_LINE(118)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(119)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png1"));
			HX_STACK_LINE(120)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(121)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png1"));
			HX_STACK_LINE(122)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(123)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png1"));
			HX_STACK_LINE(124)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(125)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png1"));
			HX_STACK_LINE(126)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(127)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata11"));
			HX_STACK_LINE(128)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(129)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata12"));
			HX_STACK_LINE(130)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(131)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png1"));
			HX_STACK_LINE(132)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(133)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png1"));
			HX_STACK_LINE(134)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(135)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png1"));
			HX_STACK_LINE(136)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(137)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png1"));
			HX_STACK_LINE(138)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(139)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png1"));
			HX_STACK_LINE(140)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(141)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png1"));
			HX_STACK_LINE(142)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(143)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png1"));
			HX_STACK_LINE(144)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(145)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png1"));
			HX_STACK_LINE(146)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(147)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png1"));
			HX_STACK_LINE(148)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(149)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png1"));
			HX_STACK_LINE(150)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(151)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png1"));
			HX_STACK_LINE(152)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(153)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png1"));
			HX_STACK_LINE(154)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(155)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png1"));
			HX_STACK_LINE(156)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(157)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png1"));
			HX_STACK_LINE(158)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(159)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/detector.png"),HX_CSTRING("assets_detector_png1"));
			HX_STACK_LINE(160)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/detector.png"),HX_CSTRING("image"));
			HX_STACK_LINE(161)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/dust.png"),HX_CSTRING("assets_dust_png1"));
			HX_STACK_LINE(162)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/dust.png"),HX_CSTRING("image"));
			HX_STACK_LINE(163)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/Icon.png"),HX_CSTRING("assets_icon_png1"));
			HX_STACK_LINE(164)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/Icon.png"),HX_CSTRING("image"));
			HX_STACK_LINE(165)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/player.png"),HX_CSTRING("assets_player_png1"));
			HX_STACK_LINE(166)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/player.png"),HX_CSTRING("image"));
			HX_STACK_LINE(167)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/playerSprite.png"),HX_CSTRING("assets_playersprite_png1"));
			HX_STACK_LINE(168)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/playerSprite.png"),HX_CSTRING("image"));
			HX_STACK_LINE(169)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets_data_autotiles_png2"));
			HX_STACK_LINE(170)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("image"));
			HX_STACK_LINE(171)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets_data_autotiles_alt_png2"));
			HX_STACK_LINE(172)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(173)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets_data_button_png2"));
			HX_STACK_LINE(174)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("image"));
			HX_STACK_LINE(175)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets_data_cursor_png2"));
			HX_STACK_LINE(176)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("image"));
			HX_STACK_LINE(177)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets_data_default_png2"));
			HX_STACK_LINE(178)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("image"));
			HX_STACK_LINE(179)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets_data_fontdata13"));
			HX_STACK_LINE(180)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(181)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets_data_fontdata14"));
			HX_STACK_LINE(182)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(183)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets_data_handle_png2"));
			HX_STACK_LINE(184)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("image"));
			HX_STACK_LINE(185)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets_data_logo_png2"));
			HX_STACK_LINE(186)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(187)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets_data_logo_corners_png2"));
			HX_STACK_LINE(188)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("image"));
			HX_STACK_LINE(189)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets_data_logo_light_png2"));
			HX_STACK_LINE(190)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("image"));
			HX_STACK_LINE(191)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png2"));
			HX_STACK_LINE(192)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(193)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png2"));
			HX_STACK_LINE(194)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(195)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png2"));
			HX_STACK_LINE(196)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(197)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png2"));
			HX_STACK_LINE(198)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(199)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png2"));
			HX_STACK_LINE(200)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(201)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png2"));
			HX_STACK_LINE(202)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(203)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png2"));
			HX_STACK_LINE(204)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(205)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png2"));
			HX_STACK_LINE(206)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(207)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png2"));
			HX_STACK_LINE(208)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(209)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png2"));
			HX_STACK_LINE(210)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(211)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets_data_vcr_flixel_png3"));
			HX_STACK_LINE(212)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("image"));
			HX_STACK_LINE(213)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets_data_vcr_open_png3"));
			HX_STACK_LINE(214)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("image"));
			HX_STACK_LINE(215)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets_data_vcr_pause_png3"));
			HX_STACK_LINE(216)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(217)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets_data_vcr_play_png3"));
			HX_STACK_LINE(218)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(219)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets_data_vcr_record_off_png3"));
			HX_STACK_LINE(220)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("image"));
			HX_STACK_LINE(221)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets_data_vcr_record_on_png3"));
			HX_STACK_LINE(222)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("image"));
			HX_STACK_LINE(223)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets_data_vcr_restart_png3"));
			HX_STACK_LINE(224)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("image"));
			HX_STACK_LINE(225)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets_data_vcr_step_png3"));
			HX_STACK_LINE(226)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(227)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets_data_vcr_stop_png3"));
			HX_STACK_LINE(228)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("image"));
			HX_STACK_LINE(229)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets_data_vis_bounds_png3"));
			HX_STACK_LINE(230)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("image"));
			HX_STACK_LINE(233)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",240);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(242)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(244)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("image")))))){
			HX_STACK_LINE(244)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(246)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(252)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(254)
				if ((useCache)){
					HX_STACK_LINE(254)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(260)
				return data;
			}
		}
		else{
			HX_STACK_LINE(264)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(266)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(267)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(269)
				if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(303)
					::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),305,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(309)
				::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),311,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(315)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",320);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(322)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(324)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(324)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(330)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),330,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(332)
		return null();
	}
	HX_STACK_LINE(324)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",339);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(341)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(343)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("font")))))){
		HX_STACK_LINE(343)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(349)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),349,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(351)
		return null();
	}
	HX_STACK_LINE(343)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::format::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_PUSH("Assets::getMovieClip","nme/installer/Assets.hx",358);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(360)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(362)
	::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(363)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(365)
	if ((::nme::installer::Assets_obj::libraryTypes->exists(libraryName))){
	}
	else{
		HX_STACK_LINE(399)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),401,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(405)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",410);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(412)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(414)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",419);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(421)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(423)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(423)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("sound")))){
			HX_STACK_LINE(425)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(429)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id)->__Field(HX_CSTRING("toLowerCase"),true)() == HX_CSTRING("music")))){
				HX_STACK_LINE(429)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(437)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),437,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(439)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",444);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(446)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(448)
	if (((bytes == null()))){
		HX_STACK_LINE(448)
		return null();
	}
	else{
		HX_STACK_LINE(452)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(448)
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
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { return libraryTypes; }
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
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
	case 12:
		if (HX_FIELD_EQ(inName,"libraryTypes") ) { libraryTypes=inValue.Cast< ::Hash >(); return inValue; }
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
	HX_CSTRING("libraryTypes"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMovieClip"),
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
	HX_MARK_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraryTypes,"libraryTypes");
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
	libraryTypes= ::Hash_obj::__new();
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
