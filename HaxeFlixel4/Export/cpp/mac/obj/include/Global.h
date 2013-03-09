#ifndef INCLUDED_Global
#define INCLUDED_Global

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Global)


class Global_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Global_obj OBJ_;
		Global_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Global_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Global_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Global"); }

		static int level; /* REM */ 
		static int score; /* REM */ 
};


#endif /* INCLUDED_Global */ 
