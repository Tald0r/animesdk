#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_4;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x323CC0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__Pull_d__12_TypeDefinitionIndex = 41671;

	struct alignas(8) GroupVariableHelper__Pull_d__12
	{
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* resultTcs; // 0x10
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_4*> __u__1; // 0x30
		::System::UInt32 groupID; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
