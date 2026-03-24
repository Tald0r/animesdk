#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_5;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_510AA82C8B8CAF1E_STRUCT_2_9D2EC0204F1FCEC5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AA880)
#define CLASS_1_510AA82C8B8CAF1E_STRUCT_2_9D2EC0204F1FCEC5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_510AA82C8B8CAF1E_Struct_2_9D2EC0204F1FCEC5_TypeDefinitionIndex = 37899;

struct alignas(8) Class_1_510AA82C8B8CAF1E_Struct_2_9D2EC0204F1FCEC5
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::String* Field_2_3; // 0x20
	::Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_5* Field_2_4; // 0x28
	::System::Action* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::System::Int32 Field_2_0; // 0x48
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_STRUCT_2_9D2EC0204F1FCEC5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_STRUCT_2_9D2EC0204F1FCEC5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
