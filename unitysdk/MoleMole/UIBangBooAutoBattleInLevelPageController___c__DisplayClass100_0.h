#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3B0F8CEEFA465A87;
namespace MoleMole { class UIABInLevelBangbooInfoWidgetController; }

#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFE740)
#define MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET UNITYSDK_OFFSET(0xBAFE750)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0_TypeDefinitionIndex = 36709;

	class UIBangBooAutoBattleInLevelPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::Class_2_3B0F8CEEFA465A87* slotData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenBangBooInfo_b__0(::MoleMole::UIABInLevelBangbooInfoWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelBangbooInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOAUTOBATTLEINLEVELPAGECONTROLLER___C__DISPLAYCLASS100_0__OPENBANGBOOINFO_B__0_OFFSET))(this, widget);
		}
	};
}
