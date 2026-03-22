#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatPlusPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA528550)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS67_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xA528560)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass67_0_TypeDefinitionIndex = 46033;

	class UIChatPlusPageController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIChatPlusPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsurePreviousNodeFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS67_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET))(this);
		}
	};
}
