#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DeviceSettingGradingPredicateBase.h"

#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0xD0C0560)
#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C05D0)
#define MOLEMOLE_DEVICESETTINGVRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET UNITYSDK_OFFSET(0xD0C0630)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceSettingVRAMPredicate_TypeDefinitionIndex = 80803;

	class DeviceSettingVRAMPredicate : public ::MoleMole::DeviceSettingGradingPredicateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE_GETPREDICATEFLOAT_OFFSET))(this);
		}

		::System::Int32 __base_GetPredicateFloat()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICESETTINGVRAMPREDICATE___BASE_GETPREDICATEFLOAT_OFFSET))(this);
		}
	};
}
