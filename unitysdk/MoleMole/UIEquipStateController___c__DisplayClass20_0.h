#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A3CFC20DC3954F5C;
namespace MoleMole { class UIEquipStateController; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CDF30)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__TOGGLEDELETE_B__0_OFFSET UNITYSDK_OFFSET(0xB2CDF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController___c__DisplayClass20_0_TypeDefinitionIndex = 70498;

	class UIEquipStateController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_2_A3CFC20DC3954F5C* equip; // 0x10
		::MoleMole::UIEquipStateController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleDelete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___C__DISPLAYCLASS20_0__TOGGLEDELETE_B__0_OFFSET))(this);
		}
	};
}
