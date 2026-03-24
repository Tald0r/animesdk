#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A3CFC20DC3954F5C;
namespace MoleMole { class UIEquipDevelopPopWindowController; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA91A280)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__ONCLICKEQUIPLEVELBTN_B__2_OFFSET UNITYSDK_OFFSET(0xA91A290)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_2_TypeDefinitionIndex = 71931;

	class UIEquipDevelopPopWindowController___c__DisplayClass50_2 : public ::System::Object
	{
	public:
		::MoleMole::UIEquipDevelopPopWindowController* __4__this; // 0x10
		::Class_2_A3CFC20DC3954F5C* realItemData; // 0x18
		::System::UInt32 curlevel; // 0x20
		::System::Int32 rarity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__ONCLICKEQUIPLEVELBTN_B__2_OFFSET))(this);
		}
	};
}
