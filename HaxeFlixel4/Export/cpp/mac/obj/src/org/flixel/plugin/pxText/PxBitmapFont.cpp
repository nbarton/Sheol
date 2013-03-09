#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_HelperSymbol
#include <org/flixel/plugin/pxText/HelperSymbol.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxBitmapFont
#include <org/flixel/plugin/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_pxText_PxFontSymbol
#include <org/flixel/plugin/pxText/PxFontSymbol.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
namespace org{
namespace flixel{
namespace plugin{
namespace pxText{

Void PxBitmapFont_obj::__construct()
{
HX_STACK_PUSH("PxBitmapFont::new","org/flixel/plugin/pxText/PxBitmapFont.hx",60);
{
	HX_STACK_LINE(61)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(62)
	this->_point = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(68)
	this->_bgTileID = (int)-1;
	HX_STACK_LINE(69)
	this->_glyphs = ::IntHash_obj::__new();
	HX_STACK_LINE(70)
	this->_num_letters = (int)0;
	HX_STACK_LINE(72)
	this->_atlasGlyphs = ::Hash_obj::__new();
	HX_STACK_LINE(73)
	this->_bgTiles = ::Hash_obj::__new();
}
;
	return null();
}

PxBitmapFont_obj::~PxBitmapFont_obj() { }

Dynamic PxBitmapFont_obj::__CreateEmpty() { return  new PxBitmapFont_obj; }
hx::ObjectPtr< PxBitmapFont_obj > PxBitmapFont_obj::__new()
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

Dynamic PxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

int PxBitmapFont_obj::get_numLetters( ){
	HX_STACK_PUSH("PxBitmapFont::get_numLetters","org/flixel/plugin/pxText/PxBitmapFont.hx",741);
	HX_STACK_THIS(this);
	HX_STACK_LINE(741)
	return this->_num_letters;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_numLetters,return )

::String PxBitmapFont_obj::get_bitmapDataKey( ){
	HX_STACK_PUSH("PxBitmapFont::get_bitmapDataKey","org/flixel/plugin/pxText/PxBitmapFont.hx",735);
	HX_STACK_THIS(this);
	HX_STACK_LINE(735)
	return this->_bitmapDataKey;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_bitmapDataKey,return )

::neash::display::BitmapData PxBitmapFont_obj::get_pixels( ){
	HX_STACK_PUSH("PxBitmapFont::get_pixels","org/flixel/plugin/pxText/PxBitmapFont.hx",728);
	HX_STACK_THIS(this);
	HX_STACK_LINE(728)
	return this->_pixels;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_pixels,return )

int PxBitmapFont_obj::bgTileID( ::String AtlasName){
	HX_STACK_PUSH("PxBitmapFont::bgTileID","org/flixel/plugin/pxText/PxBitmapFont.hx",721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AtlasName,"AtlasName");
	HX_STACK_LINE(721)
	return this->_bgTiles->get(AtlasName);
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,bgTileID,return )

int PxBitmapFont_obj::getFontHeight( ){
	HX_STACK_PUSH("PxBitmapFont::getFontHeight","org/flixel/plugin/pxText/PxBitmapFont.hx",709);
	HX_STACK_THIS(this);
	HX_STACK_LINE(709)
	return this->_maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,getFontHeight,return )

int PxBitmapFont_obj::getTextWidth( ::String pText,hx::Null< int >  __o_pLetterSpacing,hx::Null< Float >  __o_pFontScale){
int pLetterSpacing = __o_pLetterSpacing.Default(0);
Float pFontScale = __o_pFontScale.Default(1.0);
	HX_STACK_PUSH("PxBitmapFont::getTextWidth","org/flixel/plugin/pxText/PxBitmapFont.hx",671);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pFontScale,"pFontScale");
{
		HX_STACK_LINE(672)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(674)
		int textLength = pText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(675)
			while(((_g1 < _g))){
				HX_STACK_LINE(675)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(677)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(686)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(687)
					hx::AddEq(w,this->_glyphs->get(charCode)->__Field(HX_CSTRING("xadvance"),true));
				}
			}
		}
		HX_STACK_LINE(694)
		w = ::Math_obj::round((w * pFontScale));
		HX_STACK_LINE(696)
		if (((textLength > (int)1))){
			HX_STACK_LINE(697)
			hx::AddEq(w,(((textLength - (int)1)) * pLetterSpacing));
		}
		HX_STACK_LINE(701)
		return w;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,getTextWidth,return )

Void PxBitmapFont_obj::render( ::String atlasName,Array< Float > drawData,::String pText,int pColor,int pSecondColor,Float pAlpha,int pOffsetX,int pOffsetY,int pLetterSpacing,Float pScale,hx::Null< bool >  __o_pUseColor){
bool pUseColor = __o_pUseColor.Default(true);
	HX_STACK_PUSH("PxBitmapFont::render","org/flixel/plugin/pxText/PxBitmapFont.hx",591);
	HX_STACK_THIS(this);
	HX_STACK_ARG(atlasName,"atlasName");
	HX_STACK_ARG(drawData,"drawData");
	HX_STACK_ARG(pText,"pText");
	HX_STACK_ARG(pColor,"pColor");
	HX_STACK_ARG(pSecondColor,"pSecondColor");
	HX_STACK_ARG(pAlpha,"pAlpha");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pLetterSpacing,"pLetterSpacing");
	HX_STACK_ARG(pScale,"pScale");
	HX_STACK_ARG(pUseColor,"pUseColor");
{
		HX_STACK_LINE(594)
		Float colorMultiplier = 0.00392;		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
		HX_STACK_LINE(595)
		Float red = colorMultiplier;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(596)
		Float green = colorMultiplier;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(597)
		Float blue = colorMultiplier;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(599)
		if ((pUseColor)){
			HX_STACK_LINE(601)
			red = (((int(pColor) >> int((int)16))) * colorMultiplier);
			HX_STACK_LINE(602)
			green = (((int((int(pColor) >> int((int)8))) & int((int)255))) * colorMultiplier);
			HX_STACK_LINE(603)
			blue = (((int(pColor) & int((int)255))) * colorMultiplier);
		}
		HX_STACK_LINE(607)
		hx::AndEq(pSecondColor,(int)16777215);
		HX_STACK_LINE(608)
		hx::MultEq(red,(int(pSecondColor) >> int((int)16)));
		HX_STACK_LINE(609)
		hx::MultEq(green,(int((int(pSecondColor) >> int((int)8))) & int((int)255)));
		HX_STACK_LINE(610)
		hx::MultEq(blue,(int(pSecondColor) & int((int)255)));
		HX_STACK_LINE(619)
		this->_point->x = pOffsetX;
		HX_STACK_LINE(620)
		this->_point->y = pOffsetY;
		HX_STACK_LINE(624)
		::org::flixel::plugin::pxText::PxFontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(625)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(626)
		this->_glyphs = this->_atlasGlyphs->get(atlasName);
		HX_STACK_LINE(627)
		if (((this->_glyphs == null()))){
			HX_STACK_LINE(628)
			return null();
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = pText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			while(((_g1 < _g))){
				HX_STACK_LINE(633)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(635)
				int charCode = pText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(640)
				glyph = this->_glyphs->get(charCode);
				HX_STACK_LINE(641)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(648)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(650)
					drawData->push(glyph->tileID);
					HX_STACK_LINE(651)
					drawData->push((this->_point->x + (glyph->xoffset * pScale)));
					HX_STACK_LINE(652)
					drawData->push((this->_point->y + (glyph->yoffset * pScale)));
					HX_STACK_LINE(653)
					drawData->push(red);
					HX_STACK_LINE(654)
					drawData->push(green);
					HX_STACK_LINE(655)
					drawData->push(blue);
					HX_STACK_LINE(657)
					hx::AddEq(this->_point->x,((glyphWidth * pScale) + pLetterSpacing));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(PxBitmapFont_obj,render,(void))

Void PxBitmapFont_obj::setGlyph( ::org::flixel::system::layer::Node node,int pCharID,::neash::geom::Rectangle pRect,hx::Null< int >  __o_pOffsetX,hx::Null< int >  __o_pOffsetY,hx::Null< int >  __o_pAdvanceX){
int pOffsetX = __o_pOffsetX.Default(0);
int pOffsetY = __o_pOffsetY.Default(0);
int pAdvanceX = __o_pAdvanceX.Default(0);
	HX_STACK_PUSH("PxBitmapFont::setGlyph","org/flixel/plugin/pxText/PxBitmapFont.hx",557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(pCharID,"pCharID");
	HX_STACK_ARG(pRect,"pRect");
	HX_STACK_ARG(pOffsetX,"pOffsetX");
	HX_STACK_ARG(pOffsetY,"pOffsetY");
	HX_STACK_ARG(pAdvanceX,"pAdvanceX");
{
		HX_STACK_LINE(558)
		int tileID = node->addTileRect(pRect,::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(560)
		::org::flixel::plugin::pxText::PxFontSymbol symbol = ::org::flixel::plugin::pxText::PxFontSymbol_obj::__new();		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(561)
		symbol->tileID = tileID;
		HX_STACK_LINE(562)
		symbol->xoffset = pOffsetX;
		HX_STACK_LINE(563)
		symbol->yoffset = pOffsetY;
		HX_STACK_LINE(564)
		symbol->xadvance = pAdvanceX;
		HX_STACK_LINE(566)
		this->_glyphs->set(pCharID,symbol);
		HX_STACK_LINE(567)
		(this->_num_letters)++;
		HX_STACK_LINE(569)
		if ((((::Math_obj::floor(pRect->height) + pOffsetY) > this->_maxHeight))){
			HX_STACK_LINE(570)
			this->_maxHeight = (::Math_obj::floor(pRect->height) + pOffsetY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PxBitmapFont_obj,setGlyph,(void))

Void PxBitmapFont_obj::dispose( hx::Null< bool >  __o_total){
bool total = __o_total.Default(true);
	HX_STACK_PUSH("PxBitmapFont::dispose","org/flixel/plugin/pxText/PxBitmapFont.hx",485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(total,"total");
{
		HX_STACK_LINE(498)
		this->_symbols = null();
		HX_STACK_LINE(499)
		this->_tileRects = null();
		HX_STACK_LINE(500)
		this->_pixels = null();
		HX_STACK_LINE(501)
		this->_bitmapDataKey = null();
		HX_STACK_LINE(502)
		this->_glyphs = null();
		HX_STACK_LINE(505)
		if ((total)){
			HX_STACK_LINE(507)
			this->_atlasGlyphs = null();
			HX_STACK_LINE(508)
			this->_bgTiles = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,dispose,(void))

::neash::display::BitmapData PxBitmapFont_obj::prepareAngelCodeBitmapData( ::neash::display::BitmapData pBitmapData,::Xml pXMLData,Array< ::org::flixel::plugin::pxText::HelperSymbol > pSymbols){
	HX_STACK_PUSH("PxBitmapFont::prepareAngelCodeBitmapData","org/flixel/plugin/pxText/PxBitmapFont.hx",367);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_ARG(pSymbols,"pSymbols");
	HX_STACK_LINE(368)
	::Xml chars = null();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(369)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(pXMLData->elements());  __it->hasNext(); ){
		::Xml node = __it->next();
		if (((node->getNodeName() == HX_CSTRING("font")))){
			HX_STACK_LINE(372)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
				::Xml nodeChild = __it->next();
				if (((nodeChild->getNodeName() == HX_CSTRING("chars")))){
					HX_STACK_LINE(377)
					chars = nodeChild;
					HX_STACK_LINE(378)
					break;
				}
;
			}
		}
;
	}
	HX_STACK_LINE(384)
	::org::flixel::plugin::pxText::HelperSymbol symbol;		HX_STACK_VAR(symbol,"symbol");
	HX_STACK_LINE(385)
	int maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(386)
	int maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(388)
	if (((chars != null()))){
		HX_STACK_LINE(389)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(chars->elements());  __it->hasNext(); ){
			::Xml node = __it->next();
			if (((node->getNodeName() == HX_CSTRING("char")))){
				HX_STACK_LINE(394)
				symbol = ::org::flixel::plugin::pxText::HelperSymbol_obj::__new();
				HX_STACK_LINE(395)
				symbol->x = ::Std_obj::parseInt(node->get(HX_CSTRING("x")));
				HX_STACK_LINE(396)
				symbol->y = ::Std_obj::parseInt(node->get(HX_CSTRING("y")));
				HX_STACK_LINE(397)
				symbol->width = ::Std_obj::parseInt(node->get(HX_CSTRING("width")));
				HX_STACK_LINE(398)
				symbol->height = ::Std_obj::parseInt(node->get(HX_CSTRING("height")));
				HX_STACK_LINE(399)
				symbol->xoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("xoffset")));
				HX_STACK_LINE(400)
				symbol->yoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("yoffset")));
				HX_STACK_LINE(401)
				symbol->xadvance = ::Std_obj::parseInt(node->get(HX_CSTRING("xadvance")));
				HX_STACK_LINE(402)
				symbol->charCode = ::Std_obj::parseInt(node->get(HX_CSTRING("id")));
				HX_STACK_LINE(404)
				pSymbols->push(symbol);
				HX_STACK_LINE(406)
				maxX = (symbol->x + symbol->width);
				HX_STACK_LINE(407)
				maxY = (symbol->y + symbol->height);
			}
;
		}
	}
	HX_STACK_LINE(412)
	int newWidth = pBitmapData->nmeGetWidth();		HX_STACK_VAR(newWidth,"newWidth");
	HX_STACK_LINE(413)
	int newHeight = pBitmapData->nmeGetHeight();		HX_STACK_VAR(newHeight,"newHeight");
	HX_STACK_LINE(415)
	if ((((pBitmapData->nmeGetWidth() - (int)2) < maxX))){
		HX_STACK_LINE(416)
		hx::AddEq(newWidth,(int)2);
	}
	else{
		HX_STACK_LINE(419)
		if ((((pBitmapData->nmeGetHeight() - (int)2) < maxY))){
			HX_STACK_LINE(420)
			hx::AddEq(newHeight,(int)2);
		}
	}
	HX_STACK_LINE(427)
	::neash::display::BitmapData resultBitmapData = ::neash::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0,null());		HX_STACK_VAR(resultBitmapData,"resultBitmapData");
	HX_STACK_LINE(430)
	resultBitmapData->copyPixels(pBitmapData,pBitmapData->nmeGetRect(),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT,null(),null(),null());
	HX_STACK_LINE(435)
	resultBitmapData->setPixel32((resultBitmapData->nmeGetWidth() - (int)1),(resultBitmapData->nmeGetHeight() - (int)1),(int)-1);
	HX_STACK_LINE(438)
	return resultBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,prepareAngelCodeBitmapData,return )

::neash::display::BitmapData PxBitmapFont_obj::preparePixelizerBitmapData( ::neash::display::BitmapData pBitmapData,Array< ::neash::geom::Rectangle > pRects){
	HX_STACK_PUSH("PxBitmapFont::preparePixelizerBitmapData","org/flixel/plugin/pxText/PxBitmapFont.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pRects,"pRects");
	HX_STACK_LINE(266)
	int bgColor = pBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(267)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(268)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(270)
	while(((cy < pBitmapData->nmeGetHeight()))){
		HX_STACK_LINE(272)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(273)
		cx = (int)0;
		HX_STACK_LINE(275)
		while(((cx < pBitmapData->nmeGetWidth()))){
			HX_STACK_LINE(277)
			if (((::Std_obj::_int(pBitmapData->getPixel(cx,cy)) != bgColor))){
				HX_STACK_LINE(280)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(281)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(283)
				while(((::Std_obj::_int(pBitmapData->getPixel(gx,cy)) != bgColor))){
					HX_STACK_LINE(284)
					(gx)++;
				}
				HX_STACK_LINE(287)
				while(((::Std_obj::_int(pBitmapData->getPixel(cx,gy)) != bgColor))){
					HX_STACK_LINE(288)
					(gy)++;
				}
				HX_STACK_LINE(291)
				int gw = (gx - cx);		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(292)
				int gh = (gy - cy);		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(294)
				pRects->push(::neash::geom::Rectangle_obj::__new(cx,cy,gw,gh));
				HX_STACK_LINE(297)
				if (((gh > rowHeight))){
					HX_STACK_LINE(298)
					rowHeight = gh;
				}
				HX_STACK_LINE(301)
				if (((gh > this->_maxHeight))){
					HX_STACK_LINE(302)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(307)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(310)
			(cx)++;
		}
		HX_STACK_LINE(313)
		hx::AddEq(cy,(rowHeight + (int)1));
	}
	HX_STACK_LINE(319)
	::neash::display::BitmapData resultBitmapData = ::neash::display::BitmapData_obj::__new((pBitmapData->nmeGetWidth() + (int)2),pBitmapData->nmeGetHeight(),true,(int)0,null());		HX_STACK_VAR(resultBitmapData,"resultBitmapData");
	HX_STACK_LINE(321)
	resultBitmapData->copyPixels(pBitmapData,pBitmapData->nmeGetRect(),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT,null(),null(),null());
	HX_STACK_LINE(330)
	int pixelColor;		HX_STACK_VAR(pixelColor,"pixelColor");
	HX_STACK_LINE(331)
	int bgColor32 = pBitmapData->getPixel32((int)0,(int)0);		HX_STACK_VAR(bgColor32,"bgColor32");
	HX_STACK_LINE(334)
	cy = (int)0;
	HX_STACK_LINE(335)
	while(((cy < pBitmapData->nmeGetHeight()))){
		HX_STACK_LINE(337)
		cx = (int)0;
		HX_STACK_LINE(338)
		while(((cx < pBitmapData->nmeGetWidth()))){
			HX_STACK_LINE(340)
			pixelColor = pBitmapData->getPixel32(cx,cy);
			HX_STACK_LINE(347)
			if (((pixelColor == bgColor32))){
				HX_STACK_LINE(348)
				resultBitmapData->setPixel32(cx,cy,(int)0);
			}
			HX_STACK_LINE(352)
			(cx)++;
		}
		HX_STACK_LINE(354)
		(cy)++;
	}
	HX_STACK_LINE(358)
	resultBitmapData->setPixel32((resultBitmapData->nmeGetWidth() - (int)1),(resultBitmapData->nmeGetHeight() - (int)1),(int)-1);
	HX_STACK_LINE(363)
	return resultBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,preparePixelizerBitmapData,return )

Void PxBitmapFont_obj::reset( ){
{
		HX_STACK_PUSH("PxBitmapFont::reset","org/flixel/plugin/pxText/PxBitmapFont.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		this->dispose(false);
		HX_STACK_LINE(252)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(256)
		this->_glyphs = ::IntHash_obj::__new();
		HX_STACK_LINE(257)
		this->_bgTileID = (int)-1;
		HX_STACK_LINE(259)
		this->_symbols = null();
		HX_STACK_LINE(260)
		this->_tileRects = null();
		HX_STACK_LINE(261)
		this->_glyphString = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,reset,(void))

Void PxBitmapFont_obj::updateAtlasGlyphs( ::String AtlasName){
{
		HX_STACK_PUSH("PxBitmapFont::updateAtlasGlyphs","org/flixel/plugin/pxText/PxBitmapFont.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_ARG(AtlasName,"AtlasName");
		HX_STACK_LINE(241)
		this->_atlasGlyphs->set(AtlasName,this->_glyphs);
		HX_STACK_LINE(242)
		this->_bgTiles->set(AtlasName,this->_bgTileID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateAtlasGlyphs,(void))

Void PxBitmapFont_obj::updateGlyphData( ::org::flixel::system::layer::Node node){
{
		HX_STACK_PUSH("PxBitmapFont::updateGlyphData","org/flixel/plugin/pxText/PxBitmapFont.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(143)
		this->_glyphs = ::IntHash_obj::__new();
		HX_STACK_LINE(145)
		::neash::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(147)
		if (((this->_symbols != null()))){
			HX_STACK_LINE(149)
			this->_glyphString = HX_CSTRING("");
			HX_STACK_LINE(150)
			::neash::geom::Point point = ::neash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(151)
			::neash::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(152)
			::String charString;		HX_STACK_VAR(charString,"charString");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::org::flixel::plugin::pxText::HelperSymbol > _g1 = this->_symbols;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(154)
				while(((_g < _g1->length))){
					HX_STACK_LINE(154)
					::org::flixel::plugin::pxText::HelperSymbol symbol = _g1->__get(_g);		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(154)
					++(_g);
					HX_STACK_LINE(156)
					rect = ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
					HX_STACK_LINE(157)
					rect->x = symbol->x;
					HX_STACK_LINE(158)
					rect->y = symbol->y;
					HX_STACK_LINE(159)
					rect->width = symbol->width;
					HX_STACK_LINE(160)
					rect->height = symbol->height;
					HX_STACK_LINE(162)
					point->x = symbol->xoffset;
					HX_STACK_LINE(163)
					point->y = symbol->yoffset;
					HX_STACK_LINE(165)
					charString = ::String::fromCharCode(symbol->charCode);
					HX_STACK_LINE(166)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(168)
					int xadvance = symbol->xadvance;		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(169)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(171)
					if (((rect->width > xadvance))){
						HX_STACK_LINE(173)
						charWidth = symbol->width;
						HX_STACK_LINE(174)
						point->x = (int)0;
					}
					HX_STACK_LINE(192)
					if (((bool((charString != HX_CSTRING(" "))) && bool((charString != HX_CSTRING("")))))){
						HX_STACK_LINE(193)
						this->setGlyph(node,symbol->charCode,rect,::Math_obj::floor(point->x),::Math_obj::floor(point->y),charWidth);
					}
					else{
						HX_STACK_LINE(197)
						this->setGlyph(node,symbol->charCode,rect,::Math_obj::floor(point->x),(int)1,charWidth);
					}
				}
			}
			HX_STACK_LINE(204)
			this->_bgTileID = node->addTileRect(::neash::geom::Rectangle_obj::__new((this->_pixels->nmeGetWidth() - (int)1),(this->_pixels->nmeGetHeight() - (int)1),(int)1,(int)1),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);
			HX_STACK_LINE(206)
			this->updateAtlasGlyphs(node->atlas->name);
		}
		else{
			HX_STACK_LINE(209)
			if (((this->_tileRects != null()))){
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_tileRects->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(211)
					while(((_g1 < _g))){
						HX_STACK_LINE(211)
						int letterID = (_g1)++;		HX_STACK_VAR(letterID,"letterID");
						HX_STACK_LINE(213)
						rect = this->_tileRects->__get(letterID);
						HX_STACK_LINE(223)
						this->setGlyph(node,this->_glyphString.charCodeAt(letterID),rect,(int)0,(int)0,::Math_obj::floor(rect->width));
					}
				}
				HX_STACK_LINE(228)
				this->_bgTileID = node->addTileRect(::neash::geom::Rectangle_obj::__new((this->_pixels->nmeGetWidth() - (int)1),(this->_pixels->nmeGetHeight() - (int)1),(int)1,(int)1),::org::flixel::plugin::pxText::PxBitmapFont_obj::ZERO_POINT);
				HX_STACK_LINE(230)
				this->updateAtlasGlyphs(node->atlas->name);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateGlyphData,(void))

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::loadAngelCode( ::neash::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_PUSH("PxBitmapFont::loadAngelCode","org/flixel/plugin/pxText/PxBitmapFont.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_LINE(121)
	this->reset();
	HX_STACK_LINE(123)
	if (((bool((pBitmapData != null())) && bool((pXMLData != null()))))){
		HX_STACK_LINE(125)
		this->_symbols = Array_obj< ::org::flixel::plugin::pxText::HelperSymbol >::__new();
		HX_STACK_LINE(126)
		::neash::display::BitmapData result = this->prepareAngelCodeBitmapData(pBitmapData,pXMLData,this->_symbols);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(127)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("font"));
		HX_STACK_LINE(128)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(result,false,false,this->_bitmapDataKey,null(),null());
	}
	HX_STACK_LINE(134)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadAngelCode,return )

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::loadPixelizer( ::neash::display::BitmapData pBitmapData,::String pLetters){
	HX_STACK_PUSH("PxBitmapFont::loadPixelizer","org/flixel/plugin/pxText/PxBitmapFont.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pLetters,"pLetters");
	HX_STACK_LINE(85)
	this->reset();
	HX_STACK_LINE(87)
	this->_glyphString = pLetters;
	HX_STACK_LINE(97)
	if (((pBitmapData != null()))){
		HX_STACK_LINE(99)
		this->_tileRects = Array_obj< ::neash::geom::Rectangle >::__new();
		HX_STACK_LINE(100)
		::neash::display::BitmapData result = this->preparePixelizerBitmapData(pBitmapData,this->_tileRects);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(101)
		this->_bitmapDataKey = ::org::flixel::FlxG_obj::getUniqueBitmapKey(HX_CSTRING("font"));
		HX_STACK_LINE(102)
		this->_pixels = ::org::flixel::FlxG_obj::addBitmap(result,false,false,this->_bitmapDataKey,null(),null());
		HX_STACK_LINE(103)
		::neash::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
	}
	HX_STACK_LINE(110)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadPixelizer,return )

::Hash PxBitmapFont_obj::_storedFonts;

::neash::geom::Point PxBitmapFont_obj::ZERO_POINT;

Void PxBitmapFont_obj::store( ::String pHandle,::org::flixel::plugin::pxText::PxBitmapFont pFont){
{
		HX_STACK_PUSH("PxBitmapFont::store","org/flixel/plugin/pxText/PxBitmapFont.hx",755);
		HX_STACK_ARG(pHandle,"pHandle");
		HX_STACK_ARG(pFont,"pFont");
		HX_STACK_LINE(755)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->set(pHandle,pFont);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,store,(void))

::org::flixel::plugin::pxText::PxBitmapFont PxBitmapFont_obj::fetch( ::String pHandle){
	HX_STACK_PUSH("PxBitmapFont::fetch","org/flixel/plugin/pxText/PxBitmapFont.hx",765);
	HX_STACK_ARG(pHandle,"pHandle");
	HX_STACK_LINE(766)
	::org::flixel::plugin::pxText::PxBitmapFont f = ::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->get(pHandle);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(767)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,fetch,return )

Void PxBitmapFont_obj::clearStorage( ){
{
		HX_STACK_PUSH("PxBitmapFont::clearStorage","org/flixel/plugin/pxText/PxBitmapFont.hx",771);
		HX_STACK_LINE(772)
		for(::cpp::FastIterator_obj< ::org::flixel::plugin::pxText::PxBitmapFont > *__it = ::cpp::CreateFastIterator< ::org::flixel::plugin::pxText::PxBitmapFont >(::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts->iterator());  __it->hasNext(); ){
			::org::flixel::plugin::pxText::PxBitmapFont font = __it->next();
			font->dispose(null());
		}
		HX_STACK_LINE(777)
		::org::flixel::plugin::pxText::PxBitmapFont_obj::_storedFonts = ::Hash_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,clearStorage,(void))


PxBitmapFont_obj::PxBitmapFont_obj()
{
}

void PxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxBitmapFont);
	HX_MARK_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(numLetters,"numLetters");
	HX_MARK_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_symbols,"_symbols");
	HX_MARK_MEMBER_NAME(_tileRects,"_tileRects");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_bgTiles,"_bgTiles");
	HX_MARK_MEMBER_NAME(_atlasGlyphs,"_atlasGlyphs");
	HX_MARK_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_END_CLASS();
}

void PxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapDataKey,"bitmapDataKey");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(numLetters,"numLetters");
	HX_VISIT_MEMBER_NAME(_bitmapDataKey,"_bitmapDataKey");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_symbols,"_symbols");
	HX_VISIT_MEMBER_NAME(_tileRects,"_tileRects");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_bgTiles,"_bgTiles");
	HX_VISIT_MEMBER_NAME(_atlasGlyphs,"_atlasGlyphs");
	HX_VISIT_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
}

Dynamic PxBitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { return store_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? get_pixels() : pixels; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return _pixels; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgTileID") ) { return bgTileID_dyn(); }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"_symbols") ) { return _symbols; }
		if (HX_FIELD_EQ(inName,"_bgTiles") ) { return _bgTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { return _bgTileID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { return ZERO_POINT; }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return inCallProp ? get_numLetters() : numLetters; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { return _tileRects; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { return _storedFonts; }
		if (HX_FIELD_EQ(inName,"clearStorage") ) { return clearStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"_atlasGlyphs") ) { return _atlasGlyphs; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { return inCallProp ? get_bitmapDataKey() : bitmapDataKey; }
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { return _bitmapDataKey; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGlyphData") ) { return updateGlyphData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_bitmapDataKey") ) { return get_bitmapDataKey_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAtlasGlyphs") ) { return updateAtlasGlyphs_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"prepareAngelCodeBitmapData") ) { return prepareAngelCodeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"preparePixelizerBitmapData") ) { return preparePixelizerBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_symbols") ) { _symbols=inValue.Cast< Array< ::org::flixel::plugin::pxText::HelperSymbol > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bgTiles") ) { _bgTiles=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { _bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numLetters") ) { numLetters=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { _tileRects=inValue.Cast< Array< ::neash::geom::Rectangle > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlasGlyphs") ) { _atlasGlyphs=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitmapDataKey") ) { bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_bitmapDataKey") ) { _bitmapDataKey=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapDataKey"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("numLetters"));
	outFields->push(HX_CSTRING("_bitmapDataKey"));
	outFields->push(HX_CSTRING("_pixels"));
	outFields->push(HX_CSTRING("_symbols"));
	outFields->push(HX_CSTRING("_tileRects"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_glyphString"));
	outFields->push(HX_CSTRING("_bgTiles"));
	outFields->push(HX_CSTRING("_atlasGlyphs"));
	outFields->push(HX_CSTRING("_bgTileID"));
	outFields->push(HX_CSTRING("_num_letters"));
	outFields->push(HX_CSTRING("_glyphs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_storedFonts"),
	HX_CSTRING("ZERO_POINT"),
	HX_CSTRING("store"),
	HX_CSTRING("fetch"),
	HX_CSTRING("clearStorage"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_numLetters"),
	HX_CSTRING("get_bitmapDataKey"),
	HX_CSTRING("bitmapDataKey"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("pixels"),
	HX_CSTRING("bgTileID"),
	HX_CSTRING("numLetters"),
	HX_CSTRING("getFontHeight"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("render"),
	HX_CSTRING("setGlyph"),
	HX_CSTRING("dispose"),
	HX_CSTRING("prepareAngelCodeBitmapData"),
	HX_CSTRING("preparePixelizerBitmapData"),
	HX_CSTRING("reset"),
	HX_CSTRING("updateAtlasGlyphs"),
	HX_CSTRING("updateGlyphData"),
	HX_CSTRING("loadAngelCode"),
	HX_CSTRING("loadPixelizer"),
	HX_CSTRING("_bitmapDataKey"),
	HX_CSTRING("_pixels"),
	HX_CSTRING("_symbols"),
	HX_CSTRING("_tileRects"),
	HX_CSTRING("_point"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_glyphString"),
	HX_CSTRING("_bgTiles"),
	HX_CSTRING("_atlasGlyphs"),
	HX_CSTRING("_bgTileID"),
	HX_CSTRING("_num_letters"),
	HX_CSTRING("_glyphs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

Class PxBitmapFont_obj::__mClass;

void PxBitmapFont_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.plugin.pxText.PxBitmapFont"), hx::TCanCast< PxBitmapFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PxBitmapFont_obj::__boot()
{
	_storedFonts= ::Hash_obj::__new();
	ZERO_POINT= ::neash::geom::Point_obj::__new(null(),null());
}

} // end namespace org
} // end namespace flixel
} // end namespace plugin
} // end namespace pxText
