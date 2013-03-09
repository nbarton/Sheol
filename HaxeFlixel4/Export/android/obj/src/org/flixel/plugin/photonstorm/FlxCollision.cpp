#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
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
#ifndef INCLUDED_org_flixel_FlxTileblock
#include <org/flixel/FlxTileblock.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxCollision
#include <org/flixel/plugin/photonstorm/FlxCollision.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_photonstorm_FlxMath
#include <org/flixel/plugin/photonstorm/FlxMath.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace photonstorm{

Void FlxCollision_obj::__construct()
{
HX_STACK_PUSH("FlxCollision::new","org/flixel/plugin/photonstorm/FlxCollision.hx",48);
{
}
;
	return null();
}

FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

::native::display::BitmapData FlxCollision_obj::debug;

int FlxCollision_obj::CAMERA_WALL_OUTSIDE;

int FlxCollision_obj::CAMERA_WALL_INSIDE;

bool FlxCollision_obj::pixelPerfectCheck( ::org::flixel::FlxSprite contact,::org::flixel::FlxSprite target,hx::Null< int >  __o_alphaTolerance,::org::flixel::FlxCamera camera){
int alphaTolerance = __o_alphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectCheck","org/flixel/plugin/photonstorm/FlxCollision.hx",67);
	HX_STACK_ARG(contact,"contact");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(alphaTolerance,"alphaTolerance");
	HX_STACK_ARG(camera,"camera");
{
		HX_STACK_LINE(68)
		::native::geom::Point pointA = ::native::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointA,"pointA");
		HX_STACK_LINE(69)
		::native::geom::Point pointB = ::native::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(pointB,"pointB");
		HX_STACK_LINE(71)
		if (((camera != null()))){
			HX_STACK_LINE(73)
			pointA->x = ((contact->x - ::Std_obj::_int((camera->scroll->x * contact->scrollFactor->x))) - contact->offset->x);
			HX_STACK_LINE(74)
			pointA->y = ((contact->y - ::Std_obj::_int((camera->scroll->y * contact->scrollFactor->y))) - contact->offset->y);
			HX_STACK_LINE(76)
			pointB->x = ((target->x - ::Std_obj::_int((camera->scroll->x * target->scrollFactor->x))) - target->offset->x);
			HX_STACK_LINE(77)
			pointB->y = ((target->y - ::Std_obj::_int((camera->scroll->y * target->scrollFactor->y))) - target->offset->y);
		}
		else{
			HX_STACK_LINE(81)
			pointA->x = ((contact->x - ::Std_obj::_int((::org::flixel::FlxG_obj::camera->scroll->x * contact->scrollFactor->x))) - contact->offset->x);
			HX_STACK_LINE(82)
			pointA->y = ((contact->y - ::Std_obj::_int((::org::flixel::FlxG_obj::camera->scroll->y * contact->scrollFactor->y))) - contact->offset->y);
			HX_STACK_LINE(84)
			pointB->x = ((target->x - ::Std_obj::_int((::org::flixel::FlxG_obj::camera->scroll->x * target->scrollFactor->x))) - target->offset->x);
			HX_STACK_LINE(85)
			pointB->y = ((target->y - ::Std_obj::_int((::org::flixel::FlxG_obj::camera->scroll->y * target->scrollFactor->y))) - target->offset->y);
		}
		HX_STACK_LINE(91)
		::native::geom::Rectangle boundsA = ::native::geom::Rectangle_obj::__new(pointA->x,pointA->y,contact->frameWidth,contact->frameHeight);		HX_STACK_VAR(boundsA,"boundsA");
		HX_STACK_LINE(92)
		::native::geom::Rectangle boundsB = ::native::geom::Rectangle_obj::__new(pointB->x,pointB->y,target->frameWidth,target->frameHeight);		HX_STACK_VAR(boundsB,"boundsB");
		HX_STACK_LINE(94)
		::native::geom::Rectangle intersect = boundsA->intersection(boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(96)
		if (((bool((bool(intersect->isEmpty()) || bool((intersect->width == (int)0)))) || bool((intersect->height == (int)0))))){
			HX_STACK_LINE(97)
			return false;
		}
		HX_STACK_LINE(102)
		intersect->x = ::Math_obj::floor(intersect->x);
		HX_STACK_LINE(103)
		intersect->y = ::Math_obj::floor(intersect->y);
		HX_STACK_LINE(104)
		intersect->width = ::Math_obj::ceil(intersect->width);
		HX_STACK_LINE(105)
		intersect->height = ::Math_obj::ceil(intersect->height);
		HX_STACK_LINE(107)
		if ((intersect->isEmpty())){
			HX_STACK_LINE(108)
			return false;
		}
		HX_STACK_LINE(113)
		::native::geom::Matrix matrixA = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixA,"matrixA");
		HX_STACK_LINE(114)
		matrixA->translate(-(((intersect->x - boundsA->x))),-(((intersect->y - boundsA->y))));
		HX_STACK_LINE(116)
		::native::geom::Matrix matrixB = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrixB,"matrixB");
		HX_STACK_LINE(117)
		matrixB->translate(-(((intersect->x - boundsB->x))),-(((intersect->y - boundsB->y))));
		HX_STACK_LINE(120)
		contact->drawFrame(null());
		HX_STACK_LINE(121)
		target->drawFrame(null());
		HX_STACK_LINE(124)
		::native::display::BitmapData testA = contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(125)
		::native::display::BitmapData testB = target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(126)
		::native::display::BitmapData overlapArea = ::native::display::BitmapData_obj::__new(::Math_obj::floor(intersect->width),::Math_obj::floor(intersect->height),false,null(),null());		HX_STACK_VAR(overlapArea,"overlapArea");
		HX_STACK_LINE(132)
		int overlapWidth = overlapArea->get_width();		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(133)
		int overlapHeight = overlapArea->get_height();		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(134)
		int targetX;		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(135)
		int targetY;		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(136)
		int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
		HX_STACK_LINE(137)
		int pixelAlpha;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(138)
		int transformedAlpha;		HX_STACK_VAR(transformedAlpha,"transformedAlpha");
		HX_STACK_LINE(139)
		int maxX = (testA->get_width() + (int)1);		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(140)
		int maxY = (testA->get_height() + (int)1);		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = maxX;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			while(((_g1 < _g))){
				HX_STACK_LINE(141)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(143)
				targetX = ::Math_obj::floor((i + matrixA->tx));
				HX_STACK_LINE(144)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(146)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = maxY;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(146)
					while(((_g3 < _g2))){
						HX_STACK_LINE(146)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(148)
						targetY = ::Math_obj::floor((j + matrixA->ty));
						HX_STACK_LINE(149)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(151)
							pixelColor = testA->getPixel32(i,j);
							HX_STACK_LINE(153)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(157)
							if (((pixelAlpha >= alphaTolerance))){
								HX_STACK_LINE(158)
								overlapArea->setPixel32(targetX,targetY,(int)-65536);
							}
							else{
								HX_STACK_LINE(166)
								overlapArea->setPixel32(targetX,targetY,(int)-1);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		maxX = (testB->get_width() + (int)1);
		HX_STACK_LINE(179)
		maxY = (testB->get_height() + (int)1);
		HX_STACK_LINE(180)
		int secondColor;		HX_STACK_VAR(secondColor,"secondColor");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = maxX;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			while(((_g1 < _g))){
				HX_STACK_LINE(181)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(183)
				targetX = ::Math_obj::floor((i + matrixB->tx));
				HX_STACK_LINE(184)
				if (((bool((targetX >= (int)0)) && bool((targetX < maxX))))){
					HX_STACK_LINE(186)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = maxY;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(186)
					while(((_g3 < _g2))){
						HX_STACK_LINE(186)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(188)
						targetY = ::Math_obj::floor((j + matrixB->ty));
						HX_STACK_LINE(189)
						if (((bool((targetY >= (int)0)) && bool((targetY < maxY))))){
							HX_STACK_LINE(191)
							pixelColor = testB->getPixel32(i,j);
							HX_STACK_LINE(193)
							pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));
							HX_STACK_LINE(197)
							if (((pixelAlpha >= alphaTolerance))){
								HX_STACK_LINE(199)
								secondColor = overlapArea->getPixel32(targetX,targetY);
								HX_STACK_LINE(201)
								if (((secondColor == (int)-65536))){
									HX_STACK_LINE(202)
									overlapArea->setPixel32(targetX,targetY,(int)-16711681);
								}
								else{
									HX_STACK_LINE(206)
									overlapArea->setPixel32(targetX,targetY,(int)0);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(227)
		::org::flixel::plugin::photonstorm::FlxCollision_obj::debug = overlapArea;
		HX_STACK_LINE(229)
		::native::geom::Rectangle overlap = overlapArea->getColorBoundsRect((int)-1,(int)-16711681,null());		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(233)
		overlap->offset(intersect->x,intersect->y);
		HX_STACK_LINE(235)
		if ((overlap->isEmpty())){
			HX_STACK_LINE(236)
			return false;
		}
		else{
			HX_STACK_LINE(240)
			return true;
		}
		HX_STACK_LINE(244)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int pointX,int pointY,::org::flixel::FlxSprite target,hx::Null< int >  __o_alphaTolerance){
int alphaTolerance = __o_alphaTolerance.Default(255);
	HX_STACK_PUSH("FlxCollision::pixelPerfectPointCheck","org/flixel/plugin/photonstorm/FlxCollision.hx",262);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(alphaTolerance,"alphaTolerance");
{
		HX_STACK_LINE(264)
		if (((::org::flixel::plugin::photonstorm::FlxMath_obj::pointInCoordinates(pointX,pointY,::Math_obj::floor(target->x),::Math_obj::floor(target->y),::Math_obj::floor(target->width),::Math_obj::floor(target->height)) == false))){
			HX_STACK_LINE(265)
			return false;
		}
		HX_STACK_LINE(281)
		int indexX = (target->getFrame() * target->frameWidth);		HX_STACK_VAR(indexX,"indexX");
		HX_STACK_LINE(282)
		int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
		HX_STACK_LINE(286)
		int widthHelper = target->getPixels()->get_width();		HX_STACK_VAR(widthHelper,"widthHelper");
		HX_STACK_LINE(287)
		if (((indexX >= widthHelper))){
			HX_STACK_LINE(289)
			indexY = (::Math_obj::floor((Float(indexX) / Float(widthHelper))) * target->frameHeight);
			HX_STACK_LINE(290)
			hx::ModEq(indexX,widthHelper);
		}
		HX_STACK_LINE(294)
		int pixelColor = (int)0;		HX_STACK_VAR(pixelColor,"pixelColor");
		HX_STACK_LINE(299)
		if (((bool((target->flipped != (int)0)) && bool((target->facing == (int)1))))){
			HX_STACK_LINE(300)
			pixelColor = target->getPixels()->getPixel32(::Math_obj::floor((((indexX + target->frameWidth) + target->x) - pointX)),::Math_obj::floor(((indexY + pointY) - target->y)));
		}
		else{
			HX_STACK_LINE(304)
			pixelColor = target->getPixels()->getPixel32(::Math_obj::floor(((indexX + pointX) - target->x)),::Math_obj::floor(((indexY + pointY) - target->y)));
		}
		HX_STACK_LINE(309)
		int pixelAlpha = (int((int(pixelColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(314)
		return (pixelAlpha >= alphaTolerance);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::org::flixel::FlxGroup FlxCollision_obj::createCameraWall( ::org::flixel::FlxCamera camera,int placement,int thickness,hx::Null< bool >  __o_adjustWorldBounds){
bool adjustWorldBounds = __o_adjustWorldBounds.Default(false);
	HX_STACK_PUSH("FlxCollision::createCameraWall","org/flixel/plugin/photonstorm/FlxCollision.hx",333);
	HX_STACK_ARG(camera,"camera");
	HX_STACK_ARG(placement,"placement");
	HX_STACK_ARG(thickness,"thickness");
	HX_STACK_ARG(adjustWorldBounds,"adjustWorldBounds");
{
		HX_STACK_LINE(334)
		::org::flixel::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(335)
		::org::flixel::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(336)
		::org::flixel::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(337)
		::org::flixel::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(339)
		int _switch_1 = (placement);
		if (  ( _switch_1==::org::flixel::plugin::photonstorm::FlxCollision_obj::CAMERA_WALL_OUTSIDE)){
			HX_STACK_LINE(342)
			left = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor((camera->x - thickness)),::Math_obj::floor((camera->y + thickness)),thickness,(camera->height - (thickness * (int)2)));
			HX_STACK_LINE(343)
			right = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor((camera->x + camera->width)),::Math_obj::floor((camera->y + thickness)),thickness,(camera->height - (thickness * (int)2)));
			HX_STACK_LINE(344)
			top = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor((camera->x - thickness)),::Math_obj::floor((camera->y - thickness)),(camera->width + (thickness * (int)2)),thickness);
			HX_STACK_LINE(345)
			bottom = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor((camera->x - thickness)),camera->height,(camera->width + (thickness * (int)2)),thickness);
			HX_STACK_LINE(347)
			if ((adjustWorldBounds)){
				HX_STACK_LINE(348)
				::org::flixel::FlxG_obj::worldBounds = ::org::flixel::FlxRect_obj::__new((camera->x - thickness),(camera->y - thickness),(camera->width + (thickness * (int)2)),(camera->height + (thickness * (int)2)));
			}
		}
		else if (  ( _switch_1==::org::flixel::plugin::photonstorm::FlxCollision_obj::CAMERA_WALL_INSIDE)){
			HX_STACK_LINE(353)
			left = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor(camera->x),::Math_obj::floor((camera->y + thickness)),thickness,(camera->height - (thickness * (int)2)));
			HX_STACK_LINE(354)
			right = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor(((camera->x + camera->width) - thickness)),::Math_obj::floor((camera->y + thickness)),thickness,(camera->height - (thickness * (int)2)));
			HX_STACK_LINE(355)
			top = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor(camera->x),::Math_obj::floor(camera->y),camera->width,thickness);
			HX_STACK_LINE(356)
			bottom = ::org::flixel::FlxTileblock_obj::__new(::Math_obj::floor(camera->x),(camera->height - thickness),camera->width,thickness);
			HX_STACK_LINE(358)
			if ((adjustWorldBounds)){
				HX_STACK_LINE(359)
				::org::flixel::FlxG_obj::worldBounds = ::org::flixel::FlxRect_obj::__new(camera->x,camera->y,camera->width,camera->height);
			}
		}
		HX_STACK_LINE(364)
		::org::flixel::FlxGroup result = ::org::flixel::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(366)
		result->add(left);
		HX_STACK_LINE(367)
		result->add(right);
		HX_STACK_LINE(368)
		result->add(top);
		HX_STACK_LINE(369)
		result->add(bottom);
		HX_STACK_LINE(371)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

void FlxCollision_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCollision);
	HX_MARK_END_CLASS();
}

void FlxCollision_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CAMERA_WALL_INSIDE") ) { return CAMERA_WALL_INSIDE; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CAMERA_WALL_OUTSIDE") ) { return CAMERA_WALL_OUTSIDE; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::native::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CAMERA_WALL_INSIDE") ) { CAMERA_WALL_INSIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CAMERA_WALL_OUTSIDE") ) { CAMERA_WALL_OUTSIDE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("debug"),
	HX_CSTRING("CAMERA_WALL_OUTSIDE"),
	HX_CSTRING("CAMERA_WALL_INSIDE"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::debug,"debug");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::debug,"debug");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
};

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.photonstorm.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCollision_obj::__boot()
{
	debug= ::native::display::BitmapData_obj::__new((int)1,(int)1,false,null(),null());
	CAMERA_WALL_OUTSIDE= (int)0;
	CAMERA_WALL_INSIDE= (int)1;
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace photonstorm
