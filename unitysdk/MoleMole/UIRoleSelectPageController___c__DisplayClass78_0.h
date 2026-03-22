#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA50720)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__ONSELECTCAMPIDLEACTIVITY_B__0_OFFSET UNITYSDK_OFFSET(0xCA50730)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__ONSELECTCAMPIDLEACTIVITY_B__1_OFFSET UNITYSDK_OFFSET(0xCA507D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass78_0_TypeDefinitionIndex = 51296;

	class UIRoleSelectPageController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIRoleSelectPageController* __4__this; // 0x18
		::System::Int32 nodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectCampIdleActivity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__ONSELECTCAMPIDLEACTIVITY_B__0_OFFSET))(this);
		}

		::System::Void _OnSelectCampIdleActivity_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS78_0__ONSELECTCAMPIDLEACTIVITY_B__1_OFFSET))(this);
		}
	};
}
