#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_27B3940A591E3F5A;
class Class_2_27B3940A591E3F5A_Class_1_17C5C526DA8076B3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_27B3940A591E3F5A_CLASS_1_17C5C526DA8076B3_STRUCT_2_957F2300CF95ED7B_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3361C0)
#define CLASS_2_27B3940A591E3F5A_CLASS_1_17C5C526DA8076B3_STRUCT_2_957F2300CF95ED7B_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x30F550)

inline static constexpr unsigned int Class_2_27B3940A591E3F5A_Class_1_17C5C526DA8076B3_Struct_2_957F2300CF95ED7B_4_TypeDefinitionIndex = 65960;

struct alignas(8) Class_2_27B3940A591E3F5A_Class_1_17C5C526DA8076B3_Struct_2_957F2300CF95ED7B_4
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_4; // 0x10
	::Class_2_27B3940A591E3F5A* Field_2_3; // 0x18
	::Class_2_27B3940A591E3F5A_Class_1_17C5C526DA8076B3* Field_2_2; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x28
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_CLASS_1_17C5C526DA8076B3_STRUCT_2_957F2300CF95ED7B_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_CLASS_1_17C5C526DA8076B3_STRUCT_2_957F2300CF95ED7B_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
