#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__PLAYANIMATION_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B67B0)
#define MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__PLAYANIMATION_D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengeCardRowWidgetController__PlayAnimation_d__37_TypeDefinitionIndex = 63593;

	struct alignas(8) UIDailyChallengeCardRowWidgetController__PlayAnimation_d__37
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::String* clipName; // 0x30
		::MoleMole::UIDailyChallengeCardRowWidgetController* __4__this; // 0x38
		::System::Threading::CancellationToken cts; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__PLAYANIMATION_D__37_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGECARDROWWIDGETCONTROLLER__PLAYANIMATION_D__37_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
