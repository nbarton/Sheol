package nme.installer;


import format.display.MovieClip;
import haxe.Unserializer;
import nme.display.BitmapData;
import nme.media.Sound;
import nme.net.URLRequest;
import nme.text.Font;
import nme.utils.ByteArray;
import ApplicationMain;

#if swf
import format.SWF;
#end

#if xfl
import format.XFL;
#end


/**
 * ...
 * @author Joshua Granick
 */

class Assets {

	
	public static var cachedBitmapData:Hash<BitmapData> = new Hash<BitmapData>();
	#if swf private static var cachedSWFLibraries:Hash <SWF> = new Hash <SWF> (); #end
	#if xfl private static var cachedXFLLibraries:Hash <XFL> = new Hash <XFL> (); #end
	
	private static var initialized:Bool = false;
	private static var libraryTypes:Hash <String> = new Hash <String> ();
	private static var resourceClasses:Hash <Dynamic> = new Hash <Dynamic> ();
	private static var resourceTypes:Hash <String> = new Hash <String> ();
	
	
	private static function initialize ():Void {
		
		if (!initialized) {
			
			resourceClasses.set ("assets/basetile4x.png", NME_assets_basetile4x_png);
			resourceTypes.set ("assets/basetile4x.png", "image");
			resourceClasses.set ("assets/CHALONSE.TTF", NME_assets_chalonse_ttf);
			resourceTypes.set ("assets/CHALONSE.TTF", "font");
			resourceClasses.set ("assets/curs.png", NME_assets_curs_png);
			resourceTypes.set ("assets/curs.png", "image");
			resourceClasses.set ("assets/data/autotiles.png", NME_assets_data_autotiles_png);
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceClasses.set ("assets/data/autotiles_alt.png", NME_assets_data_autotiles_alt_png);
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceClasses.set ("assets/data/beep.mp3", NME_assets_data_beep_mp3);
			resourceTypes.set ("assets/data/beep.mp3", "music");
			resourceClasses.set ("assets/data/beep.wav", NME_assets_data_beep_wav);
			resourceTypes.set ("assets/data/beep.wav", "sound");
			resourceClasses.set ("assets/data/button.png", NME_assets_data_button_png);
			resourceTypes.set ("assets/data/button.png", "image");
			resourceClasses.set ("assets/data/courier.ttf", NME_assets_data_courier_ttf);
			resourceTypes.set ("assets/data/courier.ttf", "font");
			resourceClasses.set ("assets/data/cursor.png", NME_assets_data_cursor_png);
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceClasses.set ("assets/data/default.png", NME_assets_data_default_png);
			resourceTypes.set ("assets/data/default.png", "image");
			resourceClasses.set ("assets/data/fontData10pt.png", NME_assets_data_fontdata10pt_png);
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceClasses.set ("assets/data/fontData11pt.png", NME_assets_data_fontdata11pt_png);
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceClasses.set ("assets/data/handle.png", NME_assets_data_handle_png);
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceClasses.set ("assets/data/logo.png", NME_assets_data_logo_png);
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceClasses.set ("assets/data/logo_corners.png", NME_assets_data_logo_corners_png);
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceClasses.set ("assets/data/logo_light.png", NME_assets_data_logo_light_png);
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceClasses.set ("assets/data/nokiafc22.ttf", NME_assets_data_nokiafc22_ttf);
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			resourceClasses.set ("assets/data/vcr/flixel.png", NME_assets_data_vcr_flixel_png);
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceClasses.set ("assets/data/vcr/open.png", NME_assets_data_vcr_open_png);
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceClasses.set ("assets/data/vcr/pause.png", NME_assets_data_vcr_pause_png);
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceClasses.set ("assets/data/vcr/play.png", NME_assets_data_vcr_play_png);
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceClasses.set ("assets/data/vcr/record_off.png", NME_assets_data_vcr_record_off_png);
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceClasses.set ("assets/data/vcr/record_on.png", NME_assets_data_vcr_record_on_png);
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceClasses.set ("assets/data/vcr/restart.png", NME_assets_data_vcr_restart_png);
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceClasses.set ("assets/data/vcr/step.png", NME_assets_data_vcr_step_png);
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceClasses.set ("assets/data/vcr/stop.png", NME_assets_data_vcr_stop_png);
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceClasses.set ("assets/data/vis/bounds.png", NME_assets_data_vis_bounds_png);
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceClasses.set ("assets/detector.png", NME_assets_detector_png);
			resourceTypes.set ("assets/detector.png", "image");
			resourceClasses.set ("assets/dust.png", NME_assets_dust_png);
			resourceTypes.set ("assets/dust.png", "image");
			resourceClasses.set ("assets/Icon.png", NME_assets_icon_png);
			resourceTypes.set ("assets/Icon.png", "image");
			resourceClasses.set ("assets/player.png", NME_assets_player_png);
			resourceTypes.set ("assets/player.png", "image");
			resourceClasses.set ("assets/playerSprite.png", NME_assets_playersprite_png);
			resourceTypes.set ("assets/playerSprite.png", "image");
			resourceClasses.set ("assets/data/courier.ttf", NME_assets_data_courier_ttf1);
			resourceTypes.set ("assets/data/courier.ttf", "font");
			resourceClasses.set ("assets/data/nokiafc22.ttf", NME_assets_data_nokiafc23);
			resourceTypes.set ("assets/data/nokiafc22.ttf", "font");
			resourceClasses.set ("assets/basetile4x.png", NME_assets_basetile5);
			resourceTypes.set ("assets/basetile4x.png", "image");
			resourceClasses.set ("assets/curs.png", NME_assets_curs_png1);
			resourceTypes.set ("assets/curs.png", "image");
			resourceClasses.set ("assets/data/autotiles.png", NME_assets_data_autotiles_png1);
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceClasses.set ("assets/data/autotiles_alt.png", NME_assets_data_autotiles_alt_png1);
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceClasses.set ("assets/data/button.png", NME_assets_data_button_png1);
			resourceTypes.set ("assets/data/button.png", "image");
			resourceClasses.set ("assets/data/cursor.png", NME_assets_data_cursor_png1);
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceClasses.set ("assets/data/default.png", NME_assets_data_default_png1);
			resourceTypes.set ("assets/data/default.png", "image");
			resourceClasses.set ("assets/data/fontData10pt.png", NME_assets_data_fontdata11);
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceClasses.set ("assets/data/fontData11pt.png", NME_assets_data_fontdata12);
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceClasses.set ("assets/data/handle.png", NME_assets_data_handle_png1);
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceClasses.set ("assets/data/logo.png", NME_assets_data_logo_png1);
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceClasses.set ("assets/data/logo_corners.png", NME_assets_data_logo_corners_png1);
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceClasses.set ("assets/data/logo_light.png", NME_assets_data_logo_light_png1);
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceClasses.set ("assets/data/vcr/flixel.png", NME_assets_data_vcr_flixel_png1);
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceClasses.set ("assets/data/vcr/open.png", NME_assets_data_vcr_open_png1);
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceClasses.set ("assets/data/vcr/pause.png", NME_assets_data_vcr_pause_png1);
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceClasses.set ("assets/data/vcr/play.png", NME_assets_data_vcr_play_png1);
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceClasses.set ("assets/data/vcr/record_off.png", NME_assets_data_vcr_record_off_png1);
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceClasses.set ("assets/data/vcr/record_on.png", NME_assets_data_vcr_record_on_png1);
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceClasses.set ("assets/data/vcr/restart.png", NME_assets_data_vcr_restart_png1);
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceClasses.set ("assets/data/vcr/step.png", NME_assets_data_vcr_step_png1);
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceClasses.set ("assets/data/vcr/stop.png", NME_assets_data_vcr_stop_png1);
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceClasses.set ("assets/data/vis/bounds.png", NME_assets_data_vis_bounds_png1);
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceClasses.set ("assets/detector.png", NME_assets_detector_png1);
			resourceTypes.set ("assets/detector.png", "image");
			resourceClasses.set ("assets/dust.png", NME_assets_dust_png1);
			resourceTypes.set ("assets/dust.png", "image");
			resourceClasses.set ("assets/Icon.png", NME_assets_icon_png1);
			resourceTypes.set ("assets/Icon.png", "image");
			resourceClasses.set ("assets/player.png", NME_assets_player_png1);
			resourceTypes.set ("assets/player.png", "image");
			resourceClasses.set ("assets/playerSprite.png", NME_assets_playersprite_png1);
			resourceTypes.set ("assets/playerSprite.png", "image");
			resourceClasses.set ("assets/data/autotiles.png", NME_assets_data_autotiles_png2);
			resourceTypes.set ("assets/data/autotiles.png", "image");
			resourceClasses.set ("assets/data/autotiles_alt.png", NME_assets_data_autotiles_alt_png2);
			resourceTypes.set ("assets/data/autotiles_alt.png", "image");
			resourceClasses.set ("assets/data/button.png", NME_assets_data_button_png2);
			resourceTypes.set ("assets/data/button.png", "image");
			resourceClasses.set ("assets/data/cursor.png", NME_assets_data_cursor_png2);
			resourceTypes.set ("assets/data/cursor.png", "image");
			resourceClasses.set ("assets/data/default.png", NME_assets_data_default_png2);
			resourceTypes.set ("assets/data/default.png", "image");
			resourceClasses.set ("assets/data/fontData10pt.png", NME_assets_data_fontdata13);
			resourceTypes.set ("assets/data/fontData10pt.png", "image");
			resourceClasses.set ("assets/data/fontData11pt.png", NME_assets_data_fontdata14);
			resourceTypes.set ("assets/data/fontData11pt.png", "image");
			resourceClasses.set ("assets/data/handle.png", NME_assets_data_handle_png2);
			resourceTypes.set ("assets/data/handle.png", "image");
			resourceClasses.set ("assets/data/logo.png", NME_assets_data_logo_png2);
			resourceTypes.set ("assets/data/logo.png", "image");
			resourceClasses.set ("assets/data/logo_corners.png", NME_assets_data_logo_corners_png2);
			resourceTypes.set ("assets/data/logo_corners.png", "image");
			resourceClasses.set ("assets/data/logo_light.png", NME_assets_data_logo_light_png2);
			resourceTypes.set ("assets/data/logo_light.png", "image");
			resourceClasses.set ("assets/data/vcr/flixel.png", NME_assets_data_vcr_flixel_png2);
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceClasses.set ("assets/data/vcr/open.png", NME_assets_data_vcr_open_png2);
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceClasses.set ("assets/data/vcr/pause.png", NME_assets_data_vcr_pause_png2);
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceClasses.set ("assets/data/vcr/play.png", NME_assets_data_vcr_play_png2);
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceClasses.set ("assets/data/vcr/record_off.png", NME_assets_data_vcr_record_off_png2);
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceClasses.set ("assets/data/vcr/record_on.png", NME_assets_data_vcr_record_on_png2);
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceClasses.set ("assets/data/vcr/restart.png", NME_assets_data_vcr_restart_png2);
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceClasses.set ("assets/data/vcr/step.png", NME_assets_data_vcr_step_png2);
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceClasses.set ("assets/data/vcr/stop.png", NME_assets_data_vcr_stop_png2);
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceClasses.set ("assets/data/vis/bounds.png", NME_assets_data_vis_bounds_png2);
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			resourceClasses.set ("assets/data/vcr/flixel.png", NME_assets_data_vcr_flixel_png3);
			resourceTypes.set ("assets/data/vcr/flixel.png", "image");
			resourceClasses.set ("assets/data/vcr/open.png", NME_assets_data_vcr_open_png3);
			resourceTypes.set ("assets/data/vcr/open.png", "image");
			resourceClasses.set ("assets/data/vcr/pause.png", NME_assets_data_vcr_pause_png3);
			resourceTypes.set ("assets/data/vcr/pause.png", "image");
			resourceClasses.set ("assets/data/vcr/play.png", NME_assets_data_vcr_play_png3);
			resourceTypes.set ("assets/data/vcr/play.png", "image");
			resourceClasses.set ("assets/data/vcr/record_off.png", NME_assets_data_vcr_record_off_png3);
			resourceTypes.set ("assets/data/vcr/record_off.png", "image");
			resourceClasses.set ("assets/data/vcr/record_on.png", NME_assets_data_vcr_record_on_png3);
			resourceTypes.set ("assets/data/vcr/record_on.png", "image");
			resourceClasses.set ("assets/data/vcr/restart.png", NME_assets_data_vcr_restart_png3);
			resourceTypes.set ("assets/data/vcr/restart.png", "image");
			resourceClasses.set ("assets/data/vcr/step.png", NME_assets_data_vcr_step_png3);
			resourceTypes.set ("assets/data/vcr/step.png", "image");
			resourceClasses.set ("assets/data/vcr/stop.png", NME_assets_data_vcr_stop_png3);
			resourceTypes.set ("assets/data/vcr/stop.png", "image");
			resourceClasses.set ("assets/data/vis/bounds.png", NME_assets_data_vis_bounds_png3);
			resourceTypes.set ("assets/data/vis/bounds.png", "image");
			
			
			initialized = true;
			
		}
		
	}
	
	
	public static function getBitmapData (id:String, useCache:Bool = true):BitmapData {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "image") {
			
			if (useCache && cachedBitmapData.exists (id)) {
				
				return cachedBitmapData.get (id);
				
			} else {
				
				var data = cast (Type.createInstance (resourceClasses.get (id), []), BitmapData);
				
				if (useCache) {
					
					cachedBitmapData.set (id, data);
					
				}
				
				return data;
				
			}
			
		} else if (id.indexOf (":") > -1) {
			
			var libraryName = id.substr (0, id.indexOf (":"));
			var symbolName = id.substr (id.indexOf (":") + 1);
			
			if (libraryTypes.exists (libraryName)) {
				
				#if swf
				
				if (libraryTypes.get (libraryName) == "swf") {
					
					if (!cachedSWFLibraries.exists (libraryName)) {
						
						cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
						
					}
					
					return cachedSWFLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
				#if xfl
				
				if (libraryTypes.get (libraryName) == "xfl") {
					
					if (!cachedXFLLibraries.exists (libraryName)) {
						
						cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
						
					}
					
					return cachedXFLLibraries.get (libraryName).getBitmapData (symbolName);
					
				}
				
				#end
				
			} else {
				
				trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
				
			}
			
		} else {
			
			trace ("[nme.Assets] There is no BitmapData asset with an ID of \"" + id + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getBytes (id:String):ByteArray {
		
		initialize ();
		
		if (resourceClasses.exists (id)) {
			
			return Type.createInstance (resourceClasses.get (id), []);
			
		} else {
			
			trace ("[nme.Assets] There is no ByteArray asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getFont (id:String):Font {
		
		initialize ();
		
		if (resourceTypes.exists (id) && resourceTypes.get (id).toLowerCase () == "font") {
			
			return cast (Type.createInstance (resourceClasses.get (id), []), Font);
			
		} else {
			
			trace ("[nme.Assets] There is no Font asset with an ID of \"" + id + "\"");
			
			return null;
			
		}
		
	}
	
	
	public static function getMovieClip (id:String):MovieClip {
		
		initialize ();
		
		var libraryName = id.substr (0, id.indexOf (":"));
		var symbolName = id.substr (id.indexOf (":") + 1);
		
		if (libraryTypes.exists (libraryName)) {
			
			#if swf
			
			if (libraryTypes.get (libraryName) == "swf") {
				
				if (!cachedSWFLibraries.exists (libraryName)) {
					
					cachedSWFLibraries.set (libraryName, new SWF (getBytes ("libraries/" + libraryName + ".swf")));
					
				}
				
				return cachedSWFLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
			#if xfl
			
			if (libraryTypes.get (libraryName) == "xfl") {
				
				if (!cachedXFLLibraries.exists (libraryName)) {
					
					cachedXFLLibraries.set (libraryName, Unserializer.run (getText ("libraries/" + libraryName + "/" + libraryName + ".dat")));
					
				}
				
				return cachedXFLLibraries.get (libraryName).createMovieClip (symbolName);
				
			}
			
			#end
			
		} else {
			
			trace ("[nme.Assets] There is no asset library named \"" + libraryName + "\"");
			
		}
		
		return null;
		
	}
	
	
	public static function getSound (id:String):Sound {
		
		initialize ();
		
		if (resourceTypes.exists (id)) {
			
			if (resourceTypes.get (id).toLowerCase () == "sound" || resourceTypes.get (id).toLowerCase () == "music") {
				
				return cast (Type.createInstance (resourceClasses.get (id), []), Sound);
				
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
	
	
	//public static function loadBitmapData(id:String, handler:BitmapData -> Void, useCache:Bool = true):BitmapData
	//{
		//return null;
	//}
	//
	//
	//public static function loadBytes(id:String, handler:ByteArray -> Void):ByteArray
	//{	
		//return null;
	//}
	//
	//
	//public static function loadText(id:String, handler:String -> Void):String
	//{
		//return null;
	//}
	
	
}