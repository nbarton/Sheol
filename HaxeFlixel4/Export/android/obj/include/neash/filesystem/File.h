#ifndef INCLUDED_neash_filesystem_File
#define INCLUDED_neash_filesystem_File

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,filesystem,File)
namespace neash{
namespace filesystem{


class File_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef File_obj OBJ_;
		File_obj();
		Void __construct(::String path);

	public:
		static hx::ObjectPtr< File_obj > __new(::String path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~File_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("File"); }

		virtual ::String nmeSetURL( ::String inPath);
		Dynamic nmeSetURL_dyn();

		virtual ::String nmeSetNativePath( ::String inPath);
		Dynamic nmeSetNativePath_dyn();

		::String url; /* REM */ 
		::String nativePath; /* REM */ 
		static int APP; /* REM */ 
		static int STORAGE; /* REM */ 
		static int DESKTOP; /* REM */ 
		static int DOCS; /* REM */ 
		static int USER; /* REM */ 
		static ::neash::filesystem::File applicationDirectory; /* REM */ 
		static ::neash::filesystem::File applicationStorageDirectory; /* REM */ 
		static ::neash::filesystem::File desktopDirectory; /* REM */ 
		static ::neash::filesystem::File documentsDirectory; /* REM */ 
		static ::neash::filesystem::File userDirectory; /* REM */ 
		static Dynamic jni_filesystem_get_special_dir; /* REM */ 
		static ::String nme_filesystem_get_special_dir( int inWhich);
		static Dynamic nme_filesystem_get_special_dir_dyn();

		static ::neash::filesystem::File nmeGetAppDir( );
		static Dynamic nmeGetAppDir_dyn();

		static ::neash::filesystem::File nmeGetStorageDir( );
		static Dynamic nmeGetStorageDir_dyn();

		static ::neash::filesystem::File nmeGetDesktopDir( );
		static Dynamic nmeGetDesktopDir_dyn();

		static ::neash::filesystem::File nmeGetDocsDir( );
		static Dynamic nmeGetDocsDir_dyn();

		static ::neash::filesystem::File nmeGetUserDir( );
		static Dynamic nmeGetUserDir_dyn();

};

} // end namespace neash
} // end namespace filesystem

#endif /* INCLUDED_neash_filesystem_File */ 
