#if nme

import HaxeFlixel4;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new org.flixel.system.FlxPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		#if !fdb
		haxe.Log.trace = flashTrace;
		#end
		
		if (call_real)
			begin ();
	}

	#if !fdb
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;
		
        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	#end
	
	private static function begin () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(HaxeFlixel4))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (HaxeFlixel4, Reflect.field (HaxeFlixel4, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(HaxeFlixel4, []);
			if (Std.is (instance, nme.display.DisplayObject)) {
				nme.Lib.current.addChild(cast instance);
			}	
		}
		
	}

	static function onEnter (_) {
		
		var loaded = nme.Lib.current.loaderInfo.bytesLoaded;
		var total = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="assets/basetile1x.png")
			 
            return Assets.getBitmapData ("assets/basetile1x.png");
         
		
		if (inName=="assets/basetile4x.png")
			 
            return Assets.getBitmapData ("assets/basetile4x.png");
         
		
		if (inName=="assets/CHALONSE.TTF")
			 
			 return Assets.getFont ("assets/CHALONSE.TTF");
		 
		
		if (inName=="assets/curs.png")
			 
            return Assets.getBitmapData ("assets/curs.png");
         
		
		if (inName=="assets/data/autotiles.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles.png");
         
		
		if (inName=="assets/data/autotiles_alt.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles_alt.png");
         
		
		if (inName=="assets/data/beep.mp3")
			 
            return Assets.getSound ("assets/data/beep.mp3");
		 
		
		if (inName=="assets/data/beep.wav")
			 
            return Assets.getSound ("assets/data/beep.wav");
         
		
		if (inName=="assets/data/button.png")
			 
            return Assets.getBitmapData ("assets/data/button.png");
         
		
		if (inName=="assets/data/courier.ttf")
			 
			 return Assets.getFont ("assets/data/courier.ttf");
		 
		
		if (inName=="assets/data/cursor.png")
			 
            return Assets.getBitmapData ("assets/data/cursor.png");
         
		
		if (inName=="assets/data/default.png")
			 
            return Assets.getBitmapData ("assets/data/default.png");
         
		
		if (inName=="assets/data/fontData10pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData10pt.png");
         
		
		if (inName=="assets/data/fontData11pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData11pt.png");
         
		
		if (inName=="assets/data/handle.png")
			 
            return Assets.getBitmapData ("assets/data/handle.png");
         
		
		if (inName=="assets/data/logo.png")
			 
            return Assets.getBitmapData ("assets/data/logo.png");
         
		
		if (inName=="assets/data/logo_corners.png")
			 
            return Assets.getBitmapData ("assets/data/logo_corners.png");
         
		
		if (inName=="assets/data/logo_light.png")
			 
            return Assets.getBitmapData ("assets/data/logo_light.png");
         
		
		if (inName=="assets/data/nokiafc22.ttf")
			 
			 return Assets.getFont ("assets/data/nokiafc22.ttf");
		 
		
		if (inName=="assets/data/vcr/flixel.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/flixel.png");
         
		
		if (inName=="assets/data/vcr/open.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/open.png");
         
		
		if (inName=="assets/data/vcr/pause.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/pause.png");
         
		
		if (inName=="assets/data/vcr/play.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/play.png");
         
		
		if (inName=="assets/data/vcr/record_off.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_off.png");
         
		
		if (inName=="assets/data/vcr/record_on.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_on.png");
         
		
		if (inName=="assets/data/vcr/restart.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/restart.png");
         
		
		if (inName=="assets/data/vcr/step.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/step.png");
         
		
		if (inName=="assets/data/vcr/stop.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/stop.png");
         
		
		if (inName=="assets/data/vis/bounds.png")
			 
            return Assets.getBitmapData ("assets/data/vis/bounds.png");
         
		
		if (inName=="assets/detector.png")
			 
            return Assets.getBitmapData ("assets/detector.png");
         
		
		if (inName=="assets/dust.png")
			 
            return Assets.getBitmapData ("assets/dust.png");
         
		
		if (inName=="assets/firstrock1x.png")
			 
            return Assets.getBitmapData ("assets/firstrock1x.png");
         
		
		if (inName=="assets/Icon.png")
			 
            return Assets.getBitmapData ("assets/Icon.png");
         
		
		if (inName=="assets/player.png")
			 
            return Assets.getBitmapData ("assets/player.png");
         
		
		if (inName=="assets/playerSprite.png")
			 
            return Assets.getBitmapData ("assets/playerSprite.png");
         
		
		if (inName=="assets/secondrock1x.png")
			 
            return Assets.getBitmapData ("assets/secondrock1x.png");
         
		
		if (inName=="assets/thirdrock1x.png")
			 
            return Assets.getBitmapData ("assets/thirdrock1x.png");
         
		
		if (inName=="assets/data/courier.ttf")
			 
			 return Assets.getFont ("assets/data/courier.ttf");
		 
		
		if (inName=="assets/data/nokiafc22.ttf")
			 
			 return Assets.getFont ("assets/data/nokiafc22.ttf");
		 
		
		if (inName=="assets/basetile1x.png")
			 
            return Assets.getBitmapData ("assets/basetile1x.png");
         
		
		if (inName=="assets/basetile4x.png")
			 
            return Assets.getBitmapData ("assets/basetile4x.png");
         
		
		if (inName=="assets/curs.png")
			 
            return Assets.getBitmapData ("assets/curs.png");
         
		
		if (inName=="assets/data/autotiles.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles.png");
         
		
		if (inName=="assets/data/autotiles_alt.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles_alt.png");
         
		
		if (inName=="assets/data/button.png")
			 
            return Assets.getBitmapData ("assets/data/button.png");
         
		
		if (inName=="assets/data/cursor.png")
			 
            return Assets.getBitmapData ("assets/data/cursor.png");
         
		
		if (inName=="assets/data/default.png")
			 
            return Assets.getBitmapData ("assets/data/default.png");
         
		
		if (inName=="assets/data/fontData10pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData10pt.png");
         
		
		if (inName=="assets/data/fontData11pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData11pt.png");
         
		
		if (inName=="assets/data/handle.png")
			 
            return Assets.getBitmapData ("assets/data/handle.png");
         
		
		if (inName=="assets/data/logo.png")
			 
            return Assets.getBitmapData ("assets/data/logo.png");
         
		
		if (inName=="assets/data/logo_corners.png")
			 
            return Assets.getBitmapData ("assets/data/logo_corners.png");
         
		
		if (inName=="assets/data/logo_light.png")
			 
            return Assets.getBitmapData ("assets/data/logo_light.png");
         
		
		if (inName=="assets/data/vcr/flixel.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/flixel.png");
         
		
		if (inName=="assets/data/vcr/open.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/open.png");
         
		
		if (inName=="assets/data/vcr/pause.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/pause.png");
         
		
		if (inName=="assets/data/vcr/play.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/play.png");
         
		
		if (inName=="assets/data/vcr/record_off.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_off.png");
         
		
		if (inName=="assets/data/vcr/record_on.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_on.png");
         
		
		if (inName=="assets/data/vcr/restart.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/restart.png");
         
		
		if (inName=="assets/data/vcr/step.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/step.png");
         
		
		if (inName=="assets/data/vcr/stop.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/stop.png");
         
		
		if (inName=="assets/data/vis/bounds.png")
			 
            return Assets.getBitmapData ("assets/data/vis/bounds.png");
         
		
		if (inName=="assets/detector.png")
			 
            return Assets.getBitmapData ("assets/detector.png");
         
		
		if (inName=="assets/dust.png")
			 
            return Assets.getBitmapData ("assets/dust.png");
         
		
		if (inName=="assets/firstrock1x.png")
			 
            return Assets.getBitmapData ("assets/firstrock1x.png");
         
		
		if (inName=="assets/Icon.png")
			 
            return Assets.getBitmapData ("assets/Icon.png");
         
		
		if (inName=="assets/player.png")
			 
            return Assets.getBitmapData ("assets/player.png");
         
		
		if (inName=="assets/playerSprite.png")
			 
            return Assets.getBitmapData ("assets/playerSprite.png");
         
		
		if (inName=="assets/secondrock1x.png")
			 
            return Assets.getBitmapData ("assets/secondrock1x.png");
         
		
		if (inName=="assets/thirdrock1x.png")
			 
            return Assets.getBitmapData ("assets/thirdrock1x.png");
         
		
		if (inName=="assets/data/autotiles.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles.png");
         
		
		if (inName=="assets/data/autotiles_alt.png")
			 
            return Assets.getBitmapData ("assets/data/autotiles_alt.png");
         
		
		if (inName=="assets/data/button.png")
			 
            return Assets.getBitmapData ("assets/data/button.png");
         
		
		if (inName=="assets/data/cursor.png")
			 
            return Assets.getBitmapData ("assets/data/cursor.png");
         
		
		if (inName=="assets/data/default.png")
			 
            return Assets.getBitmapData ("assets/data/default.png");
         
		
		if (inName=="assets/data/fontData10pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData10pt.png");
         
		
		if (inName=="assets/data/fontData11pt.png")
			 
            return Assets.getBitmapData ("assets/data/fontData11pt.png");
         
		
		if (inName=="assets/data/handle.png")
			 
            return Assets.getBitmapData ("assets/data/handle.png");
         
		
		if (inName=="assets/data/logo.png")
			 
            return Assets.getBitmapData ("assets/data/logo.png");
         
		
		if (inName=="assets/data/logo_corners.png")
			 
            return Assets.getBitmapData ("assets/data/logo_corners.png");
         
		
		if (inName=="assets/data/logo_light.png")
			 
            return Assets.getBitmapData ("assets/data/logo_light.png");
         
		
		if (inName=="assets/data/vcr/flixel.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/flixel.png");
         
		
		if (inName=="assets/data/vcr/open.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/open.png");
         
		
		if (inName=="assets/data/vcr/pause.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/pause.png");
         
		
		if (inName=="assets/data/vcr/play.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/play.png");
         
		
		if (inName=="assets/data/vcr/record_off.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_off.png");
         
		
		if (inName=="assets/data/vcr/record_on.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_on.png");
         
		
		if (inName=="assets/data/vcr/restart.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/restart.png");
         
		
		if (inName=="assets/data/vcr/step.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/step.png");
         
		
		if (inName=="assets/data/vcr/stop.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/stop.png");
         
		
		if (inName=="assets/data/vis/bounds.png")
			 
            return Assets.getBitmapData ("assets/data/vis/bounds.png");
         
		
		if (inName=="assets/data/vcr/flixel.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/flixel.png");
         
		
		if (inName=="assets/data/vcr/open.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/open.png");
         
		
		if (inName=="assets/data/vcr/pause.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/pause.png");
         
		
		if (inName=="assets/data/vcr/play.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/play.png");
         
		
		if (inName=="assets/data/vcr/record_off.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_off.png");
         
		
		if (inName=="assets/data/vcr/record_on.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/record_on.png");
         
		
		if (inName=="assets/data/vcr/restart.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/restart.png");
         
		
		if (inName=="assets/data/vcr/step.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/step.png");
         
		
		if (inName=="assets/data/vcr/stop.png")
			 
            return Assets.getBitmapData ("assets/data/vcr/stop.png");
         
		
		if (inName=="assets/data/vis/bounds.png")
			 
            return Assets.getBitmapData ("assets/data/vis/bounds.png");
         
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_assets_basetile1x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_basetile4x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_chalonse_ttf extends nme.text.Font { }
class NME_assets_curs_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_beep_mp3 extends nme.media.Sound { }
class NME_assets_data_beep_wav extends nme.media.Sound { }
class NME_assets_data_button_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_courier_ttf extends nme.text.Font { }
class NME_assets_data_cursor_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata10pt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata11pt_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_nokiafc22_ttf extends nme.text.Font { }
class NME_assets_data_vcr_flixel_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_detector_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_dust_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_firstrock1x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_icon_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_player_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_playersprite_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_secondrock1x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_thirdrock1x_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_courier_ttf1 extends nme.text.Font { }
class NME_assets_data_nokiafc23 extends nme.text.Font { }
class NME_assets_basetile2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_basetile5 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_curs_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_cursor_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata11 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata12 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_detector_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_dust_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_firstrock2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_icon_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_player_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_playersprite_png1 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_secondrock2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_thirdrock2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_autotiles_alt_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_button_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_cursor_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_default_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata13 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_fontdata14 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_handle_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_corners_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_logo_light_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png2 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_flixel_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_open_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_pause_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_play_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_off_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_record_on_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_restart_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_step_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vcr_stop_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_assets_data_vis_bounds_png3 extends nme.display.BitmapData { public function new () { super (0, 0); } }


#else

import HaxeFlixel4;

class ApplicationMain {
	
	public static function main () {
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields(HaxeFlixel4))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (HaxeFlixel4, Reflect.field (HaxeFlixel4, "main"), []);
		}
		else
		{
			var instance = Type.createInstance(HaxeFlixel4, []);
			if (Std.is (instance, flash.display.DisplayObject)) {
				flash.Lib.current.addChild(cast instance);
			}
		}
		
	}

}

#end
