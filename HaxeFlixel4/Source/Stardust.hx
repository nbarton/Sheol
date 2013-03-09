package ;
import nme.Assets;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxObject;

/**
 * ...
 * @author Natalie
 */
class Stardust extends FlxSprite {
	
	public function new(X,Y) {
		
		super(X,Y);
		
		loadGraphic("assets/dust.png",true,true,8,9);
		
		
	
		
	}		

}
