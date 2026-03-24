#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
namespace MoleMole { class UIBabeltowerPageController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDDA7900)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xDDAF7F0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0xDDAF9C0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0xDDAFB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass24_0_TypeDefinitionIndex = 73535;

	class UIBabeltowerPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::UnityEngine::Events::UnityAction* __9__1; // 0x18
		::System::Action* __9__2; // 0x20
		::UnityEngine::Animation* rootAnim; // 0x28
		::Class_2_60DDD9C206686F44* startConsoleBtn; // 0x30
		::Class_2_60DDD9C206686F44* btn; // 0x38
		::System::Int32 curPhase; // 0x40
		::System::Int32 lastPhase; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__1_OFFSET))(this);
		}

		::System::Void _SetLevelUpAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS24_0__SETLEVELUPANIMATION_B__2_OFFSET))(this);
		}
	};
}
