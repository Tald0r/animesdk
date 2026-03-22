#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS352_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA40F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS352_0__PLAYFADEINSWITCHSCENE_B__1_OFFSET UNITYSDK_OFFSET(0xBFA4100)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass352_0_TypeDefinitionIndex = 54663;

	class UIGalgamePageController___c__DisplayClass352_0 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* stageCanvasGroup; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS352_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeInSwitchScene_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS352_0__PLAYFADEINSWITCHSCENE_B__1_OFFSET))(this);
		}
	};
}
