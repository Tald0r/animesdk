#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_1DC99F3008D2ACD0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_1D09F395F9763127_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x31D230)
#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_1D09F395F9763127_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_Struct_2_1D09F395F9763127_TypeDefinitionIndex = 36684;

struct alignas(8) Class_1_1DC99F3008D2ACD0_Struct_2_1D09F395F9763127
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Class_1_1DC99F3008D2ACD0* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter Field_2_7; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::UnityEngine::Vector3Int Field_2_3; // 0x44
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter Field_2_6; // 0x50
	::System::Boolean Field_2_5; // 0x51

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_1D09F395F9763127_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_1D09F395F9763127_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
