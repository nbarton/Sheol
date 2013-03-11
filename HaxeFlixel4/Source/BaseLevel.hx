package;

import nme.Assets;
import org.flixel.FlxG;
import org.flixel.FlxSprite;
import org.flixel.FlxState;
import org.flixel.FlxText;
import org.flixel.FlxU;
//import org.flixel.FlxBackdrop;


class BaseLevel extends FlxState
{
	public var levelText:FlxText;
	public var scoreText:FlxText;
	public var p1:Player;
	public var BG:BG1;
	public var trailSprite:FlxSprite;
	public var trail: NewFlxTrail;
	public var mouseSprite:FlxSprite;
	public var score: Int = 0;
	public var detector:Detector;
	public var tailLength: Int = 20;
	public var tailDelay: Int = 2;
	public var tailAlpha: Float = .99;
	public var tailAlphaDec: Float = .02;
	
	
	public var tailTimer: Int = 0;
	public var detectTimer: Int = 0;
	
	public var point0:org.flixel.FlxPoint;
	
	public var point1:org.flixel.FlxPoint;
	public var point2:org.flixel.FlxPoint;
	public var point3:org.flixel.FlxPoint;
	public var point4:org.flixel.FlxPoint;
	public var point5:org.flixel.FlxPoint;
	public var point6:org.flixel.FlxPoint;
	public var dust1:Stardust;
	public var dust2:Stardust;
	public var dust3:Stardust;
	public var dust4:Stardust;
	public var dust5:Stardust;
	public var dust6:Stardust;
	public var dust7:Stardust;
	
	public var notTouching: Bool;
	
	public var outTimer: Int;

	public var topLeft: Bool;
	public var topRight: Bool;
	public var bottomLeft: Bool;
	public var bottomRight: Bool;
		
	//public var bg:FlxBackdrop;
	
	public var deathTimer: Int=0;
	
	
	override public function create():Void
	{
		FlxG.bgColor = 0xFF411B1B;
		FlxG.mouse.show();
		//FlxG.mouse.visible=false;
		
		
		
		
		//BGStuff
		BG = new BG1 (-500,-650);
		add(BG);
		
		//dust
		point0 = new org.flixel.FlxPoint(0,0);
		
		point1 = new org.flixel.FlxPoint(150,430);
		dust1 = new Stardust(point1.x,point1.y);
		point2 = new org.flixel.FlxPoint(140,470);
		dust2 = new Stardust(point2.x,point2.y);
		point3 = new org.flixel.FlxPoint(350,250);
		dust3 = new Stardust(point3.x,point3.y);
		point4 = new org.flixel.FlxPoint(190,330);
		dust4 = new Stardust(point4.x,point4.y);
		point5 = new org.flixel.FlxPoint(380,290);
		dust5 = new Stardust(point5.x,point5.y);
		point6 = new org.flixel.FlxPoint(220,-30);
		dust6 = new Stardust(point6.x,point6.y);
		
		add(dust1);
		//add(dust2);
		add(dust3);
		add(dust4);
		add(dust5);
		add(dust6);
		
		//mouseTracking 
		mouseSprite = new FlxSprite(0,0,"assets/player.png");
		mouseSprite.visible=false;
		add(mouseSprite);
		
		
		//trail Stuff
		 trailSprite = new FlxSprite(100, 400, "assets/playerSprite.png");
		 trail  = new NewFlxTrail(trailSprite,"assets/player.png", tailLength, 2, .99, .01);
		 
		 
		 add(trail);
		 add(trailSprite);
		 
		 
		//player stuff
		p1 = new Player(0,0);
		add(p1); 
		
		
		//Level Text
		levelText = new FlxText(12,12,800,"base level");
		levelText.size = 20;
		levelText.font = Assets.getFont("assets/CHALONSE.TTF").fontName;
		levelText.text="level "+Std.string(Global.level);
		//add(levelText);
		
		//Score Text
		scoreText = new FlxText(44,18,200);
		scoreText.size=20;
		scoreText.font = Assets.getFont("assets/CHALONSE.TTF").fontName;
		
		//add(scoreText);
		
		//detector
		detector = new Detector (0,0);
		add(detector);
		
		
		
		
	}//end of create

