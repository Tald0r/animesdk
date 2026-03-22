#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9A931A6A933A5644;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_9A931A6A933A5644_STRUCT_2_EC2E239A8F58B972_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33FD90)
#define CLASS_1_9A931A6A933A5644_STRUCT_2_EC2E239A8F58B972_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_9A931A6A933A5644_Struct_2_EC2E239A8F58B972_TypeDefinitionIndex = 74849;

struct alignas(8) Class_1_9A931A6A933A5644_Struct_2_EC2E239A8F58B972
{
	::Class_1_9A931A6A933A5644* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x30
	::PipelineCamera::ScopedDelegateHandle Field_2_3; // 0x40
	::Class_1_9A931A6A933A5644_Struct_2_486D88986C0FC677 Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_STRUCT_2_EC2E239A8F58B972_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_9A931A6A933A5644_STRUCT_2_EC2E239A8F58B972_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
