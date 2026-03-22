#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B2C060183F4E5398;

#define MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SELECTMONSTERCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x75118B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectMonsterCardWidgetController_SelectMonsterCardData_TypeDefinitionIndex = 46678;

	class UISelectMonsterCardWidgetController_SelectMonsterCardData : public ::System::Object
	{
	public:
		::Class_1_B2C060183F4E5398* monsterCardSummary; // 0x10
		::System::Boolean refreshSelectState; // 0x18
		::System::Boolean checkLevelMatch; // 0x19
		::System::Boolean enableNew; // 0x1A
		::System::Int32 overrideRewardID; // 0x1C
		::System::Int32 rewardLevelId; // 0x20
		::System::Int32 caffBuffTipsID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTMONSTERCARDWIDGETCONTROLLER_SELECTMONSTERCARDDATA__CTOR_OFFSET))(this);
		}
	};
}
