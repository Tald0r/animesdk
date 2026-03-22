#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_553BC80C0A542A3A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3187B0)
#define CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_553BC80C0A542A3A_Struct_2_D473F93BD6D472D2_TypeDefinitionIndex = 38448;

struct alignas(8) Class_1_553BC80C0A542A3A_Struct_2_D473F93BD6D472D2
{
	::System::Threading::CancellationToken Field_2_3; // 0x10
	::Class_1_553BC80C0A542A3A* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_553BC80C0A542A3A_STRUCT_2_D473F93BD6D472D2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
