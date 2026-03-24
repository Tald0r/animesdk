#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_741A783BB79E5BB9;
class Class_5_9D6FB76BC2C0051B;
class Class_5_9D6FB76BC2C0051B_Class_1_5E9723171F9C3B56;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_9D6FB76BC2C0051B_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x308E30)
#define CLASS_5_9D6FB76BC2C0051B_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_5_9D6FB76BC2C0051B_Struct_2_F9E2A202288A9BD4_TypeDefinitionIndex = 40083;

struct alignas(8) Class_5_9D6FB76BC2C0051B_Struct_2_F9E2A202288A9BD4
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_5_9D6FB76BC2C0051B_Class_1_5E9723171F9C3B56* Field_2_4; // 0x30
	::Class_5_9D6FB76BC2C0051B* Field_2_2; // 0x38
	::System::Threading::CancellationToken Field_2_3; // 0x40
	::Class_3_741A783BB79E5BB9* Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_STRUCT_2_F9E2A202288A9BD4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_9D6FB76BC2C0051B_STRUCT_2_F9E2A202288A9BD4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
