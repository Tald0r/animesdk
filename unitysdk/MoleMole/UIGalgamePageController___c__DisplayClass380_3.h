#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController___c__DisplayClass380_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_3__CTOR_OFFSET UNITYSDK_OFFSET(0x6C5EA80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_3__PLAYNPCFADEACTIONS_B__9_OFFSET UNITYSDK_OFFSET(0x6C5EA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass380_3_TypeDefinitionIndex = 58900;

	class UIGalgamePageController___c__DisplayClass380_3 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass380_0* CS___8__locals3; // 0x10
		::System::Action* __9__9; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_3__PLAYNPCFADEACTIONS_B__9_OFFSET))(this);
		}
	};
}
