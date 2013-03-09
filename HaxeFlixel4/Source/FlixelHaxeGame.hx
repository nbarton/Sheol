package;

import nme.Lib;
import nme.display.Stage;

import org.flixel.FlxGame;
import org.flixel.FlxG;

	
class FlixelHaxeGame extends FlxGame
{	
	public function new()
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;
		
		super(640,400, Level1, 1, 30, 30);
		forceDebugger = true;
		
		//aspect ratio if landscape
			
			var newWidthRatio:Float = stageWidth/640;
			var newWidth:Float = stageWidth*newWidthRatio;
			var newHeight:Float = 400*newWidthRatio;
			var offsetY:Float = (stageHeight-newHeight)*.5;
			trace(offsetY);
			scaleY*=newWidthRatio;
			scaleX*=newWidthRatio;
			y = offsetY;	
			
		
		//aspect ratio in portrait
			/*
			var newHeightRatio:Float = stageHeight/640;
			//var newWidthRatio:Float = stageWidth/640;
			var newWidth:Float = stageWidth*newHeightRatio;	
			var offsetX:Float = (stageWidth-newWidth)*.5;
			scaleX*=newHeightRatio;
			scaleY*=newHeightRatio;
			*/ 	
		
	}
}