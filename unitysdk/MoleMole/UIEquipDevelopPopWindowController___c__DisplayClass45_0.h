#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_240;
class Class_2_758D4E94CC1C6B2A;
class Class_3_9F091E965E210217_18;
namespace MoleMole { class UIEquipDevelopPopWindowController; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95E3450)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTARUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x95E3460)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass45_0_TypeDefinitionIndex = 53587;

	class UIEquipDevelopPopWindowController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_3_9F091E965E210217_18* serverInfo; // 0x10
		::MoleMole::UIEquipDevelopPopWindowController* __4__this; // 0x18
		::Class_2_208CC9941471731A_240* itemConfig; // 0x20
		::Class_2_758D4E94CC1C6B2A* weaponConfig; // 0x28
		::System::Int32 maxStar; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStarUpView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS45_0__REFRESHSTARUPVIEW_B__0_OFFSET))(this);
		}
	};
}
