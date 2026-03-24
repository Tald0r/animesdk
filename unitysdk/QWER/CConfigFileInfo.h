#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define QWER_CCONFIGFILEINFO_GET_URL_OFFSET UNITYSDK_OFFSET(0x1B00CFC0)
#define QWER_CCONFIGFILEINFO_SET_URL_OFFSET UNITYSDK_OFFSET(0x1B00CFD0)
#define QWER_CCONFIGFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00B3A0)

namespace QWER
{
	inline static constexpr unsigned int CConfigFileInfo_TypeDefinitionIndex = 84113;

	class CConfigFileInfo : public ::System::Object
	{
	public:
		::System::String* _Url_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CCONFIGFILEINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CCONFIGFILEINFO_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CCONFIGFILEINFO_SET_URL_OFFSET))(this, value);
		}
	};
}
