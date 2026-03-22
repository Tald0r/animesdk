#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E4BEBE5C8511EA11.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x62123B0)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET UNITYSDK_OFFSET(0x62123C0)
#define MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x62123D0)

namespace MoleMole
{
	inline static constexpr unsigned int BaseInputActionEventConfig_TypeDefinitionIndex = 64047;

	class BaseInputActionEventConfig : public ::System::Object
	{
	public:
		::System::Boolean IgnorePlatform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_E4BEBE5C8511EA11 get_dataType()
		{
			return ((::Enum_3_E4BEBE5C8511EA11(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}

		::System::Boolean get_IgnorePlatformV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASEINPUTACTIONEVENTCONFIG_GET_IGNOREPLATFORMV2_OFFSET))(this);
		}
	};
}
