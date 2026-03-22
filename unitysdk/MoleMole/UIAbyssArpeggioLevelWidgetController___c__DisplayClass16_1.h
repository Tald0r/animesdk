#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_0; }
namespace MoleMole { class UICasperShopContext; }

#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D2EB0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_1__REFRESHSWEEPBTN_B__5_OFFSET UNITYSDK_OFFSET(0xB8D2EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_1_TypeDefinitionIndex = 50232;

	class UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::MoleMole::UICasperShopContext* shopContext; // 0x10
		::MoleMole::UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_1__REFRESHSWEEPBTN_B__5_OFFSET))(this);
		}
	};
}
