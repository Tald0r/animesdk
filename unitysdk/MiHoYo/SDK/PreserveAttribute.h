#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MIHOYO_SDK_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18952D50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 17631;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
