#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_CA5AE22C0A4482A2;
class Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x358AF0)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_6B65848E21B45D2A_6_TypeDefinitionIndex = 80292;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_6B65848E21B45D2A_6
{
	::Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_1* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
