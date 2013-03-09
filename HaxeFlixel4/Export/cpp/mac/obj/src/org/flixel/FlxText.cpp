#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_text_TextField
#include <neash/text/TextField.h>
#endif
#ifndef INCLUDED_neash_text_TextFormat
#include <neash/text/TextFormat.h>
#endif
#ifndef INCLUDED_neash_text_TextFormatAlign
#include <neash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxLayer
#include <org/flixel/FlxLayer.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxPoint
#include <org/flixel/FlxPoint.h>
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
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_FlxSpriteFrames
#include <org/flixel/system/layer/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_PUSH("FlxText::new","org/flixel/FlxText.hx",53);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(54)
	super::__construct(X,Y,null());
	HX_STACK_LINE(55)
	Width = (  (((Width < (int)0))) ? int(-(Width)) : int(Width) );
	HX_STACK_LINE(57)
	::String key = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(59)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(64)
	if (((Text == null()))){
		HX_STACK_LINE(65)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(68)
	this->_textField = ::neash::text::TextField_obj::__new();
	HX_STACK_LINE(69)
	this->_textField->nmeSetWidth(Width);
	HX_STACK_LINE(70)
	this->_textField->nmeSetSelectable(false);
	HX_STACK_LINE(71)
	this->_textField->nmeSetMultiline(true);
	HX_STACK_LINE(72)
	this->_textField->nmeSetWordWrap(true);
	HX_STACK_LINE(73)
	::neash::text::TextFormat format = ::neash::text::TextFormat_obj::__new(::org::flixel::FlxAssets_obj::getNokiaFont(),(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(74)
	this->_textField->nmeSetDefaultTextFormat(format);
	HX_STACK_LINE(75)
	this->_textField->nmeSetText(Text);
	HX_STACK_LINE(80)
	if (((Text.length <= (int)0))){
		HX_STACK_LINE(81)
		this->_textField->nmeSetHeight((int)1);
	}
	else{
		HX_STACK_LINE(85)
		this->_textField->nmeSetHeight((int)10);
	}
	HX_STACK_LINE(89)
	this->_regen = true;
	HX_STACK_LINE(90)
	this->_shadow = (int)0;
	HX_STACK_LINE(91)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(92)
	this->moves = false;
	HX_STACK_LINE(96)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(97)
		this->calcFrame(true);
	}
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","org/flixel/FlxText.hx",504);
		HX_STACK_THIS(this);
		HX_STACK_LINE(504)
		if (((bool((bool((this->_node != null())) && bool((this->frameWidth >= (int)1)))) && bool((this->frameHeight >= (int)1))))){
			HX_STACK_LINE(508)
			this->updateLayerProps();
			HX_STACK_LINE(509)
			this->_framesData = this->_node->addSpriteFramesData(::Math_obj::floor(this->width),::Math_obj::floor(this->height),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(510)
			this->_frameID = this->_framesData->frameIDs->__get((int)0);
		}
	}
return null();
}


Void FlxText_obj::updateLayerInfo( hx::Null< bool >  __o_updateAtlas){
bool updateAtlas = __o_updateAtlas.Default(false);
	HX_STACK_PUSH("FlxText::updateLayerInfo","org/flixel/FlxText.hx",488);
	HX_STACK_THIS(this);
	HX_STACK_ARG(updateAtlas,"updateAtlas");
{
		HX_STACK_LINE(490)
		this->_layer = ::org::flixel::FlxG_obj::getState()->getLayerFor(this->_bitmapDataKey);
		HX_STACK_LINE(491)
		if (((this->_pixels != ::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey)))){
			HX_STACK_LINE(493)
			::org::flixel::FlxG_obj::_cache->get(this->_bitmapDataKey)->__Field(HX_CSTRING("dispose"),true)();
			HX_STACK_LINE(494)
			::org::flixel::FlxG_obj::_cache->set(this->_bitmapDataKey,this->_pixels);
			HX_STACK_LINE(495)
			this->_layer->get_atlas()->clearAndFillWith(this->_pixels);
			HX_STACK_LINE(496)
			this->_layer->set_atlas(this->_layer->get_atlas());
		}
		HX_STACK_LINE(498)
		this->_node = this->_layer->get_atlas()->getNodeByKey(this->_bitmapDataKey);
		HX_STACK_LINE(499)
		this->updateFrameData();
	}
return null();
}


