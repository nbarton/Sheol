#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_JNI
#include <neash/JNI.h>
#endif
#ifndef INCLUDED_neash_JNIMethod
#include <neash/JNIMethod.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
namespace neash{

Void JNI_obj::__construct()
{
	return null();
}

JNI_obj::~JNI_obj() { }

Dynamic JNI_obj::__CreateEmpty() { return  new JNI_obj; }
hx::ObjectPtr< JNI_obj > JNI_obj::__new()
{  hx::ObjectPtr< JNI_obj > result = new JNI_obj();
	result->__construct();
	return result;}

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNI_obj > result = new JNI_obj();
	result->__construct();
	return result;}

bool JNI_obj::isInit;

Void JNI_obj::init( ){
{
		HX_STACK_PUSH("JNI::init","neash/JNI.hx",16);
		HX_STACK_LINE(16)
		if ((!(::neash::JNI_obj::isInit))){
			HX_STACK_LINE(19)
			::neash::JNI_obj::isInit = true;
			HX_STACK_LINE(20)
			Dynamic func = ::neash::Loader_obj::load(HX_CSTRING("nme_jni_init_callback"),(int)1);		HX_STACK_VAR(func,"func");
			HX_STACK_LINE(21)
			func(::neash::JNI_obj::onCallback_dyn());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

Dynamic JNI_obj::onCallback( Dynamic inObj,Dynamic inFunc,Dynamic inArgs){
	HX_STACK_PUSH("JNI::onCallback","neash/JNI.hx",25);
	HX_STACK_ARG(inObj,"inObj");
	HX_STACK_ARG(inFunc,"inFunc");
	HX_STACK_ARG(inArgs,"inArgs");
	HX_STACK_LINE(27)
	Dynamic field = ::Reflect_obj::field(inObj,inFunc);		HX_STACK_VAR(field,"field");
	HX_STACK_LINE(28)
	if (((field != null()))){
		HX_STACK_LINE(29)
		return ::Reflect_obj::callMethod(inObj,field,inArgs);
	}
	HX_STACK_LINE(30)
	::haxe::Log_obj::trace((HX_CSTRING("onCallback - unknown field ") + ::Std_obj::string(inFunc)),hx::SourceInfo(HX_CSTRING("JNI.hx"),30,HX_CSTRING("neash.JNI"),HX_CSTRING("onCallback")));
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

Dynamic JNI_obj::createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray){
bool useArray = __o_useArray.Default(false);
	HX_STACK_PUSH("JNI::createMemberMethod","neash/JNI.hx",43);
	HX_STACK_ARG(className,"className");
	HX_STACK_ARG(memberName,"memberName");
	HX_STACK_ARG(signature,"signature");
	HX_STACK_ARG(useArray,"useArray");
{
		HX_STACK_LINE(44)
		::neash::JNI_obj::init();
		HX_STACK_LINE(45)
		::neash::JNIMethod method = ::neash::JNIMethod_obj::__new(::neash::JNI_obj::nme_jni_create_method(className,memberName,signature,false));		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(46)
		return method->getMemberMethod(useArray);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JNI_obj,createMemberMethod,return )

Dynamic JNI_obj::createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray){
bool useArray = __o_useArray.Default(false);
	HX_STACK_PUSH("JNI::createStaticMethod","neash/JNI.hx",59);
	HX_STACK_ARG(className,"className");
	HX_STACK_ARG(memberName,"memberName");
	HX_STACK_ARG(signature,"signature");
	HX_STACK_ARG(useArray,"useArray");
{
		HX_STACK_LINE(60)
		::neash::JNI_obj::init();
		HX_STACK_LINE(61)
		::neash::JNIMethod method = ::neash::JNIMethod_obj::__new(::neash::JNI_obj::nme_jni_create_method(className,memberName,signature,true));		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(62)
		return method->getStaticMethod(useArray);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JNI_obj,createStaticMethod,return )

Dynamic JNI_obj::nme_jni_create_method;


JNI_obj::JNI_obj()
{
}

void JNI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNI);
	HX_MARK_END_CLASS();
}

void JNI_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic JNI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isInit") ) { return isInit; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onCallback") ) { return onCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { return createMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { return createStaticMethod_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_jni_create_method") ) { return nme_jni_create_method; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isInit") ) { isInit=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_jni_create_method") ) { nme_jni_create_method=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNI_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isInit"),
	HX_CSTRING("init"),
	HX_CSTRING("onCallback"),
	HX_CSTRING("createMemberMethod"),
	HX_CSTRING("createStaticMethod"),
	HX_CSTRING("nme_jni_create_method"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::isInit,"isInit");
	HX_MARK_MEMBER_NAME(JNI_obj::nme_jni_create_method,"nme_jni_create_method");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::isInit,"isInit");
	HX_VISIT_MEMBER_NAME(JNI_obj::nme_jni_create_method,"nme_jni_create_method");
};

Class JNI_obj::__mClass;

void JNI_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.JNI"), hx::TCanCast< JNI_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JNI_obj::__boot()
{
	isInit= false;
	nme_jni_create_method= ::neash::Loader_obj::load(HX_CSTRING("nme_jni_create_method"),(int)4);
}

} // end namespace neash
