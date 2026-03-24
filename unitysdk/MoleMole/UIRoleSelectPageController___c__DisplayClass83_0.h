#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA69CCB0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__FADEOUTANDCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0xA69CCC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass83_0_TypeDefinitionIndex = 79388;

	class UIRoleSelectPageController___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::System::Action* afterFadeAction; // 0x10
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOutAndClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS83_0__FADEOUTANDCLOSE_B__0_OFFSET))(this);
		}
	};
}