	override public function update():Void
	{
		super.update();
		
		
		deathTimer++;
		FlxG.log(deathTimer);
		
		if (deathTimer >= 450){
			FlxG.switchState(new Level1());
		}
		
		//FlxG.camera.setBounds(-500,-850,1600
		FlxG.camera.setBounds(-500,-650,1600,1250);
		FlxG.camera.follow(p1,0);
		
		//Tail Constantsly shrinking
		tailTimer++;
		if (tailTimer>=20){
		//changeLength(tailLength-1);
		//trail.decreaseLength(1);
		tailTimer=0;
		
		}
		
		detectTimer++;
		if (detectTimer>=3){
			detector.exists=false;
			p1.color=0xFFFFFF;
		}
		
		//scoreText
		scoreText.text = "score: "+Std.string(tailLength);
		
		//mouse Tracking
		mouseSprite.x= FlxG.mouse.x;
		mouseSprite.y=FlxG.mouse.y;
		
		p1.x=trailSprite.x;
		p1.y=trailSprite.y;
		
		//Player Follows mouse
		
		
		if(notTouching == true){
		
			if(org.flixel.plugin.photonstorm.FlxVelocity.distanceBetween(trailSprite,mouseSprite)>= 50){
				org.flixel.plugin.photonstorm.FlxVelocity.moveTowardsObject(trailSprite, mouseSprite, 160);
			}
			
		}
			
		
		
		//detect if overlapping dust
		detector.x=p1.x;
		detector.y=p1.y;
		
		if(tailLength<30){
		detector.width=60;
		detector.height=60;
		}
		
		if(tailLength>30&&tailLength<40){
		detector.width=80;
		detector.height=80;
		}
		
		if(tailLength>40&&tailLength<50){
		detector.width=100;
		detector.height=100;
		}
		
		
		
		
		if (PNpoly(point1,point0,trail.recentPositions)&&detector.exists==true){
			dust1.exists = false;
			point1.x=0;
			point1.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0; 
		}
		
		
		
		if (PNpoly(point2,point0,trail.recentPositions)&&detector.exists==true){
			dust2.exists = false;
			point2.x=0;
			point2.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0;
		}
		
		if (PNpoly(point3,point0,trail.recentPositions)&&detector.exists==true){
			dust3.exists = false;
			point3.x=0;
			point3.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0;
		}
		
		if (PNpoly(point4,point0,trail.recentPositions)&&detector.exists==true){
			dust4.exists = false;
			point4.x=0;
			point4.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0;
		}
		
		if (PNpoly(point5,point0,trail.recentPositions)&&detector.exists==true){
			dust5.exists = false;
			point5.x=0;
			point5.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0;
		}
		
		if (PNpoly(point6,point0,trail.recentPositions)&&detector.exists==true){
			dust6.exists = false;
			point6.x=0;
			point6.y=0;
			score++;
			trail.increaseLength(5);
			tailLength+=5;
			deathTimer=0;
		}
		
		
		
		
		

		//trail Collision
		
		
		//for (var i:int = 6; i < trailLength; i++) {
		for(i in 9...tailLength){
				if (FlxG.overlap(p1,trail.members[i])){
				//p1.color=0x000000;
				detect();
				}
				
			}	
		
		
		
		
		//Collidable Terrain
		
		
		
		//Top left is touching wall,
		if ( org.flixel.plugin.photonstorm.FlxCollision.pixelPerfectPointCheck(Std.int(p1.x -1), Std.int(p1.y -1), BG,1) ){
		 notTouching=false;
		 trailSprite.velocity.x+=40;
		 trailSprite.velocity.y+=40;
		 topLeft=true;
		}
		
		//Top right is touching wall,
		else if ( org.flixel.plugin.photonstorm.FlxCollision.pixelPerfectPointCheck(Std.int(p1.x +p1.width +1), Std.int(p1.y -1), BG,1)  ){
			notTouching=false;
		 trailSprite.velocity.x-=40;
		 trailSprite.velocity.y+=40;
		 topRight=true;
		}
		
		//bottom left
		else if ( org.flixel.plugin.photonstorm.FlxCollision.pixelPerfectPointCheck(Std.int(p1.x -1), Std.int(p1.y +p1.height +1), BG,1)  ){
			notTouching=false;
		 trailSprite.velocity.x+=40;
		 trailSprite.velocity.y-=40;
		 bottomLeft=true;
		}
		
		//bottom right
		else if ( org.flixel.plugin.photonstorm.FlxCollision.pixelPerfectPointCheck(Std.int(p1.x +p1.width +1), Std.int(p1.y +p1.height +1), BG,1)  ){
			notTouching=false;
		 trailSprite.velocity.x-=40;
		 trailSprite.velocity.y-=40;
		 bottomRight=true;
		}
		
		
		else{
		notTouching=true;
		topLeft=false;
		topRight=false;
		bottomLeft=false;
		bottomRight=false;
		}
		
		if(org.flixel.plugin.photonstorm.FlxCollision.pixelPerfectPointCheck(Std.int(p1.x +p1.width/2 -1), Std.int(p1.y +p1.height/2 -1), BG,1)){
		outTimer++;
		
		if (outTimer >=10){
		
			trailSprite.x = 100;
			trailSprite.y = 200;
			outTimer=0;
			}
		}
				
					
			
	}
	
	private function changeLength(n:Int):Void
		{
			
			for(i in 0...tailLength){
				if (i>n-1){
					trail.members[i].exists=false;
					tailLength-1;
				}
				
			}	
			
					
			
		}

	private function redrawTail():Void
		{
			trail.kill();
			trail = new NewFlxTrail(trailSprite, "assets/player.png", tailLength, tailDelay, tailAlpha, tailAlphaDec);
			add(trail);
		}
		
		private function detect():Void
		{
			detectTimer=0;
			detector.exists=true;
			
			
		}
		
		public function PNpoly(pt:org.flixel.FlxPoint, pos:org.flixel.FlxPoint, verts:Array<org.flixel.FlxPoint>) : Bool {

		    var c : Bool = false;
		    var nvert : Int = verts.length;
		    var j : Int = nvert - 1;

		    for(i in 0 ... nvert) {            
		        
		        if ((( (verts[i].y+pos.y) > pt.y) != ((verts[j].y+pos.y) > pt.y)) &&
		           (pt.x < ( (verts[j].x+pos.x) - (verts[i].x+pos.x)) * (pt.y - (verts[i].y+pos.y)) / ( (verts[j].y+pos.y) - (verts[i].y+pos.y)) + (verts[i].x+pos.x)) ) {
		            c = !c;
		        }

		        j = i;
		    }

		    return c;
		}
	
	
}