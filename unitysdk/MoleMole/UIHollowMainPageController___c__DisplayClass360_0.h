#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS360_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9B570)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS360_0__REMOVEMISSION_B__0_OFFSET UNITYSDK_OFFSET(0x9EA92F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass360_0_TypeDefinitionIndex = 49560;

	class UIHollowMainPageController___c__DisplayClass360_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::UnityEngine::GameObject* go; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS360_0__CTOR_OFFSET))(this);
		}

		::System::Void _RemoveMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS360_0__REMOVEMISSION_B__0_OFFSET))(this);
		}
	};
}
