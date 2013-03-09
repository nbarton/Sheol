#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_neash_JNI
#include <neash/JNI.h>
#endif
#ifndef INCLUDED_neash_filesystem_File
#include <neash/filesystem/File.h>
#endif
namespace neash{
namespace filesystem{

Void File_obj::__construct(::String path)
{
HX_STACK_PUSH("File::new","neash/filesystem/File.hx",28);
{
	HX_STACK_LINE(29)
	this->nmeSetURL(path);
	HX_STACK_LINE(30)
	this->nmeSetNativePath(path);
}
;
	return null();
}

File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(::String path)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(path);
	return result;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(inArgs[0]);
	return result;}

::String File_obj::nmeSetURL( ::String inPath){
	HX_STACK_PUSH("File::nmeSetURL","neash/filesystem/File.hx",77);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_LINE(78)
	if (((inPath == null()))){
		HX_STACK_LINE(79)
		this->url = null();
	}
	else{
		HX_STACK_LINE(84)
		this->url = ::StringTools_obj::replace(inPath,HX_CSTRING(" "),HX_CSTRING("%20"));
		HX_STACK_LINE(92)
		this->url = (HX_CSTRING("file:") + this->url);
	}
	HX_STACK_LINE(96)
	return this->url;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,nmeSetURL,return )

::String File_obj::nmeSetNativePath( ::String inPath){
	HX_STACK_PUSH("File::nmeSetNativePath","neash/filesystem/File.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_LINE(71)
	this->nativePath = inPath;
	HX_STACK_LINE(72)
	return this->nativePath;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,nmeSetNativePath,return )

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

::neash::filesystem::File File_obj::applicationDirectory;

::neash::filesystem::File File_obj::applicationStorageDirectory;

::neash::filesystem::File File_obj::desktopDirectory;

::neash::filesystem::File File_obj::documentsDirectory;

::neash::filesystem::File File_obj::userDirectory;

Dynamic File_obj::jni_filesystem_get_special_dir;

::String File_obj::nme_filesystem_get_special_dir( int inWhich){
	HX_STACK_PUSH("File::nme_filesystem_get_special_dir","neash/filesystem/File.hx",38);
	HX_STACK_ARG(inWhich,"inWhich");
	HX_STACK_LINE(39)
	if (((::neash::filesystem::File_obj::jni_filesystem_get_special_dir == null()))){
		HX_STACK_LINE(40)
		::neash::filesystem::File_obj::jni_filesystem_get_special_dir = ::neash::JNI_obj::createStaticMethod(HX_CSTRING("org.haxe.nme.GameActivity"),HX_CSTRING("getSpecialDir"),HX_CSTRING("(I)Ljava/lang/String;"),null());
	}
	HX_STACK_LINE(41)
	return ::neash::filesystem::File_obj::jni_filesystem_get_special_dir(inWhich);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,nme_filesystem_get_special_dir,return )

::neash::filesystem::File File_obj::nmeGetAppDir( ){
	HX_STACK_PUSH("File::nmeGetAppDir","neash/filesystem/File.hx",48);
	HX_STACK_LINE(48)
	return ::neash::filesystem::File_obj::__new(::neash::filesystem::File_obj::nme_filesystem_get_special_dir((int)0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,nmeGetAppDir,return )

::neash::filesystem::File File_obj::nmeGetStorageDir( ){
	HX_STACK_PUSH("File::nmeGetStorageDir","neash/filesystem/File.hx",52);
	HX_STACK_LINE(52)
	return ::neash::filesystem::File_obj::__new(::neash::filesystem::File_obj::nme_filesystem_get_special_dir((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,nmeGetStorageDir,return )

::neash::filesystem::File File_obj::nmeGetDesktopDir( ){
	HX_STACK_PUSH("File::nmeGetDesktopDir","neash/filesystem/File.hx",56);
	HX_STACK_LINE(56)
	return ::neash::filesystem::File_obj::__new(::neash::filesystem::File_obj::nme_filesystem_get_special_dir((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,nmeGetDesktopDir,return )

::neash::filesystem::File File_obj::nmeGetDocsDir( ){
	HX_STACK_PUSH("File::nmeGetDocsDir","neash/filesystem/File.hx",60);
	HX_STACK_LINE(60)
	return ::neash::filesystem::File_obj::__new(::neash::filesystem::File_obj::nme_filesystem_get_special_dir((int)3));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,nmeGetDocsDir,return )

::neash::filesystem::File File_obj::nmeGetUserDir( ){
	HX_STACK_PUSH("File::nmeGetUserDir","neash/filesystem/File.hx",64);
	HX_STACK_LINE(64)
	return ::neash::filesystem::File_obj::__new(::neash::filesystem::File_obj::nme_filesystem_get_special_dir((int)4));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,nmeGetUserDir,return )


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
}

Dynamic File_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"APP") ) { return APP; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOCS") ) { return DOCS; }
		if (HX_FIELD_EQ(inName,"USER") ) { return USER; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STORAGE") ) { return STORAGE; }
		if (HX_FIELD_EQ(inName,"DESKTOP") ) { return DESKTOP; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeSetURL") ) { return nmeSetURL_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return nativePath; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeGetAppDir") ) { return nmeGetAppDir_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? nmeGetUserDir() : userDirectory; }
		if (HX_FIELD_EQ(inName,"nmeGetDocsDir") ) { return nmeGetDocsDir_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetUserDir") ) { return nmeGetUserDir_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? nmeGetDesktopDir() : desktopDirectory; }
		if (HX_FIELD_EQ(inName,"nmeGetStorageDir") ) { return nmeGetStorageDir_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetDesktopDir") ) { return nmeGetDesktopDir_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetNativePath") ) { return nmeSetNativePath_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? nmeGetDocsDir() : documentsDirectory; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? nmeGetAppDir() : applicationDirectory; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? nmeGetStorageDir() : applicationStorageDirectory; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"jni_filesystem_get_special_dir") ) { return jni_filesystem_get_special_dir; }
		if (HX_FIELD_EQ(inName,"nme_filesystem_get_special_dir") ) { return nme_filesystem_get_special_dir_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"APP") ) { APP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp) return nmeSetURL(inValue);url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOCS") ) { DOCS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"USER") ) { USER=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STORAGE") ) { STORAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DESKTOP") ) { DESKTOP=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp) return nmeSetNativePath(inValue);nativePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::neash::filesystem::File >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::neash::filesystem::File >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::neash::filesystem::File >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::neash::filesystem::File >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::neash::filesystem::File >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"jni_filesystem_get_special_dir") ) { jni_filesystem_get_special_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("nativePath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("APP"),
	HX_CSTRING("STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCS"),
	HX_CSTRING("USER"),
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("jni_filesystem_get_special_dir"),
	HX_CSTRING("nme_filesystem_get_special_dir"),
	HX_CSTRING("nmeGetAppDir"),
	HX_CSTRING("nmeGetStorageDir"),
	HX_CSTRING("nmeGetDesktopDir"),
	HX_CSTRING("nmeGetDocsDir"),
	HX_CSTRING("nmeGetUserDir"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("nmeSetURL"),
	HX_CSTRING("nmeSetNativePath"),
	HX_CSTRING("url"),
	HX_CSTRING("nativePath"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::jni_filesystem_get_special_dir,"jni_filesystem_get_special_dir");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::jni_filesystem_get_special_dir,"jni_filesystem_get_special_dir");
};

Class File_obj::__mClass;

void File_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.filesystem.File"), hx::TCanCast< File_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void File_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	jni_filesystem_get_special_dir= null();
}

} // end namespace neash
} // end namespace filesystem
