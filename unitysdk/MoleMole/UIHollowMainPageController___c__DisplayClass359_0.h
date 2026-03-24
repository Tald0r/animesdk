#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC133A30)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__REMOVEMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xC133A40)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__REMOVEMISSION_B__1_OFFSET UNITYSDK_OFFSET(0xC133B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass359_0_TypeDefinitionIndex = 49580;

	class UIHollowMainPageController___c__DisplayClass359_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::UnityEngine::Animation* anim; // 0x20
		::UnityEngine::GameObject* go; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__CTOR_OFFSET))(this);
		}

		::System::Void _RemoveMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__REMOVEMISSION_B__0_OFFSET))(this);
		}

		::System::Void _RemoveMission_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS359_0__REMOVEMISSION_B__1_OFFSET))(this);
		}
	};
}
