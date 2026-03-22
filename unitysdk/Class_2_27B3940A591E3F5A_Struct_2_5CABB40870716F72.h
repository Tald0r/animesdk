#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_27B3940A591E3F5A;
class Class_2_27B3940A591E3F5A_Class_1_E90E2F66D681DA93;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_27B3940A591E3F5A_STRUCT_2_5CABB40870716F72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35AB70)
#define CLASS_2_27B3940A591E3F5A_STRUCT_2_5CABB40870716F72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2C3CA0)

inline static constexpr unsigned int Class_2_27B3940A591E3F5A_Struct_2_5CABB40870716F72_TypeDefinitionIndex = 41806;

struct alignas(8) Class_2_27B3940A591E3F5A_Struct_2_5CABB40870716F72
{
	::Class_2_27B3940A591E3F5A* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_6; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x20
	::Class_2_27B3940A591E3F5A_Class_1_E90E2F66D681DA93* Field_2_5; // 0x38
	::System::UInt32 Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x44
	::System::UInt32 Field_2_4; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_STRUCT_2_5CABB40870716F72_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_27B3940A591E3F5A_STRUCT_2_5CABB40870716F72_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
