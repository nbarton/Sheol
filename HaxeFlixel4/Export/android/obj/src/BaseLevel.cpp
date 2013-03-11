#include <hxcpp.h>

#ifndef INCLUDED_BG1
#include <BG1.h>
#endif
#ifndef INCLUDED_BaseLevel
#include <BaseLevel.h>
#endif
#ifndef INCLUDED_Detector
#include <Detector.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_Level1
#include <Level1.h>
#endif
#ifndef INCLUDED_NewFlxTrail
#include <NewFlxTrail.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Stardust
#include <Stardust.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
#endif
#ifndef INCLUDED_org_flixel_FlxRect
#include <org/flixel/FlxRect.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxText
#include <org/flixel/FlxText.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxCollision
#include <org/flixel/plugin/photonstorm/FlxCollision.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxVelocity
#include <org/flixel/plugin/photonstorm/FlxVelocity.h>
#endif
#ifndef INCLUDED_org_flixel_system_FlxQuadTree
#include <org/flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_Mouse
#include <org/flixel/system/input/Mouse.h>
#endif

Void BaseLevel_obj::__construct()
{
HX_STACK_PUSH("BaseLevel::new","BaseLevel.hx",12);
{
	HX_STACK_LINE(59)
	this->deathTimer = (int)0;
	HX_STACK_LINE(30)
	this->detectTimer = (int)0;
	HX_STACK_LINE(29)
	this->tailTimer = (int)0;
	HX_STACK_LINE(26)
	this->tailAlphaDec = .02;
	HX_STACK_LINE(25)
	this->tailAlpha = .99;
	HX_STACK_LINE(24)
	this->tailDelay = (int)2;
	HX_STACK_LINE(23)
	this->tailLength = (int)20;
	HX_STACK_LINE(21)
	this->score = (int)0;
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

BaseLevel_obj::~BaseLevel_obj() { }

Dynamic BaseLevel_obj::__CreateEmpty() { return  new BaseLevel_obj; }
hx::ObjectPtr< BaseLevel_obj > BaseLevel_obj::__new()
{  hx::ObjectPtr< BaseLevel_obj > result = new BaseLevel_obj();
	result->__construct();
	return result;}

Dynamic BaseLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseLevel_obj > result = new BaseLevel_obj();
	result->__construct();
	return result;}

bool BaseLevel_obj::PNpoly( ::org::flixel::FlxPoint pt,::org::flixel::FlxPoint pos,Array< ::org::flixel::FlxPoint > verts){
	HX_STACK_PUSH("BaseLevel::PNpoly","BaseLevel.hx",389);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pt,"pt");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(verts,"verts");
	HX_STACK_LINE(391)
	bool c = false;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(392)
	int nvert = verts->length;		HX_STACK_VAR(nvert,"nvert");
	HX_STACK_LINE(393)
	int j = (nvert - (int)1);		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(395)
		while(((_g < nvert))){
			HX_STACK_LINE(395)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(397)
			if (((bool((((verts->__get(i)->y + pos->y) > pt->y) != ((verts->__get(j)->y + pos->y) > pt->y))) && bool((pt->x < ((Float(((((verts->__get(j)->x + pos->x) - ((verts->__get(i)->x + pos->x)))) * ((pt->y - ((verts->__get(i)->y + pos->y)))))) / Float((((verts->__get(j)->y + pos->y) - ((verts->__get(i)->y + pos->y)))))) + ((verts->__get(i)->x + pos->x)))))))){
				HX_STACK_LINE(398)
				c = !(c);
			}
			HX_STACK_LINE(402)
			j = i;
		}
	}
	HX_STACK_LINE(405)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC3(BaseLevel_obj,PNpoly,return )

