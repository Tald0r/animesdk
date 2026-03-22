#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A850FEC42C5E8043.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBD81CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController_Context_TypeDefinitionIndex = 38943;

	class UIActivityFruitToysMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A850FEC42C5E8043 ActivityType; // 0x28

		::System::Void _ctor(::Enum_3_A850FEC42C5E8043 activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A850FEC42C5E8043))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this, activityType);
		}
	};
}
