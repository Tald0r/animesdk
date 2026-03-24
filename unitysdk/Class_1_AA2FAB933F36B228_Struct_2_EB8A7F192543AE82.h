#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_AA2FAB933F36B228;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_AA2FAB933F36B228_STRUCT_2_EB8A7F192543AE82_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x360D40)
#define CLASS_1_AA2FAB933F36B228_STRUCT_2_EB8A7F192543AE82_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2EA620)

inline static constexpr unsigned int Class_1_AA2FAB933F36B228_Struct_2_EB8A7F192543AE82_TypeDefinitionIndex = 73990;

struct alignas(8) Class_1_AA2FAB933F36B228_Struct_2_EB8A7F192543AE82
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_AA2FAB933F36B228* Field_2_3; // 0x30
	::System::Action* Field_2_4; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_5; // 0x40
	::System::Int32 Field_2_2; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA2FAB933F36B228_STRUCT_2_EB8A7F192543AE82_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_AA2FAB933F36B228_STRUCT_2_EB8A7F192543AE82_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
