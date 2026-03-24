#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_CONFIGURATION_SETTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1931BE00)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingAttribute_TypeDefinitionIndex = 4192;

	class SettingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
