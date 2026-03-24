#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MIHOYO_SDK_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x188A6610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 18131;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
