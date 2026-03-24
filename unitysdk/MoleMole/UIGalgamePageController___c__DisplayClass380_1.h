#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass380_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD5726F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_1__PLAYNPCFADEACTIONS_B__5_OFFSET UNITYSDK_OFFSET(0xD572700)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass380_1_TypeDefinitionIndex = 58912;

	class UIGalgamePageController___c__DisplayClass380_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass380_0* CS___8__locals1; // 0x10
		::System::Action* __9__5; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_1__PLAYNPCFADEACTIONS_B__5_OFFSET))(this);
		}
	};
}
