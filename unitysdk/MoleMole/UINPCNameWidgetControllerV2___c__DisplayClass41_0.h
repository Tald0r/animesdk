#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINPCNameWidgetControllerV2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA22B100)
#define MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS41_0__PLAYDIFFTRACKICONANIM_B__0_OFFSET UNITYSDK_OFFSET(0xA22B110)

namespace MoleMole
{
	inline static constexpr unsigned int UINPCNameWidgetControllerV2___c__DisplayClass41_0_TypeDefinitionIndex = 42648;

	class UINPCNameWidgetControllerV2___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* trackIconObject; // 0x10
		::MoleMole::UINPCNameWidgetControllerV2* __4__this; // 0x18
		::UnityEngine::Animation* trackIconAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayDiffTrackIconAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINPCNAMEWIDGETCONTROLLERV2___C__DISPLAYCLASS41_0__PLAYDIFFTRACKICONANIM_B__0_OFFSET))(this);
		}
	};
}
