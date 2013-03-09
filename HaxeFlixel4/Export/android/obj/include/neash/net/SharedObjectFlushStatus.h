#ifndef INCLUDED_neash_net_SharedObjectFlushStatus
#define INCLUDED_neash_net_SharedObjectFlushStatus

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,net,SharedObjectFlushStatus)
namespace neash{
namespace net{


class SharedObjectFlushStatus_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SharedObjectFlushStatus_obj OBJ_;

	public:
		SharedObjectFlushStatus_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("neash.net.SharedObjectFlushStatus"); }
		::String __ToString() const { return HX_CSTRING("SharedObjectFlushStatus.") + tag; }

		static ::neash::net::SharedObjectFlushStatus FLUSHED;
		static inline ::neash::net::SharedObjectFlushStatus FLUSHED_dyn() { return FLUSHED; }
		static ::neash::net::SharedObjectFlushStatus PENDING;
		static inline ::neash::net::SharedObjectFlushStatus PENDING_dyn() { return PENDING; }
};

} // end namespace neash
} // end namespace net

#endif /* INCLUDED_neash_net_SharedObjectFlushStatus */ 
