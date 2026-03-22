#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_CA5AE22C0A4482A2;
class Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x34B730)
#define CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_Struct_2_6B65848E21B45D2A_1_TypeDefinitionIndex = 55457;

struct alignas(8) Class_2_CA5AE22C0A4482A2_Struct_2_6B65848E21B45D2A_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_CA5AE22C0A4482A2* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::Class_2_CA5AE22C0A4482A2_Class_1_4F7CF8049BCF140A_2* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_STRUCT_2_6B65848E21B45D2A_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
