#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalGameNPCFadeAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF0700)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__0_OFFSET UNITYSDK_OFFSET(0xBFF0A40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__1_OFFSET UNITYSDK_OFFSET(0xBFF0710)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__2_OFFSET UNITYSDK_OFFSET(0xBFF09F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass380_0_TypeDefinitionIndex = 54684;

	class UIGalgamePageController___c__DisplayClass380_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalGameNPCFadeAction*>* fadeActions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__1_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__2_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS380_0__PLAYNPCFADEACTIONS_B__0_OFFSET))(this);
		}
	};
}