::org::flixel::FlxLayer FlxText_obj::set_layer( ::org::flixel::FlxLayer value){
	HX_STACK_PUSH("FlxText::set_layer","org/flixel/FlxText.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(482)
	return value;
}


::String FlxText_obj::convertTextAlignmentFromString( ::String strAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","org/flixel/FlxText.hx",472);
	HX_STACK_THIS(this);
	HX_STACK_ARG(strAlign,"strAlign");
	HX_STACK_LINE(472)
	return strAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::neash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","org/flixel/FlxText.hx",442);
	HX_STACK_THIS(this);
	HX_STACK_LINE(443)
	::neash::text::TextFormat defaultTextFormat = this->_textField->nmeGetDefaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(444)
	return ::neash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_AreYouSure){
bool AreYouSure = __o_AreYouSure.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","org/flixel/FlxText.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AreYouSure,"AreYouSure");
{
		HX_STACK_LINE(352)
		if ((AreYouSure)){
			HX_STACK_LINE(356)
			this->_regen = true;
			HX_STACK_LINE(358)
			if ((this->_regen)){
				HX_STACK_LINE(361)
				this->height = this->_textField->nmeGetTextHeight();
				HX_STACK_LINE(362)
				hx::AddEq(this->height,(int)4);
				HX_STACK_LINE(364)
				this->_pixels = ::neash::display::BitmapData_obj::__new(::Std_obj::_int(this->width),::Std_obj::_int(this->height),true,(int)0,null());
				HX_STACK_LINE(368)
				this->frameHeight = ::Std_obj::_int(this->height);
				HX_STACK_LINE(369)
				this->_textField->nmeSetHeight((this->height * 1.2));
				HX_STACK_LINE(370)
				this->_flashRect->x = (int)0;
				HX_STACK_LINE(371)
				this->_flashRect->y = (int)0;
				HX_STACK_LINE(372)
				this->_flashRect->width = this->width;
				HX_STACK_LINE(373)
				this->_flashRect->height = this->height;
				HX_STACK_LINE(374)
				this->_regen = false;
			}
			else{
				HX_STACK_LINE(377)
				this->_pixels->fillRect(this->_flashRect,(int)0);
			}
			HX_STACK_LINE(385)
			if (((bool((bool((this->_textField != null())) && bool((this->_textField->nmeGetText() != null())))) && bool((this->_textField->nmeGetText().length > (int)0))))){
				HX_STACK_LINE(388)
				::neash::text::TextFormat format = this->_textField->nmeGetDefaultTextFormat();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(389)
				::neash::text::TextFormat formatAdjusted = format;		HX_STACK_VAR(formatAdjusted,"formatAdjusted");
				HX_STACK_LINE(390)
				this->_matrix->identity();
				HX_STACK_LINE(395)
				if (((bool((format->align == ::neash::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->nmeGetNumLines() == (int)1))))){
					HX_STACK_LINE(398)
					formatAdjusted = ::neash::text::TextFormat_obj::__new(format->font,format->size,format->color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(399)
					formatAdjusted->align = ::neash::text::TextFormatAlign_obj::LEFT;
					HX_STACK_LINE(400)
					this->_textField->setTextFormat(formatAdjusted,null(),null());
					HX_STACK_LINE(404)
					this->_matrix->translate(::Math_obj::floor((Float(((this->width - this->_textField->nmeGetTextWidth()))) / Float((int)2))),(int)0);
				}
				HX_STACK_LINE(408)
				if (((this->_shadow > (int)0))){
					HX_STACK_LINE(410)
					this->_textField->setTextFormat(::neash::text::TextFormat_obj::__new(formatAdjusted->font,formatAdjusted->size,this->_shadow,null(),null(),null(),null(),null(),formatAdjusted->align,null(),null(),null(),null()),null(),null());
					HX_STACK_LINE(411)
					this->_matrix->translate((int)1,(int)1);
					HX_STACK_LINE(412)
					this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
					HX_STACK_LINE(413)
					this->_matrix->translate((int)-1,(int)-1);
					HX_STACK_LINE(414)
					this->_textField->setTextFormat(::neash::text::TextFormat_obj::__new(formatAdjusted->font,formatAdjusted->size,formatAdjusted->color,null(),null(),null(),null(),null(),formatAdjusted->align,null(),null(),null(),null()),null(),null());
				}
				HX_STACK_LINE(417)
				this->_pixels->draw(this->_textField,this->_matrix,this->_colorTransform,null(),null(),null());
				HX_STACK_LINE(418)
				this->_textField->setTextFormat(::neash::text::TextFormat_obj::__new(format->font,format->size,format->color,null(),null(),null(),null(),null(),format->align,null(),null(),null(),null()),null(),null());
			}
			HX_STACK_LINE(421)
			this->updateLayerInfo(null());
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				::org::flixel::FlxPoint _this = this->origin;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(432)
				_this->x = (this->frameWidth * 0.5);
				HX_STACK_LINE(432)
				_this->y = (this->frameHeight * 0.5);
				HX_STACK_LINE(432)
				_this;
			}
		}
	}
return null();
}


