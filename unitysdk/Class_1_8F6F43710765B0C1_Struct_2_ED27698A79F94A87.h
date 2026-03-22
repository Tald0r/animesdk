#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7471DEF8EA38C73D;
class Class_1_8F6F43710765B0C1;
class Class_1_8F6F43710765B0C1_Class_1_DC01E1F07A0475E5_12;
class Class_1_8F6F43710765B0C1_Class_1_F1C53540FBA79864_3;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8F6F43710765B0C1_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x32E5D0)
#define CLASS_1_8F6F43710765B0C1_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Struct_2_ED27698A79F94A87_TypeDefinitionIndex = 54064;

struct alignas(8) Class_1_8F6F43710765B0C1_Struct_2_ED27698A79F94A87
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_8F6F43710765B0C1_Class_1_DC01E1F07A0475E5_12* Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x28
	::Class_1_8F6F43710765B0C1_Class_1_F1C53540FBA79864_3* Field_2_6; // 0x38
	::Class_1_8F6F43710765B0C1* Field_2_4; // 0x40
	::System::Action* Field_2_3; // 0x48
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_9; // 0x50
	::Class_1_7471DEF8EA38C73D* Field_2_7; // 0x58
	::System::Action* Field_2_2; // 0x60
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_8; // 0x68
	::System::Int32 Field_2_0; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_STRUCT_2_ED27698A79F94A87_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_STRUCT_2_ED27698A79F94A87_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
