package;

import nme.display.StageAlign;
import nme.display.StageScaleMode;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.KeyboardEvent;
import nme.Lib;
import nme.ui.Keyboard;
import org.flixel.FlxGame;

/**
 * ...
 * @author admin
 */
class HaxeFlixel4 extends Sprite {
	
	public function new () {	
		super ();	
		if (stage != null){ 
			init();
		}
		else{ 
			addEventListener(Event.ADDED_TO_STAGE, init);
		}
	}
	
	private function init(?e:Event = null):Void 
	{
		if (hasEventListener(Event.ADDED_TO_STAGE))
		{
			removeEventListener(Event.ADDED_TO_STAGE, init);
		}
		
		//initialize();
		
		var demo:FlxGame = new FlixelHaxeGame();
		addChild(demo);
		
	}
	

	

}
