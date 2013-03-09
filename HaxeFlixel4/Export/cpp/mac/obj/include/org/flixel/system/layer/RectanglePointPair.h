#ifndef INCLUDED_org_flixel_system_layer_RectanglePointPair
#define INCLUDED_org_flixel_system_layer_RectanglePointPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
HX_DECLARE_CLASS4(org,flixel,system,layer,RectanglePointPair)
namespace org{
namespace flixel{
namespace system{
namespace layer{


class RectanglePointPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RectanglePointPair_obj OBJ_;
		RectanglePointPair_obj();
		Void __construct(::neash::geom::Rectangle rect,::neash::geom::Point point);

	public:
		static hx::ObjectPtr< RectanglePointPair_obj > __new(::neash::geom::Rectangle rect,::neash::geom::Point point);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RectanglePointPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RectanglePointPair"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		::neash::geom::Point point; /* REM */ 
		::neash::geom::Rectangle rect; /* REM */ 
};

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_org_flixel_system_layer_RectanglePointPair */ 
