#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC95E0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCLICKSWITCHSKININDEX_B__0_OFFSET UNITYSDK_OFFSET(0xCFC95F0)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCLICKSWITCHSKININDEX_B__1_OFFSET UNITYSDK_OFFSET(0xCFC9710)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass94_0_TypeDefinitionIndex = 39881;

	class UIPlayerAccessoryPageController___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::System::Int32 skinIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSwitchSkinIndex_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCLICKSWITCHSKININDEX_B__0_OFFSET))(this);
		}

		::System::Void _OnClickSwitchSkinIndex_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS94_0__ONCLICKSWITCHSKININDEX_B__1_OFFSET))(this);
		}
	};
}
