#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8F6F43710765B0C1_Class_1_ED5F9DB290CE9C2F;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8F6F43710765B0C1_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x316CD0)
#define CLASS_1_8F6F43710765B0C1_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Class_1_ED5F9DB290CE9C2F_Struct_2_B3D88B315575B7BE_TypeDefinitionIndex = 44499;

struct alignas(8) Class_1_8F6F43710765B0C1_Class_1_ED5F9DB290CE9C2F_Struct_2_B3D88B315575B7BE
{
	::Class_1_8F6F43710765B0C1_Class_1_ED5F9DB290CE9C2F* Field_2_3; // 0x10
	::System::Threading::CancellationToken Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::System::UInt64 Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_5; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_CLASS_1_ED5F9DB290CE9C2F_STRUCT_2_B3D88B315575B7BE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
