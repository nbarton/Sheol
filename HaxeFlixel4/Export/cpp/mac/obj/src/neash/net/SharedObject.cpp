#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
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
		HX_STACK_LINE(133)
		::String filePath = ::neash::net::SharedObject_obj::getFilePath(this->name,this->localPath);		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(134)
		::String folderPath = ::haxe::io::Path_obj::directory(filePath);		HX_STACK_VAR(folderPath,"folderPath");
		HX_STACK_LINE(136)
		if ((!(::sys::FileSystem_obj::exists(folderPath)))){
			HX_STACK_LINE(137)
			::neash::net::SharedObject_obj::mkdir(folderPath);
		}
		HX_STACK_LINE(141)
		::sys::io::FileOutput output = ::sys::io::File_obj::write(filePath,false);		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(142)
		output->writeString(encodedData);
		HX_STACK_LINE(143)
		output->close();
		HX_STACK_LINE(147)
		return ::neash::net::SharedObjectFlushStatus_obj::FLUSHED_dyn();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::clear( ){
{
		HX_STACK_PUSH("SharedObject::clear","neash/net/SharedObject.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		::String filePath = ::neash::net::SharedObject_obj::getFilePath(this->name,this->localPath);		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(61)
		if ((::sys::FileSystem_obj::exists(filePath))){
			HX_STACK_LINE(62)
			::sys::FileSystem_obj::deleteFile(filePath);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

Void SharedObject_obj::mkdir( ::String directory){
{
		HX_STACK_PUSH("SharedObject::mkdir","neash/net/SharedObject.hx",71);
		HX_STACK_ARG(directory,"directory");
		HX_STACK_LINE(72)
		directory = ::StringTools_obj::replace(directory,HX_CSTRING("\\"),HX_CSTRING("/"));
		HX_STACK_LINE(73)
		::String total = HX_CSTRING("");		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(75)
		if (((directory.substr((int)0,(int)1) == HX_CSTRING("/")))){
			HX_STACK_LINE(75)
			total = HX_CSTRING("/");
		}
		HX_STACK_LINE(81)
		Array< ::String > parts = directory.split(HX_CSTRING("/"));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(82)
		::String oldPath = HX_CSTRING("");		HX_STACK_VAR(oldPath,"oldPath");
		HX_STACK_LINE(84)
		if (((bool((parts->length > (int)0)) && bool((parts->__get((int)0).indexOf(HX_CSTRING(":"),null()) > (int)-1))))){
			HX_STACK_LINE(86)
			oldPath = ::Sys_obj::getCwd();
			HX_STACK_LINE(87)
			::Sys_obj::setCwd((parts->__get((int)0) + HX_CSTRING("\\")));
			HX_STACK_LINE(88)
			parts->shift();
		}
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(92)
			while(((_g < parts->length))){
				HX_STACK_LINE(92)
				::String part = parts->__get(_g);		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(92)
				++(_g);
				HX_STACK_LINE(94)
				if (((bool((part != HX_CSTRING("."))) && bool((part != HX_CSTRING("")))))){
					HX_STACK_LINE(96)
					if (((total != HX_CSTRING("")))){
						HX_STACK_LINE(96)
						hx::AddEq(total,HX_CSTRING("/"));
					}
					HX_STACK_LINE(102)
					hx::AddEq(total,part);
					HX_STACK_LINE(104)
					if ((!(::sys::FileSystem_obj::exists(total)))){
						HX_STACK_LINE(104)
						::sys::FileSystem_obj::createDirectory(total);
					}
				}
			}
		}
		HX_STACK_LINE(114)
		if (((oldPath != HX_CSTRING("")))){
			HX_STACK_LINE(114)
			::Sys_obj::setCwd(oldPath);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,mkdir,(void))

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
		HX_STACK_LINE(174)
		::String filePath = ::neash::net::SharedObject_obj::getFilePath(name,localPath);		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(175)
		::String rawData = HX_CSTRING("");		HX_STACK_VAR(rawData,"rawData");
		HX_STACK_LINE(177)
		if ((::sys::FileSystem_obj::exists(filePath))){
			HX_STACK_LINE(179)
			::sys::io::FileInput input = ::sys::io::File_obj::read(filePath,false);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(181)
			try{
				HX_STACK_LINE(182)
				while((true)){
					HX_STACK_LINE(184)
					hx::AddEq(rawData,input->readLine());
				}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					::haxe::io::Eof ex = __e;{
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(191)
			input->close();
		}
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
		if (HX_FIELD_EQ(inName,"mkdir") ) { return mkdir_dyn(); }
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
	HX_CSTRING("mkdir"),
	HX_CSTRING("getFilePath"),
	HX_CSTRING("getLocal"),
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
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
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
}

} // end namespace neash
} // end namespace net
