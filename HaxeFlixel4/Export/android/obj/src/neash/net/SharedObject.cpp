#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_filesystem_File
#include <neash/filesystem/File.h>
#endif
#ifndef INCLUDED_neash_net_SharedObject
#include <neash/net/SharedObject.h>
#endif
#ifndef INCLUDED_neash_net_SharedObjectFlushStatus
#include <neash/net/SharedObjectFlushStatus.h>
#endif
namespace neash{
namespace net{

Void SharedObject_obj::__construct(::String name,::String localPath,Dynamic data)
{
HX_STACK_PUSH("SharedObject::new","neash/net/SharedObject.hx",42);
{
	HX_STACK_LINE(43)
	super::__construct(null());
	HX_STACK_LINE(45)
	this->name = name;
	HX_STACK_LINE(46)
	this->localPath = localPath;
	HX_STACK_LINE(47)
	this->data = data;
}
;
	return null();
}

SharedObject_obj::~SharedObject_obj() { }

Dynamic SharedObject_obj::__CreateEmpty() { return  new SharedObject_obj; }
hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new(::String name,::String localPath,Dynamic data)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(name,localPath,data);
	return result;}

Dynamic SharedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::neash::net::SharedObjectFlushStatus SharedObject_obj::flush( hx::Null< int >  __o_minDiskSpace){
int minDiskSpace = __o_minDiskSpace.Default(0);
	HX_STACK_PUSH("SharedObject::flush","neash/net/SharedObject.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(minDiskSpace,"minDiskSpace");
{
		HX_STACK_LINE(125)
		::String encodedData = ::haxe::Serializer_obj::run(this->data);		HX_STACK_VAR(encodedData,"encodedData");
		HX_STACK_LINE(129)
		::neash::net::SharedObject_obj::nme_set_user_preference(this->name,encodedData);
		HX_STACK_LINE(147)
		return ::neash::net::SharedObjectFlushStatus_obj::FLUSHED_dyn();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::clear( ){
{
		HX_STACK_PUSH("SharedObject::clear","neash/net/SharedObject.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		::neash::net::SharedObject_obj::nme_clear_user_preference(this->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

::String SharedObject_obj::getFilePath( ::String name,::String localPath){
	HX_STACK_PUSH("SharedObject::getFilePath","neash/net/SharedObject.hx",152);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(localPath,"localPath");
	HX_STACK_LINE(153)
	::String path = ::neash::filesystem::File_obj::nmeGetStorageDir()->nativePath;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(155)
	hx::AddEq(path,((((HX_CSTRING("/") + localPath) + HX_CSTRING("/")) + name) + HX_CSTRING(".sol")));
	HX_STACK_LINE(157)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,getFilePath,return )

::neash::net::SharedObject SharedObject_obj::getLocal( ::String name,::String localPath,hx::Null< bool >  __o_secure){
bool secure = __o_secure.Default(false);
	HX_STACK_PUSH("SharedObject::getLocal","neash/net/SharedObject.hx",162);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(localPath,"localPath");
	HX_STACK_ARG(secure,"secure");
{
		HX_STACK_LINE(163)
		if (((localPath == null()))){
			HX_STACK_LINE(164)
			localPath = HX_CSTRING("");
		}
		HX_STACK_LINE(170)
		::String rawData = ::neash::net::SharedObject_obj::nme_get_user_preference(name);		HX_STACK_VAR(rawData,"rawData");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","neash/net/SharedObject.hx",196);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(196)
		Dynamic loadedData = _Function_1_1::Block();		HX_STACK_VAR(loadedData,"loadedData");
		HX_STACK_LINE(198)
		if (((bool((rawData == HX_CSTRING(""))) || bool((rawData == null()))))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","neash/net/SharedObject.hx",200);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(199)
			loadedData = _Function_2_1::Block();
		}
		else{
			HX_STACK_LINE(203)
			loadedData = ::haxe::Unserializer_obj::run(rawData);
		}
		HX_STACK_LINE(207)
		::neash::net::SharedObject so = ::neash::net::SharedObject_obj::__new(name,localPath,loadedData);		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(209)
		return so;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

Dynamic SharedObject_obj::nme_get_user_preference;

Dynamic SharedObject_obj::nme_set_user_preference;

Dynamic SharedObject_obj::nme_clear_user_preference;


SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(localPath,"localPath");
	HX_MARK_MEMBER_NAME(data,"data");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(localPath,"localPath");
	HX_VISIT_MEMBER_NAME(data,"data");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SharedObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { return getLocal_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { return localPath; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { return getFilePath_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_get_user_preference") ) { return nme_get_user_preference; }
		if (HX_FIELD_EQ(inName,"nme_set_user_preference") ) { return nme_set_user_preference; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_clear_user_preference") ) { return nme_clear_user_preference; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SharedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { localPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_get_user_preference") ) { nme_get_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_set_user_preference") ) { nme_set_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_clear_user_preference") ) { nme_clear_user_preference=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("localPath"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFilePath"),
	HX_CSTRING("getLocal"),
	HX_CSTRING("nme_get_user_preference"),
	HX_CSTRING("nme_set_user_preference"),
	HX_CSTRING("nme_clear_user_preference"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("flush"),
	HX_CSTRING("clear"),
	HX_CSTRING("name"),
	HX_CSTRING("localPath"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_get_user_preference,"nme_get_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_set_user_preference,"nme_set_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::nme_clear_user_preference,"nme_clear_user_preference");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_get_user_preference,"nme_get_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_set_user_preference,"nme_set_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::nme_clear_user_preference,"nme_clear_user_preference");
};

Class SharedObject_obj::__mClass;

void SharedObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.net.SharedObject"), hx::TCanCast< SharedObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SharedObject_obj::__boot()
{
	nme_get_user_preference= ::neash::Loader_obj::load(HX_CSTRING("nme_get_user_preference"),(int)1);
	nme_set_user_preference= ::neash::Loader_obj::load(HX_CSTRING("nme_set_user_preference"),(int)2);
	nme_clear_user_preference= ::neash::Loader_obj::load(HX_CSTRING("nme_clear_user_preference"),(int)1);
}

} // end namespace neash
} // end namespace net
