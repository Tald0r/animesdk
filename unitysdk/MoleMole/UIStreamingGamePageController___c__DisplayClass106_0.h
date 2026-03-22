#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStreamingGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB6F10)
#define MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xBEB6F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGamePageController___c__DisplayClass106_0_TypeDefinitionIndex = 51509;

	class UIStreamingGamePageController___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStreamingGamePageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS106_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMEPAGECONTROLLER___C__DISPLAYCLASS106_0__PLAYFADEOUT_B__0_OFFSET))(this);
		}
	};
}
