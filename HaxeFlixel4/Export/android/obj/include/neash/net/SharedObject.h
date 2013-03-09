#ifndef INCLUDED_neash_net_SharedObject
#define INCLUDED_neash_net_SharedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/events/EventDispatcher.h>
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,net,SharedObject)
HX_DECLARE_CLASS2(neash,net,SharedObjectFlushStatus)
namespace neash{
namespace net{


class SharedObject_obj : public ::neash::events::EventDispatcher_obj{
	public:
		typedef ::neash::events::EventDispatcher_obj super;
		typedef SharedObject_obj OBJ_;
		SharedObject_obj();
		Void __construct(::String name,::String localPath,Dynamic data);

	public:
		static hx::ObjectPtr< SharedObject_obj > __new(::String name,::String localPath,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SharedObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SharedObject"); }

		virtual ::neash::net::SharedObjectFlushStatus flush( hx::Null< int >  minDiskSpace);
		Dynamic flush_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		::String name; /* REM */ 
		::String localPath; /* REM */ 
		Dynamic data; /* REM */ 
		static ::String getFilePath( ::String name,::String localPath);
		static Dynamic getFilePath_dyn();

		static ::neash::net::SharedObject getLocal( ::String name,::String localPath,hx::Null< bool >  secure);
		static Dynamic getLocal_dyn();

		static Dynamic nme_get_user_preference; /* REM */ 
		static Dynamic &nme_get_user_preference_dyn() { return nme_get_user_preference;}
		static Dynamic nme_set_user_preference; /* REM */ 
		static Dynamic &nme_set_user_preference_dyn() { return nme_set_user_preference;}
		static Dynamic nme_clear_user_preference; /* REM */ 
		static Dynamic &nme_clear_user_preference_dyn() { return nme_clear_user_preference;}
};

} // end namespace neash
} // end namespace net

#endif /* INCLUDED_neash_net_SharedObject */ 
