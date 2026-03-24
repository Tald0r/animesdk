#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_54491056660B0A90;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_54491056660B0A90_STRUCT_2_65AD3EE4EE9F5369_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x318190)
#define CLASS_1_54491056660B0A90_STRUCT_2_65AD3EE4EE9F5369_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_54491056660B0A90_Struct_2_65AD3EE4EE9F5369_TypeDefinitionIndex = 66538;

struct alignas(8) Class_1_54491056660B0A90_Struct_2_65AD3EE4EE9F5369
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_1_54491056660B0A90* Field_2_2; // 0x30
	::System::Threading::CancellationTokenSource* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54491056660B0A90_STRUCT_2_65AD3EE4EE9F5369_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_54491056660B0A90_STRUCT_2_65AD3EE4EE9F5369_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
