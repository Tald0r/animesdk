#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA30DBB0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__ENTERARCADEMACHINEPHASEFROMENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0xA30DBC0)
#define MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__ENTERARCADEMACHINEPHASEFROMENTRANCE_B__1_OFFSET UNITYSDK_OFFSET(0xA30DC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePageController___c__DisplayClass52_0_TypeDefinitionIndex = 66635;

	class UIArcadePageController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIArcadePageController* __4__this; // 0x18
		::System::Action* finishCB; // 0x20
		::System::Int32 arcadeId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterArcadeMachinePhaseFromEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__ENTERARCADEMACHINEPHASEFROMENTRANCE_B__0_OFFSET))(this);
		}

		::System::Void _EnterArcadeMachinePhaseFromEntrance_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPAGECONTROLLER___C__DISPLAYCLASS52_0__ENTERARCADEMACHINEPHASEFROMENTRANCE_B__1_OFFSET))(this);
		}
	};
}
