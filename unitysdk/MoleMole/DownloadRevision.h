#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET UNITYSDK_OFFSET(0xBB0DFF0)
#define MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET UNITYSDK_OFFSET(0xBB0DFB0)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBB0E160)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_460AE5949F4C524E_OFFSET UNITYSDK_OFFSET(0xBB0E1A0)
#define MOLEMOLE_DOWNLOADREVISION_METHOD_1_D95BC964A2667B55_OFFSET UNITYSDK_OFFSET(0xBB0E000)
#define MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBB0E0F0)
#define MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0DFA0)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadRevision_TypeDefinitionIndex = 70444;

	class DownloadRevision : public ::System::Object
	{
	public:
		::Foundation::ResourceFileType fileType; // 0x10
		::System::String* revisionCode; // 0x18
		::MoleMole::DownloadFileInfo* versions_fileInfo; // 0x20

		::System::Void _ctor(::Foundation::ResourceFileType a1, ::System::String* a2, ::MoleMole::DownloadFileInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::String*, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Suffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_SUFFIX_OFFSET))(this);
		}

		::System::String* get_p4changelist()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_GET_P4CHANGELIST_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_TOSTRING_OFFSET))(this);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_128774387667156B_OFFSET))(this);
		}

		static ::System::String* Method_1_460AE5949F4C524E(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_460AE5949F4C524E_OFFSET))(a1);
		}

		static ::System::String* Method_1_D95BC964A2667B55(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADREVISION_METHOD_1_D95BC964A2667B55_OFFSET))(a1);
		}
	};
}
