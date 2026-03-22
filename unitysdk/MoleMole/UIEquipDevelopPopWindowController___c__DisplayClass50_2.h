#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A3CFC20DC3954F5C_1;
namespace MoleMole { class UIEquipDevelopPopWindowController; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F0610)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_2__ONCLICKEQUIPLEVELBTN_B__2_OFFSET UNITYSDK_OFFSET(0xA8F0620)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_2_TypeDefinitionIndex = 53586;

	class UIEquipDevelopPopWindowController___c__DisplayClass50_2 : public ::System::Object
	{
	public:
		::Class_2_A3CFC20DC3954F5C_1* realItemData; // 0x10
		::MoleMole::UIEquipDevelopPopWindowController* __4__this; // 0x18
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
