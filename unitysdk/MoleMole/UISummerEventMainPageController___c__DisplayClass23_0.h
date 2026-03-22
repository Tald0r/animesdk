#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerEventMainPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA749F00)
#define MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__FINISHFADEINANDFADEOUT_G__PLAYFADEOUT_0_OFFSET UNITYSDK_OFFSET(0xA749F10)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventMainPageController___c__DisplayClass23_0_TypeDefinitionIndex = 74522;

	class UISummerEventMainPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::UnityEngine::Animation* root; // 0x18
		::MoleMole::UISummerEventMainPageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinishFadeInAndFadeOut_g__PlayFadeOut_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTMAINPAGECONTROLLER___C__DISPLAYCLASS23_0__FINISHFADEINANDFADEOUT_G__PLAYFADEOUT_0_OFFSET))(this);
		}
	};
}
