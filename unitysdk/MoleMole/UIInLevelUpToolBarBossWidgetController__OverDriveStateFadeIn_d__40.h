#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x340910)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelUpToolBarBossWidgetController__OverDriveStateFadeIn_d__40_TypeDefinitionIndex = 71771;

	struct alignas(8) UIInLevelUpToolBarBossWidgetController__OverDriveStateFadeIn_d__40
	{
		::MoleMole::UIInLevelUpToolBarBossWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
