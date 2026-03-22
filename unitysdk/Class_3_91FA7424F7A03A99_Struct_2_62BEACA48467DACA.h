#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_91FA7424F7A03A99;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_91FA7424F7A03A99_STRUCT_2_62BEACA48467DACA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35DB20)
#define CLASS_3_91FA7424F7A03A99_STRUCT_2_62BEACA48467DACA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_3_91FA7424F7A03A99_Struct_2_62BEACA48467DACA_TypeDefinitionIndex = 58679;

struct alignas(8) Class_3_91FA7424F7A03A99_Struct_2_62BEACA48467DACA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x18
	::Class_3_91FA7424F7A03A99* Field_2_2; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91FA7424F7A03A99_STRUCT_2_62BEACA48467DACA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_91FA7424F7A03A99_STRUCT_2_62BEACA48467DACA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
