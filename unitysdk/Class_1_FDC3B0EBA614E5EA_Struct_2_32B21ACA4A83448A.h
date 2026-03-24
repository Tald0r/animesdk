#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_FDC3B0EBA614E5EA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_FDC3B0EBA614E5EA_STRUCT_2_32B21ACA4A83448A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3AA8B0)
#define CLASS_1_FDC3B0EBA614E5EA_STRUCT_2_32B21ACA4A83448A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_FDC3B0EBA614E5EA_Struct_2_32B21ACA4A83448A_TypeDefinitionIndex = 57443;

struct alignas(8) Class_1_FDC3B0EBA614E5EA_Struct_2_32B21ACA4A83448A
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_5; // 0x18
	::System::Threading::CancellationToken Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::Class_1_FDC3B0EBA614E5EA* Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_STRUCT_2_32B21ACA4A83448A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_STRUCT_2_32B21ACA4A83448A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
