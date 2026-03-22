#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_27B3940A591E3F5A;
class Class_2_27B3940A591E3F5A_Class_1_44B92FA7BCBC00D7;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_27B3940A591E3F5A_CLASS_1_44B92FA7BCBC00D7_STRUCT_2_957F2300CF95ED7B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x36E160)
#define CLASS_2_27B3940A591E3F5A_CLASS_1_44B92FA7BCBC00D7_STRUCT_2_957F2300CF95ED7B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C7C30)

inline static constexpr unsigned int Class_2_27B3940A591E3F5A_Class_1_44B92FA7BCBC00D7_Struct_2_957F2300CF95ED7B_TypeDefinitionIndex = 41802;

struct alignas(8) Class_2_27B3940A591E3F5A_Class_1_44B92FA7BCBC00D7_Struct_2_957F2300CF95ED7B
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_2_27B3940A591E3F5A_Class_1_44B92FA7BCBC00D7* Field_2_2; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_4; // 0x38
	::Class_2_27B3940A591E3F5A* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_CLASS_1_44B92FA7BCBC00D7_STRUCT_2_957F2300CF95ED7B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_CLASS_1_44B92FA7BCBC00D7_STRUCT_2_957F2300CF95ED7B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