Void BaseLevel_obj::detect( ){
{
		HX_STACK_PUSH("BaseLevel::detect","BaseLevel.hx",382);
		HX_STACK_THIS(this);
		HX_STACK_LINE(383)
		this->detectTimer = (int)0;
		HX_STACK_LINE(384)
		this->detector->exists = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseLevel_obj,detect,(void))

Void BaseLevel_obj::redrawTail( ){
{
		HX_STACK_PUSH("BaseLevel::redrawTail","BaseLevel.hx",375);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		this->trail->kill();
		HX_STACK_LINE(377)
		this->trail = ::NewFlxTrail_obj::__new(this->trailSprite,HX_CSTRING("assets/player.png"),this->tailLength,this->tailDelay,this->tailAlpha,this->tailAlphaDec);
		HX_STACK_LINE(378)
		this->add(this->trail);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseLevel_obj,redrawTail,(void))

Void BaseLevel_obj::changeLength( int n){
{
		HX_STACK_PUSH("BaseLevel::changeLength","BaseLevel.hx",360);
		HX_STACK_THIS(this);
		HX_STACK_ARG(n,"n");
		HX_STACK_LINE(362)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->tailLength;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(362)
		while(((_g1 < _g))){
			HX_STACK_LINE(362)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(363)
			if (((i > (n - (int)1)))){
				HX_STACK_LINE(364)
				this->trail->members->__get(i)->exists = false;
				HX_STACK_LINE(365)
				(this->tailLength - (int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BaseLevel_obj,changeLength,(void))

Void BaseLevel_obj::update( ){
{
		HX_STACK_PUSH("BaseLevel::update","BaseLevel.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_LINE(143)
		this->super::update();
		HX_STACK_LINE(146)
		(this->deathTimer)++;
		HX_STACK_LINE(147)
		::org::flixel::FlxG_obj::log(this->deathTimer);
		HX_STACK_LINE(149)
		if (((this->deathTimer >= (int)450))){
			HX_STACK_LINE(149)
			::org::flixel::FlxG_obj::switchState(::Level1_obj::__new());
		}
		HX_STACK_LINE(154)
		::org::flixel::FlxG_obj::camera->setBounds((int)-500,(int)-650,(int)1600,(int)1250,null());
		HX_STACK_LINE(155)
		::org::flixel::FlxG_obj::camera->follow(this->p1,(int)0,null());
		HX_STACK_LINE(158)
		(this->tailTimer)++;
		HX_STACK_LINE(159)
		if (((this->tailTimer >= (int)20))){
			HX_STACK_LINE(159)
			this->tailTimer = (int)0;
		}
		HX_STACK_LINE(166)
		(this->detectTimer)++;
		HX_STACK_LINE(167)
		if (((this->detectTimer >= (int)3))){
			HX_STACK_LINE(168)
			this->detector->exists = false;
			HX_STACK_LINE(169)
			this->p1->setColor((int)16777215);
		}
		HX_STACK_LINE(173)
		this->scoreText->setText((HX_CSTRING("score: ") + ::Std_obj::string(this->tailLength)));
		HX_STACK_LINE(176)
		this->mouseSprite->x = ::org::flixel::FlxG_obj::mouse->x;
		HX_STACK_LINE(177)
		this->mouseSprite->y = ::org::flixel::FlxG_obj::mouse->y;
		HX_STACK_LINE(179)
		this->p1->x = this->trailSprite->x;
		HX_STACK_LINE(180)
		this->p1->y = this->trailSprite->y;
		HX_STACK_LINE(185)
		if (((this->notTouching == true))){
			HX_STACK_LINE(185)
			if (((::org::flixel::plugin::photonstorm::FlxVelocity_obj::distanceBetween(this->trailSprite,this->mouseSprite) >= (int)50))){
				HX_STACK_LINE(187)
				::org::flixel::plugin::photonstorm::FlxVelocity_obj::moveTowardsObject(this->trailSprite,this->mouseSprite,(int)160,null());
			}
		}
		HX_STACK_LINE(196)
		this->detector->x = this->p1->x;
		HX_STACK_LINE(197)
		this->detector->y = this->p1->y;
		HX_STACK_LINE(199)
		if (((this->tailLength < (int)30))){
			HX_STACK_LINE(200)
			this->detector->width = (int)60;
			HX_STACK_LINE(201)
			this->detector->height = (int)60;
		}
		HX_STACK_LINE(204)
		if (((bool((this->tailLength > (int)30)) && bool((this->tailLength < (int)40))))){
			HX_STACK_LINE(205)
			this->detector->width = (int)80;
			HX_STACK_LINE(206)
			this->detector->height = (int)80;
		}
		HX_STACK_LINE(209)
		if (((bool((this->tailLength > (int)40)) && bool((this->tailLength < (int)50))))){
			HX_STACK_LINE(210)
			this->detector->width = (int)100;
			HX_STACK_LINE(211)
			this->detector->height = (int)100;
		}
		HX_STACK_LINE(217)
		if (((bool(this->PNpoly(this->point1,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(218)
			this->dust1->exists = false;
			HX_STACK_LINE(219)
			this->point1->x = (int)0;
			HX_STACK_LINE(220)
			this->point1->y = (int)0;
			HX_STACK_LINE(221)
			(this->score)++;
			HX_STACK_LINE(222)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(223)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(224)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(229)
		if (((bool(this->PNpoly(this->point2,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(230)
			this->dust2->exists = false;
			HX_STACK_LINE(231)
			this->point2->x = (int)0;
			HX_STACK_LINE(232)
			this->point2->y = (int)0;
			HX_STACK_LINE(233)
			(this->score)++;
			HX_STACK_LINE(234)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(235)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(236)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(239)
		if (((bool(this->PNpoly(this->point3,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(240)
			this->dust3->exists = false;
			HX_STACK_LINE(241)
			this->point3->x = (int)0;
			HX_STACK_LINE(242)
			this->point3->y = (int)0;
			HX_STACK_LINE(243)
			(this->score)++;
			HX_STACK_LINE(244)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(245)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(246)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(249)
		if (((bool(this->PNpoly(this->point4,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(250)
			this->dust4->exists = false;
			HX_STACK_LINE(251)
			this->point4->x = (int)0;
			HX_STACK_LINE(252)
			this->point4->y = (int)0;
			HX_STACK_LINE(253)
			(this->score)++;
			HX_STACK_LINE(254)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(255)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(256)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(259)
		if (((bool(this->PNpoly(this->point5,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(260)
			this->dust5->exists = false;
			HX_STACK_LINE(261)
			this->point5->x = (int)0;
			HX_STACK_LINE(262)
			this->point5->y = (int)0;
			HX_STACK_LINE(263)
			(this->score)++;
			HX_STACK_LINE(264)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(265)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(266)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(269)
		if (((bool(this->PNpoly(this->point6,this->point0,this->trail->recentPositions)) && bool((this->detector->exists == true))))){
			HX_STACK_LINE(270)
			this->dust6->exists = false;
			HX_STACK_LINE(271)
			this->point6->x = (int)0;
			HX_STACK_LINE(272)
			this->point6->y = (int)0;
			HX_STACK_LINE(273)
			(this->score)++;
			HX_STACK_LINE(274)
			this->trail->increaseLength((int)5);
			HX_STACK_LINE(275)
			hx::AddEq(this->tailLength,(int)5);
			HX_STACK_LINE(276)
			this->deathTimer = (int)0;
		}
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			int _g1 = (int)9;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->tailLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(288)
			while(((_g1 < _g))){
				HX_STACK_LINE(288)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static bool Block( ::BaseLevel_obj *__this,int &i){
						HX_STACK_PUSH("*::closure","BaseLevel.hx",289);
						{
							HX_STACK_LINE(289)
							::org::flixel::FlxBasic ObjectOrGroup1 = __this->p1;		HX_STACK_VAR(ObjectOrGroup1,"ObjectOrGroup1");
							::org::flixel::FlxBasic ObjectOrGroup2 = __this->trail->members->__get(i);		HX_STACK_VAR(ObjectOrGroup2,"ObjectOrGroup2");
							Dynamic NotifyCallback = null();		HX_STACK_VAR(NotifyCallback,"NotifyCallback");
							Dynamic ProcessCallback = null();		HX_STACK_VAR(ProcessCallback,"ProcessCallback");
							HX_STACK_LINE(289)
							if (((ObjectOrGroup1 == null()))){
								HX_STACK_LINE(289)
								ObjectOrGroup1 = ::org::flixel::FlxG_obj::getState();
							}
							HX_STACK_LINE(289)
							if (((ObjectOrGroup2 == ObjectOrGroup1))){
								HX_STACK_LINE(289)
								ObjectOrGroup2 = null();
							}
							HX_STACK_LINE(289)
							::org::flixel::system::FlxQuadTree_obj::divisions = ::org::flixel::FlxG_obj::worldDivisions;
							HX_STACK_LINE(289)
							::org::flixel::system::FlxQuadTree quadTree = ::org::flixel::system::FlxQuadTree_obj::recycle(::org::flixel::FlxG_obj::worldBounds->x,::org::flixel::FlxG_obj::worldBounds->y,::org::flixel::FlxG_obj::worldBounds->width,::org::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
							HX_STACK_LINE(289)
							quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,ProcessCallback);
							HX_STACK_LINE(289)
							bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(289)
							quadTree->destroy();
							HX_STACK_LINE(289)
							return result;
						}
						return null();
					}
				};
				HX_STACK_LINE(289)
				if ((_Function_3_1::Block(this,i))){
					HX_STACK_LINE(289)
					this->detect();
				}
			}
		}
		HX_STACK_LINE(304)
		if ((::org::flixel::plugin::photonstorm::FlxCollision_obj::pixelPerfectPointCheck(::Std_obj::_int((this->p1->x - (int)1)),::Std_obj::_int((this->p1->y - (int)1)),this->BG,(int)1))){
			HX_STACK_LINE(305)
			this->notTouching = false;
			HX_STACK_LINE(306)
			hx::AddEq(this->trailSprite->velocity->x,(int)40);
			HX_STACK_LINE(307)
			hx::AddEq(this->trailSprite->velocity->y,(int)40);
			HX_STACK_LINE(308)
			this->topLeft = true;
		}
		else{
			HX_STACK_LINE(312)
			if ((::org::flixel::plugin::photonstorm::FlxCollision_obj::pixelPerfectPointCheck(::Std_obj::_int(((this->p1->x + this->p1->width) + (int)1)),::Std_obj::_int((this->p1->y - (int)1)),this->BG,(int)1))){
				HX_STACK_LINE(313)
				this->notTouching = false;
				HX_STACK_LINE(314)
				hx::SubEq(this->trailSprite->velocity->x,(int)40);
				HX_STACK_LINE(315)
				hx::AddEq(this->trailSprite->velocity->y,(int)40);
				HX_STACK_LINE(316)
				this->topRight = true;
			}
			else{
				HX_STACK_LINE(320)
				if ((::org::flixel::plugin::photonstorm::FlxCollision_obj::pixelPerfectPointCheck(::Std_obj::_int((this->p1->x - (int)1)),::Std_obj::_int(((this->p1->y + this->p1->height) + (int)1)),this->BG,(int)1))){
					HX_STACK_LINE(321)
					this->notTouching = false;
					HX_STACK_LINE(322)
					hx::AddEq(this->trailSprite->velocity->x,(int)40);
					HX_STACK_LINE(323)
					hx::SubEq(this->trailSprite->velocity->y,(int)40);
					HX_STACK_LINE(324)
					this->bottomLeft = true;
				}
				else{
					HX_STACK_LINE(328)
					if ((::org::flixel::plugin::photonstorm::FlxCollision_obj::pixelPerfectPointCheck(::Std_obj::_int(((this->p1->x + this->p1->width) + (int)1)),::Std_obj::_int(((this->p1->y + this->p1->height) + (int)1)),this->BG,(int)1))){
						HX_STACK_LINE(329)
						this->notTouching = false;
						HX_STACK_LINE(330)
						hx::SubEq(this->trailSprite->velocity->x,(int)40);
						HX_STACK_LINE(331)
						hx::SubEq(this->trailSprite->velocity->y,(int)40);
						HX_STACK_LINE(332)
						this->bottomRight = true;
					}
					else{
						HX_STACK_LINE(337)
						this->notTouching = true;
						HX_STACK_LINE(338)
						this->topLeft = false;
						HX_STACK_LINE(339)
						this->topRight = false;
						HX_STACK_LINE(340)
						this->bottomLeft = false;
						HX_STACK_LINE(341)
						this->bottomRight = false;
					}
				}
			}
		}
		HX_STACK_LINE(344)
		if ((::org::flixel::plugin::photonstorm::FlxCollision_obj::pixelPerfectPointCheck(::Std_obj::_int(((this->p1->x + (Float(this->p1->width) / Float((int)2))) - (int)1)),::Std_obj::_int(((this->p1->y + (Float(this->p1->height) / Float((int)2))) - (int)1)),this->BG,(int)1))){
			HX_STACK_LINE(345)
			(this->outTimer)++;
			HX_STACK_LINE(347)
			if (((this->outTimer >= (int)10))){
				HX_STACK_LINE(349)
				this->trailSprite->x = (int)100;
				HX_STACK_LINE(350)
				this->trailSprite->y = (int)200;
				HX_STACK_LINE(351)
				this->outTimer = (int)0;
			}
		}
	}
return null();
}


Void BaseLevel_obj::create( ){
{
		HX_STACK_PUSH("BaseLevel::create","BaseLevel.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_LINE(64)
		::org::flixel::FlxG_obj::setBgColor((int)-12510437);
		HX_STACK_LINE(65)
		::org::flixel::FlxG_obj::mouse->show(null(),null(),null(),null());
		HX_STACK_LINE(72)
		this->BG = ::BG1_obj::__new((int)-500,(int)-650);
		HX_STACK_LINE(73)
		this->add(this->BG);
		HX_STACK_LINE(76)
		this->point0 = ::org::flixel::FlxPoint_obj::__new((int)0,(int)0);
		HX_STACK_LINE(78)
		this->point1 = ::org::flixel::FlxPoint_obj::__new((int)150,(int)430);
		HX_STACK_LINE(79)
		this->dust1 = ::Stardust_obj::__new(this->point1->x,this->point1->y);
		HX_STACK_LINE(80)
		this->point2 = ::org::flixel::FlxPoint_obj::__new((int)140,(int)470);
		HX_STACK_LINE(81)
		this->dust2 = ::Stardust_obj::__new(this->point2->x,this->point2->y);
		HX_STACK_LINE(82)
		this->point3 = ::org::flixel::FlxPoint_obj::__new((int)350,(int)250);
		HX_STACK_LINE(83)
		this->dust3 = ::Stardust_obj::__new(this->point3->x,this->point3->y);
		HX_STACK_LINE(84)
		this->point4 = ::org::flixel::FlxPoint_obj::__new((int)190,(int)330);
		HX_STACK_LINE(85)
		this->dust4 = ::Stardust_obj::__new(this->point4->x,this->point4->y);
		HX_STACK_LINE(86)
		this->point5 = ::org::flixel::FlxPoint_obj::__new((int)380,(int)290);
		HX_STACK_LINE(87)
		this->dust5 = ::Stardust_obj::__new(this->point5->x,this->point5->y);
		HX_STACK_LINE(88)
		this->point6 = ::org::flixel::FlxPoint_obj::__new((int)220,(int)-30);
		HX_STACK_LINE(89)
		this->dust6 = ::Stardust_obj::__new(this->point6->x,this->point6->y);
		HX_STACK_LINE(91)
		this->add(this->dust1);
		HX_STACK_LINE(93)
		this->add(this->dust3);
		HX_STACK_LINE(94)
		this->add(this->dust4);
		HX_STACK_LINE(95)
		this->add(this->dust5);
		HX_STACK_LINE(96)
		this->add(this->dust6);
		HX_STACK_LINE(99)
		this->mouseSprite = ::org::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/player.png"));
		HX_STACK_LINE(100)
		this->mouseSprite->visible = false;
		HX_STACK_LINE(101)
		this->add(this->mouseSprite);
		HX_STACK_LINE(105)
		this->trailSprite = ::org::flixel::FlxSprite_obj::__new((int)100,(int)400,HX_CSTRING("assets/playerSprite.png"));
		HX_STACK_LINE(106)
		this->trail = ::NewFlxTrail_obj::__new(this->trailSprite,HX_CSTRING("assets/player.png"),this->tailLength,(int)2,.99,.01);
		HX_STACK_LINE(109)
		this->add(this->trail);
		HX_STACK_LINE(110)
		this->add(this->trailSprite);
		HX_STACK_LINE(114)
		this->p1 = ::Player_obj::__new((int)0,(int)0);
		HX_STACK_LINE(115)
		this->add(this->p1);
		HX_STACK_LINE(119)
		this->levelText = ::org::flixel::FlxText_obj::__new((int)12,(int)12,(int)800,HX_CSTRING("base level"),null());
		HX_STACK_LINE(120)
		this->levelText->setSize((int)20);
		HX_STACK_LINE(121)
		this->levelText->setFont(::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/CHALONSE.TTF"))->fontName);
		HX_STACK_LINE(122)
		this->levelText->setText((HX_CSTRING("level ") + ::Std_obj::string(::Global_obj::level)));
		HX_STACK_LINE(126)
		this->scoreText = ::org::flixel::FlxText_obj::__new((int)44,(int)18,(int)200,null(),null());
		HX_STACK_LINE(127)
		this->scoreText->setSize((int)20);
		HX_STACK_LINE(128)
		this->scoreText->setFont(::nme::installer::Assets_obj::getFont(HX_CSTRING("assets/CHALONSE.TTF"))->fontName);
		HX_STACK_LINE(133)
		this->detector = ::Detector_obj::__new((int)0,(int)0);
		HX_STACK_LINE(134)
		this->add(this->detector);
	}
return null();
}



BaseLevel_obj::BaseLevel_obj()
{
}

void BaseLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseLevel);
	HX_MARK_MEMBER_NAME(deathTimer,"deathTimer");
	HX_MARK_MEMBER_NAME(bottomRight,"bottomRight");
	HX_MARK_MEMBER_NAME(bottomLeft,"bottomLeft");
	HX_MARK_MEMBER_NAME(topRight,"topRight");
	HX_MARK_MEMBER_NAME(topLeft,"topLeft");
	HX_MARK_MEMBER_NAME(outTimer,"outTimer");
	HX_MARK_MEMBER_NAME(notTouching,"notTouching");
	HX_MARK_MEMBER_NAME(dust7,"dust7");
	HX_MARK_MEMBER_NAME(dust6,"dust6");
	HX_MARK_MEMBER_NAME(dust5,"dust5");
	HX_MARK_MEMBER_NAME(dust4,"dust4");
	HX_MARK_MEMBER_NAME(dust3,"dust3");
	HX_MARK_MEMBER_NAME(dust2,"dust2");
	HX_MARK_MEMBER_NAME(dust1,"dust1");
	HX_MARK_MEMBER_NAME(point6,"point6");
	HX_MARK_MEMBER_NAME(point5,"point5");
	HX_MARK_MEMBER_NAME(point4,"point4");
	HX_MARK_MEMBER_NAME(point3,"point3");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(point0,"point0");
	HX_MARK_MEMBER_NAME(detectTimer,"detectTimer");
	HX_MARK_MEMBER_NAME(tailTimer,"tailTimer");
	HX_MARK_MEMBER_NAME(tailAlphaDec,"tailAlphaDec");
	HX_MARK_MEMBER_NAME(tailAlpha,"tailAlpha");
	HX_MARK_MEMBER_NAME(tailDelay,"tailDelay");
	HX_MARK_MEMBER_NAME(tailLength,"tailLength");
	HX_MARK_MEMBER_NAME(detector,"detector");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(mouseSprite,"mouseSprite");
	HX_MARK_MEMBER_NAME(trail,"trail");
	HX_MARK_MEMBER_NAME(trailSprite,"trailSprite");
	HX_MARK_MEMBER_NAME(BG,"BG");
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(levelText,"levelText");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deathTimer,"deathTimer");
	HX_VISIT_MEMBER_NAME(bottomRight,"bottomRight");
	HX_VISIT_MEMBER_NAME(bottomLeft,"bottomLeft");
	HX_VISIT_MEMBER_NAME(topRight,"topRight");
	HX_VISIT_MEMBER_NAME(topLeft,"topLeft");
	HX_VISIT_MEMBER_NAME(outTimer,"outTimer");
	HX_VISIT_MEMBER_NAME(notTouching,"notTouching");
	HX_VISIT_MEMBER_NAME(dust7,"dust7");
	HX_VISIT_MEMBER_NAME(dust6,"dust6");
	HX_VISIT_MEMBER_NAME(dust5,"dust5");
	HX_VISIT_MEMBER_NAME(dust4,"dust4");
	HX_VISIT_MEMBER_NAME(dust3,"dust3");
	HX_VISIT_MEMBER_NAME(dust2,"dust2");
	HX_VISIT_MEMBER_NAME(dust1,"dust1");
	HX_VISIT_MEMBER_NAME(point6,"point6");
	HX_VISIT_MEMBER_NAME(point5,"point5");
	HX_VISIT_MEMBER_NAME(point4,"point4");
	HX_VISIT_MEMBER_NAME(point3,"point3");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(point0,"point0");
	HX_VISIT_MEMBER_NAME(detectTimer,"detectTimer");
	HX_VISIT_MEMBER_NAME(tailTimer,"tailTimer");
	HX_VISIT_MEMBER_NAME(tailAlphaDec,"tailAlphaDec");
	HX_VISIT_MEMBER_NAME(tailAlpha,"tailAlpha");
	HX_VISIT_MEMBER_NAME(tailDelay,"tailDelay");
	HX_VISIT_MEMBER_NAME(tailLength,"tailLength");
	HX_VISIT_MEMBER_NAME(detector,"detector");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(mouseSprite,"mouseSprite");
	HX_VISIT_MEMBER_NAME(trail,"trail");
	HX_VISIT_MEMBER_NAME(trailSprite,"trailSprite");
	HX_VISIT_MEMBER_NAME(BG,"BG");
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(levelText,"levelText");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BaseLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { return BG; }
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dust7") ) { return dust7; }
		if (HX_FIELD_EQ(inName,"dust6") ) { return dust6; }
		if (HX_FIELD_EQ(inName,"dust5") ) { return dust5; }
		if (HX_FIELD_EQ(inName,"dust4") ) { return dust4; }
		if (HX_FIELD_EQ(inName,"dust3") ) { return dust3; }
		if (HX_FIELD_EQ(inName,"dust2") ) { return dust2; }
		if (HX_FIELD_EQ(inName,"dust1") ) { return dust1; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"trail") ) { return trail; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PNpoly") ) { return PNpoly_dyn(); }
		if (HX_FIELD_EQ(inName,"detect") ) { return detect_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"point6") ) { return point6; }
		if (HX_FIELD_EQ(inName,"point5") ) { return point5; }
		if (HX_FIELD_EQ(inName,"point4") ) { return point4; }
		if (HX_FIELD_EQ(inName,"point3") ) { return point3; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"point1") ) { return point1; }
		if (HX_FIELD_EQ(inName,"point0") ) { return point0; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return topLeft; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topRight") ) { return topRight; }
		if (HX_FIELD_EQ(inName,"outTimer") ) { return outTimer; }
		if (HX_FIELD_EQ(inName,"detector") ) { return detector; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tailTimer") ) { return tailTimer; }
		if (HX_FIELD_EQ(inName,"tailAlpha") ) { return tailAlpha; }
		if (HX_FIELD_EQ(inName,"tailDelay") ) { return tailDelay; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"levelText") ) { return levelText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redrawTail") ) { return redrawTail_dyn(); }
		if (HX_FIELD_EQ(inName,"deathTimer") ) { return deathTimer; }
		if (HX_FIELD_EQ(inName,"bottomLeft") ) { return bottomLeft; }
		if (HX_FIELD_EQ(inName,"tailLength") ) { return tailLength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return bottomRight; }
		if (HX_FIELD_EQ(inName,"notTouching") ) { return notTouching; }
		if (HX_FIELD_EQ(inName,"detectTimer") ) { return detectTimer; }
		if (HX_FIELD_EQ(inName,"mouseSprite") ) { return mouseSprite; }
		if (HX_FIELD_EQ(inName,"trailSprite") ) { return trailSprite; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changeLength") ) { return changeLength_dyn(); }
		if (HX_FIELD_EQ(inName,"tailAlphaDec") ) { return tailAlphaDec; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"BG") ) { BG=inValue.Cast< ::BG1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dust7") ) { dust7=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust6") ) { dust6=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust5") ) { dust5=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust4") ) { dust4=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust3") ) { dust3=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust2") ) { dust2=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dust1") ) { dust1=inValue.Cast< ::Stardust >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trail") ) { trail=inValue.Cast< ::NewFlxTrail >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point6") ) { point6=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point5") ) { point5=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point4") ) { point4=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point3") ) { point3=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point0") ) { point0=inValue.Cast< ::org::flixel::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { topLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"topRight") ) { topRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outTimer") ) { outTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"detector") ) { detector=inValue.Cast< ::Detector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tailTimer") ) { tailTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tailAlpha") ) { tailAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tailDelay") ) { tailDelay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelText") ) { levelText=inValue.Cast< ::org::flixel::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deathTimer") ) { deathTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomLeft") ) { bottomLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tailLength") ) { tailLength=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { bottomRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"notTouching") ) { notTouching=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"detectTimer") ) { detectTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseSprite") ) { mouseSprite=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"trailSprite") ) { trailSprite=inValue.Cast< ::org::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tailAlphaDec") ) { tailAlphaDec=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("deathTimer"));
	outFields->push(HX_CSTRING("bottomRight"));
	outFields->push(HX_CSTRING("bottomLeft"));
	outFields->push(HX_CSTRING("topRight"));
	outFields->push(HX_CSTRING("topLeft"));
	outFields->push(HX_CSTRING("outTimer"));
	outFields->push(HX_CSTRING("notTouching"));
	outFields->push(HX_CSTRING("dust7"));
	outFields->push(HX_CSTRING("dust6"));
	outFields->push(HX_CSTRING("dust5"));
	outFields->push(HX_CSTRING("dust4"));
	outFields->push(HX_CSTRING("dust3"));
	outFields->push(HX_CSTRING("dust2"));
	outFields->push(HX_CSTRING("dust1"));
	outFields->push(HX_CSTRING("point6"));
	outFields->push(HX_CSTRING("point5"));
	outFields->push(HX_CSTRING("point4"));
	outFields->push(HX_CSTRING("point3"));
	outFields->push(HX_CSTRING("point2"));
	outFields->push(HX_CSTRING("point1"));
	outFields->push(HX_CSTRING("point0"));
	outFields->push(HX_CSTRING("detectTimer"));
	outFields->push(HX_CSTRING("tailTimer"));
	outFields->push(HX_CSTRING("tailAlphaDec"));
	outFields->push(HX_CSTRING("tailAlpha"));
	outFields->push(HX_CSTRING("tailDelay"));
	outFields->push(HX_CSTRING("tailLength"));
	outFields->push(HX_CSTRING("detector"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("mouseSprite"));
	outFields->push(HX_CSTRING("trail"));
	outFields->push(HX_CSTRING("trailSprite"));
	outFields->push(HX_CSTRING("BG"));
	outFields->push(HX_CSTRING("p1"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("levelText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("PNpoly"),
	HX_CSTRING("detect"),
	HX_CSTRING("redrawTail"),
	HX_CSTRING("changeLength"),
	HX_CSTRING("update"),
	HX_CSTRING("create"),
	HX_CSTRING("deathTimer"),
	HX_CSTRING("bottomRight"),
	HX_CSTRING("bottomLeft"),
	HX_CSTRING("topRight"),
	HX_CSTRING("topLeft"),
	HX_CSTRING("outTimer"),
	HX_CSTRING("notTouching"),
	HX_CSTRING("dust7"),
	HX_CSTRING("dust6"),
	HX_CSTRING("dust5"),
	HX_CSTRING("dust4"),
	HX_CSTRING("dust3"),
	HX_CSTRING("dust2"),
	HX_CSTRING("dust1"),
	HX_CSTRING("point6"),
	HX_CSTRING("point5"),
	HX_CSTRING("point4"),
	HX_CSTRING("point3"),
	HX_CSTRING("point2"),
	HX_CSTRING("point1"),
	HX_CSTRING("point0"),
	HX_CSTRING("detectTimer"),
	HX_CSTRING("tailTimer"),
	HX_CSTRING("tailAlphaDec"),
	HX_CSTRING("tailAlpha"),
	HX_CSTRING("tailDelay"),
	HX_CSTRING("tailLength"),
	HX_CSTRING("detector"),
	HX_CSTRING("score"),
	HX_CSTRING("mouseSprite"),
	HX_CSTRING("trail"),
	HX_CSTRING("trailSprite"),
	HX_CSTRING("BG"),
	HX_CSTRING("p1"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("levelText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseLevel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseLevel_obj::__mClass,"__mClass");
};

Class BaseLevel_obj::__mClass;

void BaseLevel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("BaseLevel"), hx::TCanCast< BaseLevel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BaseLevel_obj::__boot()
{
}

