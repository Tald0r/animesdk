#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatPlusPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB282340)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYMASKFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xB282350)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass52_0_TypeDefinitionIndex = 45786;

	class UIChatPlusPageController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Action* onFadeInCompleted; // 0x10
		::MoleMole::UIChatPlusPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMaskFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS52_0__PLAYMASKFADEIN_B__0_OFFSET))(this);
		}
	};
}
