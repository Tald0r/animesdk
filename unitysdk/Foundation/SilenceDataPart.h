#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_SILENCEDATAPART__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0DC10)

namespace Foundation
{
	inline static constexpr unsigned int SilenceDataPart_TypeDefinitionIndex = 8169;

	class SilenceDataPart : public ::System::Object
	{
	public:
		::System::String* md5_files; // 0x10
		::System::String* silence_revision; // 0x18
		::System::String* base_url; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SILENCEDATAPART__CTOR_OFFSET))(this);
		}
	};
}
