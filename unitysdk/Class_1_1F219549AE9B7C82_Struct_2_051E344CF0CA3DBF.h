#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define CLASS_1_1F219549AE9B7C82_STRUCT_2_051E344CF0CA3DBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4199F0)
#define CLASS_1_1F219549AE9B7C82_STRUCT_2_051E344CF0CA3DBF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Struct_2_051E344CF0CA3DBF_TypeDefinitionIndex = 62810;

struct alignas(8) Class_1_1F219549AE9B7C82_Struct_2_051E344CF0CA3DBF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::System::String* Field_2_3; // 0x20
	::UnityEngine::AnimationState* Field_2_4; // 0x28
	::UnityEngine::Animation* Field_2_2; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x3C
	::System::Int32 Field_2_0; // 0x40
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_7; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_051E344CF0CA3DBF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_STRUCT_2_051E344CF0CA3DBF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
