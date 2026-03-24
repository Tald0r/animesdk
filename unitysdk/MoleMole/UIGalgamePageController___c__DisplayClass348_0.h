#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS348_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC10E1F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS348_0__PLAYNORMALFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xC10E200)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass348_0_TypeDefinitionIndex = 58894;

	class UIGalgamePageController___c__DisplayClass348_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::UnityEngine::CanvasGroup* stageCanvasGroup; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS348_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNormalFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS348_0__PLAYNORMALFADEIN_B__0_OFFSET))(this);
		}
	};
}
