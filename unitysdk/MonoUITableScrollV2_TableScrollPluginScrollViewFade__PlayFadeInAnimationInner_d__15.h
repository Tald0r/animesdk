#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_TableScrollPluginScrollViewFade;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2D70B0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15_TypeDefinitionIndex = 43814;

struct alignas(8) MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
	::MonoUITableScrollV2_TableScrollPluginScrollViewFade* __4__this; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_1F219549AE9B7C82_Enum_3_05F7423D39739F87> __u__1; // 0x20
	::System::Int32 __1__state; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
