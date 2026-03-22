#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x73EAB20)
#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS25_0__SWITCHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x73EAB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreWidgetWidgetController___c__DisplayClass25_0_TypeDefinitionIndex = 46251;

	class UIVHSStoreWidgetWidgetController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* newInAnim; // 0x10
		::UnityEngine::Animation* newAnim; // 0x18
		::System::Action* onSwitch; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS25_0__SWITCHANIM_B__0_OFFSET))(this);
		}
	};
}
