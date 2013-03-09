#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_neash_JNIMethod
#include <neash/JNIMethod.h>
#endif
#ifndef INCLUDED_neash_Loader
#include <neash/Loader.h>
#endif
namespace neash{

Void JNIMethod_obj::__construct(Dynamic method)
{
HX_STACK_PUSH("JNIMethod::new","neash/JNI.hx",81);
{
	HX_STACK_LINE(81)
	this->method = method;
}
;
	return null();
}

JNIMethod_obj::~JNIMethod_obj() { }

Dynamic JNIMethod_obj::__CreateEmpty() { return  new JNIMethod_obj; }
hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new(Dynamic method)
{  hx::ObjectPtr< JNIMethod_obj > result = new JNIMethod_obj();
	result->__construct(method);
	return result;}

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMethod_obj > result = new JNIMethod_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic JNIMethod_obj::getStaticMethod( bool useArray){
	HX_STACK_PUSH("JNIMethod::getStaticMethod","neash/JNI.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(useArray,"useArray");
	HX_STACK_LINE(113)
	if ((useArray)){
		HX_STACK_LINE(115)
		return this->callStatic_dyn();
	}
	else{
		HX_STACK_LINE(119)
		return ::Reflect_obj::makeVarArgs(this->callStatic_dyn());
	}
	HX_STACK_LINE(113)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )

Dynamic JNIMethod_obj::getMemberMethod( bool useArray){
	HX_STACK_PUSH("JNIMethod::getMemberMethod","neash/JNI.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(useArray,"useArray");
	HX_STACK_LINE(100)
	if ((useArray)){
		HX_STACK_LINE(102)
		return this->callMember_dyn();
	}
	else{
		HX_STACK_LINE(106)
		return ::Reflect_obj::makeVarArgs(this->callMember_dyn());
	}
	HX_STACK_LINE(100)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

Dynamic JNIMethod_obj::callStatic( Dynamic args){
	HX_STACK_PUSH("JNIMethod::callStatic","neash/JNI.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(94)
	return ::neash::JNIMethod_obj::nme_jni_call_static(this->method,args);
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

Dynamic JNIMethod_obj::callMember( Dynamic args){
	HX_STACK_PUSH("JNIMethod::callMember","neash/JNI.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(88)
	Dynamic jobject = args->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(jobject,"jobject");
	HX_STACK_LINE(89)
	return ::neash::JNIMethod_obj::nme_jni_call_member(this->method,jobject,args);
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

Dynamic JNIMethod_obj::nme_jni_call_member;

Dynamic JNIMethod_obj::nme_jni_call_static;


JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic JNIMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return getStaticMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return getMemberMethod_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_jni_call_member") ) { return nme_jni_call_member; }
		if (HX_FIELD_EQ(inName,"nme_jni_call_static") ) { return nme_jni_call_static; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_jni_call_member") ) { nme_jni_call_member=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_jni_call_static") ) { nme_jni_call_static=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("method"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_jni_call_member"),
	HX_CSTRING("nme_jni_call_static"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getStaticMethod"),
	HX_CSTRING("getMemberMethod"),
	HX_CSTRING("callStatic"),
	HX_CSTRING("callMember"),
	HX_CSTRING("method"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::nme_jni_call_member,"nme_jni_call_member");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::nme_jni_call_static,"nme_jni_call_static");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::nme_jni_call_member,"nme_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::nme_jni_call_static,"nme_jni_call_static");
};

Class JNIMethod_obj::__mClass;

void JNIMethod_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("neash.JNIMethod"), hx::TCanCast< JNIMethod_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JNIMethod_obj::__boot()
{
	nme_jni_call_member= ::neash::Loader_obj::load(HX_CSTRING("nme_jni_call_member"),(int)3);
	nme_jni_call_static= ::neash::Loader_obj::load(HX_CSTRING("nme_jni_call_static"),(int)2);
}

} // end namespace neash
