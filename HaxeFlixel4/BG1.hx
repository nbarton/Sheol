package ;
import nme.Assets;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxObject;
/**
 * ...
 * @author admin
 */
class BG1 extends FlxSprite {
	
	public function new(X,Y) {
		super(X,Y);
		loadGraphic("assets/basetile4x.png",false,false,1600,1280);
		
		
	}	
	
}