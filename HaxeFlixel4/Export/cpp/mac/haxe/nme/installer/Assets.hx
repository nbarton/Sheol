package nme.installer;


import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	
	private static var initialized:Bool = false;
	private static var resourceNames:Hash <String> = new Hash <String> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceNames.set ("assets/data/autotiles.png", "assets_data_autotiles_png.png");
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceNames.set ("assets/data/autotiles_alt.png", "assets_data_autotiles_alt_png.png");
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceNames.set ("assets/data/beep.mp3", "assets_data_beep_mp3.mp3");
			resourceTypes.set ("assets/data/beep.mp3", "music");
			resourceNames.set ("assets/data/beep.wav", "assets_data_beep_wav.wav");
			resourceTypes.set ("assets/data/beep.wav", "sound");
			resourceNames.set ("assets/data/button.png", "assets_data_button_png.png");
			resourceTypes.set ("assets/data/button.png", "image");
			resourceNames.set ("assets/data/courier.ttf", "assets_data_courier_ttf.ttf");
			resourceTypes.set ("assets/data/courier.ttf", "font");
			resourceNames.set ("assets/data/cursor.png", "assets_data_cursor_png.png");
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceNames.set ("assets/data/default.png", "assets_data_default_png.png");
			resourceTypes.set ("assets/data/default.png", "image");
			resourceNames.set ("assets/data/fontData10pt.png", "assets_data_fontdata10pt_png.png");
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceNames.set ("assets/data/fontData11pt.png", "assets_data_fontdata11pt_png.png");
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceNames.set ("assets/data/handle.png", "assets_data_handle_png.png");
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceNames.set ("assets/data/logo.png", "assets_data_logo_png.png");
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceNames.set ("assets/data/logo_corners.png", "assets_data_logo_corners_png.png");
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceNames.set ("assets/data/logo_light.png", "assets_data_logo_light_png.png");
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceNames.set ("assets/data/nokiafc22.ttf", "assets_data_nokiafc22_ttf.ttf");
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			resourceNames.set ("assets/data/vcr/flixel.png", "assets_data_vcr_flixel_png.png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceNames.set ("assets/data/vcr/open.png", "assets_data_vcr_open_png.png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceNames.set ("assets/data/vcr/pause.png", "assets_data_vcr_pause_png.png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceNames.set ("assets/data/vcr/play.png", "assets_data_vcr_play_png.png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceNames.set ("assets/data/vcr/record_off.png", "assets_data_vcr_record_off_png.png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceNames.set ("assets/data/vcr/record_on.png", "assets_data_vcr_record_on_png.png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceNames.set ("assets/data/vcr/restart.png", "assets_data_vcr_restart_png.png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceNames.set ("assets/data/vcr/step.png", "assets_data_vcr_step_png.png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceNames.set ("assets/data/vcr/stop.png", "assets_data_vcr_stop_png.png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceNames.set ("assets/data/vis/bounds.png", "assets_data_vis_bounds_png.png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceNames.set ("assets/data/courier.ttf", "assets_data_courier_ttf1.ttf");
			resourceTypes.set ("assets/data/courier.ttf", "font");
			resourceNames.set ("assets/data/nokiafc22.ttf", "assets_data_nokiafc23.ttf");
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			resourceNames.set ("assets/data/autotiles.png", "assets_data_autotiles_png1.png");
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceNames.set ("assets/data/autotiles_alt.png", "assets_data_autotiles_alt_png1.png");
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceNames.set ("assets/data/button.png", "assets_data_button_png1.png");
			resourceTypes.set ("assets/data/button.png", "image");
			resourceNames.set ("assets/data/cursor.png", "assets_data_cursor_png1.png");
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceNames.set ("assets/data/default.png", "assets_data_default_png1.png");
			resourceTypes.set ("assets/data/default.png", "image");
			resourceNames.set ("assets/data/fontData10pt.png", "assets_data_fontdata11.png");
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceNames.set ("assets/data/fontData11pt.png", "assets_data_fontdata12.png");
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceNames.set ("assets/data/handle.png", "assets_data_handle_png1.png");
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceNames.set ("assets/data/logo.png", "assets_data_logo_png1.png");
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceNames.set ("assets/data/logo_corners.png", "assets_data_logo_corners_png1.png");
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceNames.set ("assets/data/logo_light.png", "assets_data_logo_light_png1.png");
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceNames.set ("assets/data/vcr/flixel.png", "assets_data_vcr_flixel_png1.png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceNames.set ("assets/data/vcr/open.png", "assets_data_vcr_open_png1.png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceNames.set ("assets/data/vcr/pause.png", "assets_data_vcr_pause_png1.png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceNames.set ("assets/data/vcr/play.png", "assets_data_vcr_play_png1.png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceNames.set ("assets/data/vcr/record_off.png", "assets_data_vcr_record_off_png1.png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceNames.set ("assets/data/vcr/record_on.png", "assets_data_vcr_record_on_png1.png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceNames.set ("assets/data/vcr/restart.png", "assets_data_vcr_restart_png1.png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceNames.set ("assets/data/vcr/step.png", "assets_data_vcr_step_png1.png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceNames.set ("assets/data/vcr/stop.png", "assets_data_vcr_stop_png1.png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceNames.set ("assets/data/vis/bounds.png", "assets_data_vis_bounds_png1.png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceNames.set ("assets/data/autotiles.png", "assets_data_autotiles_png2.png");
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceNames.set ("assets/data/autotiles_alt.png", "assets_data_autotiles_alt_png2.png");
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceNames.set ("assets/data/button.png", "assets_data_button_png2.png");
			resourceTypes.set ("assets/data/button.png", "image");
			resourceNames.set ("assets/data/cursor.png", "assets_data_cursor_png2.png");
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceNames.set ("assets/data/default.png", "assets_data_default_png2.png");
			resourceTypes.set ("assets/data/default.png", "image");
			resourceNames.set ("assets/data/fontData10pt.png", "assets_data_fontdata13.png");
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceNames.set ("assets/data/fontData11pt.png", "assets_data_fontdata14.png");
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceNames.set ("assets/data/handle.png", "assets_data_handle_png2.png");
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceNames.set ("assets/data/logo.png", "assets_data_logo_png2.png");
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceNames.set ("assets/data/logo_corners.png", "assets_data_logo_corners_png2.png");
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceNames.set ("assets/data/logo_light.png", "assets_data_logo_light_png2.png");
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceNames.set ("assets/data/vcr/flixel.png", "assets_data_vcr_flixel_png2.png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceNames.set ("assets/data/vcr/open.png", "assets_data_vcr_open_png2.png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceNames.set ("assets/data/vcr/pause.png", "assets_data_vcr_pause_png2.png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceNames.set ("assets/data/vcr/play.png", "assets_data_vcr_play_png2.png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceNames.set ("assets/data/vcr/record_off.png", "assets_data_vcr_record_off_png2.png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceNames.set ("assets/data/vcr/record_on.png", "assets_data_vcr_record_on_png2.png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceNames.set ("assets/data/vcr/restart.png", "assets_data_vcr_restart_png2.png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceNames.set ("assets/data/vcr/step.png", "assets_data_vcr_step_png2.png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceNames.set ("assets/data/vcr/stop.png", "assets_data_vcr_stop_png2.png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceNames.set ("assets/data/vis/bounds.png", "assets_data_vis_bounds_png2.png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceNames.set ("assets/data/vcr/flixel.png", "assets_data_vcr_flixel_png3.png");
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceNames.set ("assets/data/vcr/open.png", "assets_data_vcr_open_png3.png");
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceNames.set ("assets/data/vcr/pause.png", "assets_data_vcr_pause_png3.png");
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceNames.set ("assets/data/vcr/play.png", "assets_data_vcr_play_png3.png");
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceNames.set ("assets/data/vcr/record_off.png", "assets_data_vcr_record_off_png3.png");
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceNames.set ("assets/data/vcr/record_on.png", "assets_data_vcr_record_on_png3.png");
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceNames.set ("assets/data/vcr/restart.png", "assets_data_vcr_restart_png3.png");
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceNames.set ("assets/data/vcr/step.png", "assets_data_vcr_step_png3.png");
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceNames.set ("assets/data/vcr/stop.png", "assets_data_vcr_stop_png3.png");
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceNames.set ("assets/data/vis/bounds.png", "assets_data_vis_bounds_png3.png");
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = BitmapData.load (resourceNames.get (id));
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceNames.exists (id)) {
			
			return ByteArray.readFile (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id) == "font") {
			
			return new Font (resourceNames.get (id));
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getResourceName (id:String):String {
		
		initialize ();
		
		return resourceNames.get (id);
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id) == "sound") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, false);
				
			} else if (resourceTypes.get (id) == "music") {
				
				return new Sound (new URLRequest (resourceNames.get (id)), null, true);
				
			}
			
		}
		
		trace ("[nme.Assets] There is no Sound asset with an ID of \"" + id + "\"");
		
		return null;
		
	}
	
	
	public static function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
}
