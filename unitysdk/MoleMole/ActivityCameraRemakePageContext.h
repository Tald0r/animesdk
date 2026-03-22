#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A850FEC42C5E8043.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x6FA8EB0)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x6FA8EC0)
#define MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6FA8ED0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCameraRemakePageContext_TypeDefinitionIndex = 51318;

	class ActivityCameraRemakePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A850FEC42C5E8043 _ActivityType_k__BackingField; // 0x28

		::System::Void _ctor(::Enum_3_A850FEC42C5E8043 activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A850FEC42C5E8043))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT__CTOR_OFFSET))(this, activityType);
		}

		::Enum_3_A850FEC42C5E8043 get_ActivityType()
		{
			return ((::Enum_3_A850FEC42C5E8043(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Void set_ActivityType(::Enum_3_A850FEC42C5E8043 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A850FEC42C5E8043))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCAMERAREMAKEPAGECONTEXT_SET_ACTIVITYTYPE_OFFSET))(this, value);
		}
	};
}
