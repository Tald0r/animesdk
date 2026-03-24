#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x19D245E0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19D244B0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x19D244C0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x19D24300)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x19D24310)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEBUILDPART_OFFSET UNITYSDK_OFFSET(0x19D24320)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19D24330)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMAJORPART_OFFSET UNITYSDK_OFFSET(0x19D24340)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMINORPART_OFFSET UNITYSDK_OFFSET(0x19D24350)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x19D24360)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEPRIVATEPART_OFFSET UNITYSDK_OFFSET(0x19D24370)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEVERSION_OFFSET UNITYSDK_OFFSET(0x19D24380)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x19D24390)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x19D243A0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x19D243B0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRERELEASE_OFFSET UNITYSDK_OFFSET(0x19D243C0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRIVATEBUILD_OFFSET UNITYSDK_OFFSET(0x19D243D0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISSPECIALBUILD_OFFSET UNITYSDK_OFFSET(0x19D243E0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19D243F0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALCOPYRIGHT_OFFSET UNITYSDK_OFFSET(0x19D24400)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALTRADEMARKS_OFFSET UNITYSDK_OFFSET(0x19D24410)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ORIGINALFILENAME_OFFSET UNITYSDK_OFFSET(0x19D24420)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRIVATEBUILD_OFFSET UNITYSDK_OFFSET(0x19D24430)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTBUILDPART_OFFSET UNITYSDK_OFFSET(0x19D24440)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMAJORPART_OFFSET UNITYSDK_OFFSET(0x19D24450)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMINORPART_OFFSET UNITYSDK_OFFSET(0x19D24460)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x19D24470)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTPRIVATEPART_OFFSET UNITYSDK_OFFSET(0x19D24480)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x19D24490)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_SPECIALBUILD_OFFSET UNITYSDK_OFFSET(0x19D244A0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D24690)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19D242C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int FileVersionInfo_TypeDefinitionIndex = 2795;

	class FileVersionInfo : public ::System::Object
	{
	public:
		::System::String* filename; // 0x10
		::System::String* legalcopyright; // 0x18
		::System::String* privatebuild; // 0x20
		::System::String* fileversion; // 0x28
		::System::String* originalfilename; // 0x30
		::System::String* filedescription; // 0x38
		::System::String* specialbuild; // 0x40
		::System::String* productversion; // 0x48
		::System::String* legaltrademarks; // 0x50
		::System::String* internalname; // 0x58
		::System::String* companyname; // 0x60
		::System::String* productname; // 0x68
		::System::String* comments; // 0x70
		::System::String* language; // 0x78
		::System::Int32 filebuildpart; // 0x80
		::System::Int32 productbuildpart; // 0x84
		::System::Int32 fileminorpart; // 0x88
		::System::Int32 productmajorpart; // 0x8C
		::System::Int32 fileprivatepart; // 0x90
		::System::Int32 filemajorpart; // 0x94
		::System::Int32 productminorpart; // 0x98
		::System::Int32 productprivatepart; // 0x9C
		::System::Boolean isprerelease; // 0xA0
		::System::Boolean ispatched; // 0xA1
		::System::Boolean isspecialbuild; // 0xA2
		::System::Boolean isprivatebuild; // 0xA3
		::System::Boolean isdebug; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Comments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMMENTS_OFFSET))(this);
		}

		::System::String* get_CompanyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMPANYNAME_OFFSET))(this);
		}

		::System::Int32 get_FileBuildPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEBUILDPART_OFFSET))(this);
		}

		::System::String* get_FileDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEDESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_FileMajorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMAJORPART_OFFSET))(this);
		}

		::System::Int32 get_FileMinorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMINORPART_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Int32 get_FilePrivatePart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEPRIVATEPART_OFFSET))(this);
		}

		::System::String* get_FileVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEVERSION_OFFSET))(this);
		}

		::System::String* get_InternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_INTERNALNAME_OFFSET))(this);
		}

		::System::Boolean get_IsDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISDEBUG_OFFSET))(this);
		}

		::System::Boolean get_IsPatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPATCHED_OFFSET))(this);
		}

		::System::Boolean get_IsPreRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRERELEASE_OFFSET))(this);
		}

		::System::Boolean get_IsPrivateBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRIVATEBUILD_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISSPECIALBUILD_OFFSET))(this);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LANGUAGE_OFFSET))(this);
		}

		::System::String* get_LegalCopyright()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALCOPYRIGHT_OFFSET))(this);
		}

		::System::String* get_LegalTrademarks()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALTRADEMARKS_OFFSET))(this);
		}

		::System::String* get_OriginalFilename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ORIGINALFILENAME_OFFSET))(this);
		}

		::System::String* get_PrivateBuild()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRIVATEBUILD_OFFSET))(this);
		}

		::System::Int32 get_ProductBuildPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTBUILDPART_OFFSET))(this);
		}

		::System::Int32 get_ProductMajorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMAJORPART_OFFSET))(this);
		}

		::System::Int32 get_ProductMinorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMINORPART_OFFSET))(this);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Int32 get_ProductPrivatePart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTPRIVATEPART_OFFSET))(this);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::String* get_SpecialBuild()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_SPECIALBUILD_OFFSET))(this);
		}

		::System::Void GetVersionInfo_internal(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_INTERNAL_OFFSET))(this, fileName);
		}

		static ::System::Diagnostics::FileVersionInfo* GetVersionInfo(::System::String* fileName)
		{
			return ((::System::Diagnostics::FileVersionInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_OFFSET))(fileName);
		}

		static ::System::Void AppendFormat(::System::Text::StringBuilder* sb, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_APPENDFORMAT_OFFSET))(sb, format, args);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
