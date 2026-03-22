#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A42176356451713A;
namespace MoleMole { class UIMiniscapeMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC09F70)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__0_OFFSET UNITYSDK_OFFSET(0xAC09F80)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__2_OFFSET UNITYSDK_OFFSET(0xAC0A230)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController___c__DisplayClass20_0_TypeDefinitionIndex = 40661;

	class UIMiniscapeMainPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeMainPageController* __4__this; // 0x10
		::Class_2_A42176356451713A* model; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 curExp; // 0x28
		::System::Int32 curLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayLevelUpgrade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__0_OFFSET))(this);
		}

		::System::Void _PlayLevelUpgrade_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__2_OFFSET))(this);
		}
	};
}
