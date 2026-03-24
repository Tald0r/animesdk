#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x9156F60)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x9156F70)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9156F80)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCameraRemakePageContext_TypeDefinitionIndex = 79625;

	class ActivityCameraRemakePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A843FEC42C53F62F _ActivityType_k__BackingField; // 0x28

		::System::Void _ctor(::Enum_3_A843FEC42C53F62F activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A843FEC42C53F62F))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET))(this, activityType);
		}

		::Enum_3_A843FEC42C53F62F get_ActivityType()
		{
			return ((::Enum_3_A843FEC42C53F62F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Void set_ActivityType(::Enum_3_A843FEC42C53F62F value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A843FEC42C53F62F))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET))(this, value);
		}
	};
}
