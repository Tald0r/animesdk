#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_C98CD2116E71F5C1;
class Class_2_EC5A7AD641CF932C;
class Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781;
class Class_2_EC5A7AD641CF932C_Class_1_DA82EF581ED447E8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x335810)
#define CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Struct_2_4DD9FDBDEFE5FC24_2_TypeDefinitionIndex = 66571;

struct alignas(8) Class_2_EC5A7AD641CF932C_Struct_2_4DD9FDBDEFE5FC24_2
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781*> Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x28
	::Class_2_C98CD2116E71F5C1* Field_2_6; // 0x38
	::Class_2_EC5A7AD641CF932C* Field_2_4; // 0x40
	::Class_2_EC5A7AD641CF932C_Class_1_DA82EF581ED447E8* Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::System::Int32 Field_2_8; // 0x54
	::System::Int32 Field_2_2; // 0x58
	::System::Boolean Field_2_3; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_STRUCT_2_4DD9FDBDEFE5FC24_2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
