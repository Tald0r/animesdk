#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD2832B0)
#define MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS49_0__SETFULLSCREENCONNECTCUTSCENE_B__0_OFFSET UNITYSDK_OFFSET(0xD284180)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageController___c__DisplayClass49_0_TypeDefinitionIndex = 60589;

	class UIPerformPageController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIPerformPageController* __4__this; // 0x18
		::System::Single length; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFullScreenConnectCutScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTROLLER___C__DISPLAYCLASS49_0__SETFULLSCREENCONNECTCUTSCENE_B__0_OFFSET))(this);
		}
	};
}
