#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB282320)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS42_0__ENSUREONGOINGFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xB282330)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass42_0_TypeDefinitionIndex = 45789;

	class UIChatPlusPageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsureOnGoingFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS42_0__ENSUREONGOINGFADEIN_B__0_OFFSET))(this);
		}
	};
}