int FlxText_obj::setShadow( int Color){
	HX_STACK_PUSH("FlxText::setShadow","org/flixel/FlxText.hx",334);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(335)
	this->_shadow = Color;
	HX_STACK_LINE(339)
	this->calcFrame(true);
	HX_STACK_LINE(341)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setShadow,return )

int FlxText_obj::getShadow( ){
	HX_STACK_PUSH("FlxText::getShadow","org/flixel/FlxText.hx",322);
	HX_STACK_THIS(this);
	HX_STACK_LINE(322)
	return this->_shadow;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getShadow,return )

::String FlxText_obj::setAlignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::setAlignment","org/flixel/FlxText.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(302)
	::neash::text::TextFormat format = this->dtfCopy();		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(303)
	format->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(304)
	this->_textField->nmeSetDefaultTextFormat(format);
	HX_STACK_LINE(305)
	this->_textField->setTextFormat(format,null(),null());
	HX_STACK_LINE(309)
	this->calcFrame(true);
	HX_STACK_LINE(311)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setAlignment,return )

::String FlxText_obj::getAlignment( ){
	HX_STACK_PUSH("FlxText::getAlignment","org/flixel/FlxText.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(293)
	return hx::TCast< String >::cast(this->_textField->nmeGetDefaultTextFormat()->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getAlignment,return )

::String FlxText_obj::setFont( ::String Font){
	HX_STACK_PUSH("FlxText::setFont","org/flixel/FlxText.hx",273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(274)
	::neash::text::TextFormat format = this->dtfCopy();		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(275)
	format->font = Font;
	HX_STACK_LINE(276)
	this->_textField->nmeSetDefaultTextFormat(format);
	HX_STACK_LINE(277)
	this->_textField->setTextFormat(format,null(),null());
	HX_STACK_LINE(278)
	this->_regen = true;
	HX_STACK_LINE(282)
	this->calcFrame(true);
	HX_STACK_LINE(284)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setFont,return )

::String FlxText_obj::getFont( ){
	HX_STACK_PUSH("FlxText::getFont","org/flixel/FlxText.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	return this->_textField->nmeGetDefaultTextFormat()->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getFont,return )

int FlxText_obj::setColor( int Color){
	HX_STACK_PUSH("FlxText::setColor","org/flixel/FlxText.hx",241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(242)
	::neash::text::TextFormat format = this->dtfCopy();		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(246)
	format->color = Color;
	HX_STACK_LINE(248)
	this->_textField->nmeSetDefaultTextFormat(format);
	HX_STACK_LINE(249)
	this->_textField->setTextFormat(format,null(),null());
	HX_STACK_LINE(250)
	this->_regen = true;
	HX_STACK_LINE(254)
	this->calcFrame(true);
	HX_STACK_LINE(256)
	return Color;
}


int FlxText_obj::getColor( ){
	HX_STACK_PUSH("FlxText::getColor","org/flixel/FlxText.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return this->_textField->nmeGetDefaultTextFormat()->color;
}


Float FlxText_obj::setSize( Float Size){
	HX_STACK_PUSH("FlxText::setSize","org/flixel/FlxText.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(201)
	::neash::text::TextFormat format = this->dtfCopy();		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(202)
	format->size = Size;
	HX_STACK_LINE(203)
	this->_textField->nmeSetDefaultTextFormat(format);
	HX_STACK_LINE(204)
	this->_textField->setTextFormat(format,null(),null());
	HX_STACK_LINE(205)
	this->_regen = true;
	HX_STACK_LINE(209)
	this->calcFrame(true);
	HX_STACK_LINE(211)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setSize,return )

Float FlxText_obj::getSize( ){
	HX_STACK_PUSH("FlxText::getSize","org/flixel/FlxText.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	return this->_textField->nmeGetDefaultTextFormat()->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getSize,return )

::String FlxText_obj::setText( ::String Text){
	HX_STACK_PUSH("FlxText::setText","org/flixel/FlxText.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(172)
	::String ot = this->_textField->nmeGetText();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(173)
	this->_textField->nmeSetText(Text);
	HX_STACK_LINE(174)
	if (((this->_textField->nmeGetText() != ot))){
		HX_STACK_LINE(176)
		this->_regen = true;
		HX_STACK_LINE(180)
		this->calcFrame(true);
	}
	HX_STACK_LINE(183)
	return this->_textField->nmeGetText();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,setText,return )

::String FlxText_obj::getText( ){
	HX_STACK_PUSH("FlxText::getText","org/flixel/FlxText.hx",163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(163)
	return this->_textField->nmeGetText();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,getText,return )

::org::flixel::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_ShadowColor){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int ShadowColor = __o_ShadowColor.Default(0);
	HX_STACK_PUSH("FlxText::setFormat","org/flixel/FlxText.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(ShadowColor,"ShadowColor");
{
		HX_STACK_LINE(132)
		if (((Font == null()))){
			HX_STACK_LINE(133)
			Font = ::org::flixel::FlxAssets_obj::getNokiaFont();
		}
		HX_STACK_LINE(140)
		::neash::text::TextFormat format = this->dtfCopy();		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(141)
		format->font = Font;
		HX_STACK_LINE(142)
		format->size = Size;
		HX_STACK_LINE(143)
		format->color = Color;
		HX_STACK_LINE(144)
		format->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(145)
		this->_textField->nmeSetDefaultTextFormat(format);
		HX_STACK_LINE(146)
		this->_textField->setTextFormat(format,null(),null());
		HX_STACK_LINE(147)
		this->_shadow = ShadowColor;
		HX_STACK_LINE(148)
		this->_regen = true;
		HX_STACK_LINE(152)
		this->calcFrame(true);
		HX_STACK_LINE(154)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxText_obj,setFormat,return )

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","org/flixel/FlxText.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		if (((this->_pixels != null()))){
			HX_STACK_LINE(109)
			this->_pixels->dispose();
		}
		HX_STACK_LINE(112)
		this->_textField = null();
		HX_STACK_LINE(113)
		this->super::destroy();
	}
return null();
}



FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(shadow,"shadow");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(shadow,"shadow");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return inCallProp ? getFont() : font; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? getSize() : size; }
		if (HX_FIELD_EQ(inName,"text") ) { return inCallProp ? getText() : text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		if (HX_FIELD_EQ(inName,"shadow") ) { return inCallProp ? getShadow() : shadow; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setShadow") ) { return setShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"getShadow") ) { return getShadow_dyn(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return inCallProp ? getAlignment() : alignment; }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setAlignment") ) { return setAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlignment") ) { return getAlignment_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLayerInfo") ) { return updateLayerInfo_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp) return setFont(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp) return setSize(inValue);size=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp) return setText(inValue);text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shadow") ) { if (inCallProp) return setShadow(inValue);shadow=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp) return setAlignment(inValue);alignment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::neash::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("_shadow"));
	outFields->push(HX_CSTRING("_regen"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("shadow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateLayerInfo"),
	HX_CSTRING("set_layer"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("setShadow"),
	HX_CSTRING("getShadow"),
	HX_CSTRING("setAlignment"),
	HX_CSTRING("getAlignment"),
	HX_CSTRING("alignment"),
	HX_CSTRING("setFont"),
	HX_CSTRING("getFont"),
	HX_CSTRING("font"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setSize"),
	HX_CSTRING("getSize"),
	HX_CSTRING("size"),
	HX_CSTRING("setText"),
	HX_CSTRING("getText"),
	HX_CSTRING("text"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_shadow"),
	HX_CSTRING("_regen"),
	HX_CSTRING("_textField"),
	HX_CSTRING("shadow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
