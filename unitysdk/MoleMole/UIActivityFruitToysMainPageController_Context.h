#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBF126C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController_Context_TypeDefinitionIndex = 76779;

	class UIActivityFruitToysMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A843FEC42C53F62F ActivityType; // 0x28

		::System::Void _ctor(::Enum_3_A843FEC42C53F62F activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A843FEC42C53F62F))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this, activityType);
		}
	};
}
