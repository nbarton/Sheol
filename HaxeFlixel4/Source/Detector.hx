package ;
import nme.Assets;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxObject;

/**
 * ...
 * @author Natalie
 */
class Detector extends FlxSprite {
	
	public function new(X,Y) {
		
		super(X,Y);
		exists=false;
		visible=false;
		loadGraphic("assets/detector.png",true,true,60,60);
		
		
	
		
	}		

}
