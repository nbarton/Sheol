package ;
import nme.Assets;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxObject;
/**
 * ...
 * @author admin
 */
class Player extends FlxSprite {
	
	public function new(X,Y) {
		super(X,Y);
		loadGraphic("assets/Icon.png",true,true,30,47);
		
		
	}	
	
	override public function update():Void{
		
		

		if (FlxG.mouse.x>x){
		facing = FlxObject.LEFT;
		
		}
		
		else { 
		facing = FlxObject.RIGHT;
		}
		//if(velocity.x<280){
			//velocity.x=280;
		//}
		
	}	

}
