#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C1EF32C2DFB24FBB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_C1EF32C2DFB24FBB_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3995A0)
#define CLASS_3_C1EF32C2DFB24FBB_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x310210)

inline static constexpr unsigned int Class_3_C1EF32C2DFB24FBB_Struct_2_BF0EE534677AC54A_TypeDefinitionIndex = 77852;

struct alignas(8) Class_3_C1EF32C2DFB24FBB_Struct_2_BF0EE534677AC54A
{
	::Class_3_C1EF32C2DFB24FBB* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::System::Threading::CancellationTokenSource* Field_2_3; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1EF32C2DFB24FBB_STRUCT_2_BF0EE534677AC54A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_C1EF32C2DFB24FBB_STRUCT_2_BF0EE534677AC54A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
