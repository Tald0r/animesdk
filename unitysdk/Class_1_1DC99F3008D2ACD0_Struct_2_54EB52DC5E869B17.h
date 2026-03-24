#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_1DC99F3008D2ACD0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_54EB52DC5E869B17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36E660)
#define CLASS_1_1DC99F3008D2ACD0_STRUCT_2_54EB52DC5E869B17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_1DC99F3008D2ACD0_Struct_2_54EB52DC5E869B17_TypeDefinitionIndex = 38020;

struct alignas(8) Class_1_1DC99F3008D2ACD0_Struct_2_54EB52DC5E869B17
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x10
	::System::Threading::CancellationToken Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_1_1DC99F3008D2ACD0* Field_2_2; // 0x38
	::UnityEngine::Vector3Int Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_54EB52DC5E869B17_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1DC99F3008D2ACD0_STRUCT_2_54EB52DC5E869B17_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
