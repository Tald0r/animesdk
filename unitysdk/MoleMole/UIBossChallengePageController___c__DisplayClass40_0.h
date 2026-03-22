#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_375;
namespace MoleMole { class UIBossChallengePageController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB05640)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0xBB05650)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0xBB058B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__2_OFFSET UNITYSDK_OFFSET(0xBB058E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c__DisplayClass40_0_TypeDefinitionIndex = 77352;

	class UIBossChallengePageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_375*>* __9__2; // 0x10
		::MoleMole::UIBossChallengePageController* __4__this; // 0x18
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_375*>* __9__1; // 0x20
		::System::Boolean isResetAll; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnResetBtnClick_b__1(::System::Boolean b, ::Class_3_025FF4981524A424_375* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_375*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__1_OFFSET))(this, b, rsp);
		}

		::System::Void _OnResetBtnClick_b__2(::System::Boolean b, ::Class_3_025FF4981524A424_375* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_375*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS40_0__ONRESETBTNCLICK_B__2_OFFSET))(this, b, rsp);
		}
	};
}
