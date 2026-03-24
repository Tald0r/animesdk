#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINPCNameWidgetControllerV2; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA22B170)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS43_0__PLAYTRACKICONANIM_B__0_OFFSET UNITYSDK_OFFSET(0xA22B180)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2___c__DisplayClass43_0_TypeDefinitionIndex = 42646;

	class UINPCNameWidgetControllerV2___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action* cb; // 0x10
		::MoleMole::UINPCNameWidgetControllerV2* __4__this; // 0x18
		::UnityEngine::GameObject* trackIconObject; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTrackIconAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS43_0__PLAYTRACKICONANIM_B__0_OFFSET))(this);
		}
	};
}
