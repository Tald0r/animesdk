#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8F6F43710765B0C1___C_STRUCT_2_A5C20279B69FE34B_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4CC8D0)
#define CLASS_1_8F6F43710765B0C1___C_STRUCT_2_A5C20279B69FE34B_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1___c_Struct_2_A5C20279B69FE34B_2_TypeDefinitionIndex = 54043;

struct alignas(8) Class_1_8F6F43710765B0C1___c_Struct_2_A5C20279B69FE34B_2
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1___C_STRUCT_2_A5C20279B69FE34B_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1___C_STRUCT_2_A5C20279B69FE34B_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
