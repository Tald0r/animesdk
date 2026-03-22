#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_816B4C9B5795CC21_Class_1_91597CDD1AE0159E;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_816B4C9B5795CC21_CLASS_1_91597CDD1AE0159E_STRUCT_2_A41BECC15EC1D908_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2CA880)
#define CLASS_3_816B4C9B5795CC21_CLASS_1_91597CDD1AE0159E_STRUCT_2_A41BECC15EC1D908_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2CA890)

inline static constexpr unsigned int Class_3_816B4C9B5795CC21_Class_1_91597CDD1AE0159E_Struct_2_A41BECC15EC1D908_TypeDefinitionIndex = 39193;

struct alignas(8) Class_3_816B4C9B5795CC21_Class_1_91597CDD1AE0159E_Struct_2_A41BECC15EC1D908
{
	::Class_3_816B4C9B5795CC21_Class_1_91597CDD1AE0159E* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_91597CDD1AE0159E_STRUCT_2_A41BECC15EC1D908_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_816B4C9B5795CC21_CLASS_1_91597CDD1AE0159E_STRUCT_2_A41BECC15EC1D908_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
