#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_1EFB81F7F12851D4;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2F7130)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_4_TypeDefinitionIndex = 66569;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_6B65848E21B45D2A_4
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_EC5A7AD641CF932C_Class_1_1EFB81F7F12851D4* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::Class_2_EC5A7AD641CF932C* Field_2_2; // 0x38
	::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_6B65848E21B45D2A_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
