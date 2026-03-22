#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingWhiteListPredicateBase.h"

namespace System { class String; }

#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0xF18B4E0)
#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0xF18B550)
#define MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET UNITYSDK_OFFSET(0xF18B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingGPUModelPredicate_TypeDefinitionIndex = 75383;

	class DeviceSettingGPUModelPredicate : public ::MoleMole::DeviceSettingWhiteListPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE__CTOR_OFFSET))(this);
		}

		::System::String* GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE_GETPREDICATESTRING_OFFSET))(this);
		}

		::System::String* __base_GetPredicateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGGPUMODELPREDICATE___BASE_GETPREDICATESTRING_OFFSET))(this);
		}
	};
}
