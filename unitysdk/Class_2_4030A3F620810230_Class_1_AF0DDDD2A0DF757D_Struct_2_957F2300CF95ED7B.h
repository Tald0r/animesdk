#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_4030A3F620810230_Class_1_AF0DDDD2A0DF757D;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_4030A3F620810230_CLASS_1_AF0DDDD2A0DF757D_STRUCT_2_957F2300CF95ED7B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2F15E0)
#define CLASS_2_4030A3F620810230_CLASS_1_AF0DDDD2A0DF757D_STRUCT_2_957F2300CF95ED7B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2EA620)

inline static constexpr unsigned int Class_2_4030A3F620810230_Class_1_AF0DDDD2A0DF757D_Struct_2_957F2300CF95ED7B_TypeDefinitionIndex = 60021;

struct alignas(8) Class_2_4030A3F620810230_Class_1_AF0DDDD2A0DF757D_Struct_2_957F2300CF95ED7B
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_2_4030A3F620810230_Class_1_AF0DDDD2A0DF757D* Field_2_2; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4030A3F620810230_CLASS_1_AF0DDDD2A0DF757D_STRUCT_2_957F2300CF95ED7B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_4030A3F620810230_CLASS_1_AF0DDDD2A0DF757D_STRUCT_2_957F2300CF95ED7B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
