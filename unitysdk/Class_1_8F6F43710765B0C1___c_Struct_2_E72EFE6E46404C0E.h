#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8F6F43710765B0C1___C_STRUCT_2_E72EFE6E46404C0E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35FEB0)
#define CLASS_1_8F6F43710765B0C1___C_STRUCT_2_E72EFE6E46404C0E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1___c_Struct_2_E72EFE6E46404C0E_TypeDefinitionIndex = 44518;

struct alignas(8) Class_1_8F6F43710765B0C1___c_Struct_2_E72EFE6E46404C0E
{
	::System::Threading::CancellationToken Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::UInt32 Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1___C_STRUCT_2_E72EFE6E46404C0E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1___C_STRUCT_2_E72EFE6E46404C0E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
