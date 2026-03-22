#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_12D8362BCAA699A2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_12D8362BCAA699A2_STRUCT_2_3CCB8209FBDD8A6E_10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33F4A0)
#define CLASS_2_12D8362BCAA699A2_STRUCT_2_3CCB8209FBDD8A6E_10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_12D8362BCAA699A2_Struct_2_3CCB8209FBDD8A6E_10_TypeDefinitionIndex = 63775;

struct alignas(8) Class_2_12D8362BCAA699A2_Struct_2_3CCB8209FBDD8A6E_10
{
	::Class_2_12D8362BCAA699A2* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12D8362BCAA699A2_STRUCT_2_3CCB8209FBDD8A6E_10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_12D8362BCAA699A2_STRUCT_2_3CCB8209FBDD8A6E_10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
