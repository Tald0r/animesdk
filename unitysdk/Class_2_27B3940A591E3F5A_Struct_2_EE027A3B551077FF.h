#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_27B3940A591E3F5A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_27B3940A591E3F5A_STRUCT_2_EE027A3B551077FF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x32CA20)
#define CLASS_2_27B3940A591E3F5A_STRUCT_2_EE027A3B551077FF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C3CA0)

inline static constexpr unsigned int Class_2_27B3940A591E3F5A_Struct_2_EE027A3B551077FF_TypeDefinitionIndex = 41809;

struct alignas(8) Class_2_27B3940A591E3F5A_Struct_2_EE027A3B551077FF
{
	::Class_2_27B3940A591E3F5A* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_STRUCT_2_EE027A3B551077FF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_STRUCT_2_EE027A3B551077FF_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
