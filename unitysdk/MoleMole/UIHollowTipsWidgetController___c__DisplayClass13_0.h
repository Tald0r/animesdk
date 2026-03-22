#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowTipsWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA61C680)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0xA61C960)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__1_OFFSET UNITYSDK_OFFSET(0xA61C990)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__2_OFFSET UNITYSDK_OFFSET(0xA61CB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 76249;

	class UIHollowTipsWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowTipsWidgetController* __4__this; // 0x10
		::UnityEngine::Animation* textAnim; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 currentProgress; // 0x28
		::System::Int32 totalProgress; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowHollowChallenge_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__0_OFFSET))(this);
		}

		::System::Void _ShowHollowChallenge_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__1_OFFSET))(this);
		}

		::System::Void _ShowHollowChallenge_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SHOWHOLLOWCHALLENGE_B__2_OFFSET))(this);
		}
	};
}
