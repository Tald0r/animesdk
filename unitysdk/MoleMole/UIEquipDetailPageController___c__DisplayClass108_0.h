#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEquipDetailPageController; }

#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA27AA00)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__PLAYVIDEOFORWEAPON_B__1_OFFSET UNITYSDK_OFFSET(0xA27AA10)
#define MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__PLAYVIDEOFORWEAPON_G__SETSTATE_0_OFFSET UNITYSDK_OFFSET(0xA27AB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDetailPageController___c__DisplayClass108_0_TypeDefinitionIndex = 54028;

	class UIEquipDetailPageController___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::MoleMole::UIEquipDetailPageController* __4__this; // 0x10
		::System::Int32 weaponItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayVideoForWeapon_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__PLAYVIDEOFORWEAPON_B__1_OFFSET))(this);
		}

		::System::Void _PlayVideoForWeapon_g__SetState_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDETAILPAGECONTROLLER___C__DISPLAYCLASS108_0__PLAYVIDEOFORWEAPON_G__SETSTATE_0_OFFSET))(this);
		}
	};
}
