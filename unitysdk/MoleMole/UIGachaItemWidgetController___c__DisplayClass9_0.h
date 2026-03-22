#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUIGachaItemParam_ConfigItem;
namespace MoleMole { class UIGachaItemWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D82B00)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__0_OFFSET UNITYSDK_OFFSET(0x9D83AB0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__1_OFFSET UNITYSDK_OFFSET(0x9D83CB0)
#define MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__2_OFFSET UNITYSDK_OFFSET(0x9D83BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 70062;

	class UIGachaItemWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MonoUIGachaItemParam_ConfigItem* config; // 0x18
		::MoleMole::UIGachaItemWidgetController* __4__this; // 0x20
		::System::Single activateAnimDelay; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__2_OFFSET))(this);
		}

		::System::Void _PlayItemFadeInAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__PLAYITEMFADEINANIM_B__1_OFFSET))(this);
		}
	};
}
