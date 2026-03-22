#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8F6F43710765B0C1;
class Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7;
class Class_1_8F6F43710765B0C1_Class_1_ACB37ECEDD0477B4_1;
class Class_1_8F6F43710765B0C1_Class_1_F1C53540FBA79864_1;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8F6F43710765B0C1_STRUCT_2_AC3B69DB815B15CB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35BBF0)
#define CLASS_1_8F6F43710765B0C1_STRUCT_2_AC3B69DB815B15CB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_8F6F43710765B0C1_Struct_2_AC3B69DB815B15CB_TypeDefinitionIndex = 54074;

struct alignas(8) Class_1_8F6F43710765B0C1_Struct_2_AC3B69DB815B15CB
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_8F6F43710765B0C1_Class_1_F1C53540FBA79864_1* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x28
	::Class_1_8F6F43710765B0C1_Class_1_ACB37ECEDD0477B4_1* Field_2_6; // 0x38
	::Class_1_8F6F43710765B0C1* Field_2_2; // 0x40
	::Class_1_8F6F43710765B0C1_Class_1_4E271783D45CB8C7* Field_2_8; // 0x48
	::System::Action* Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x58
	::System::Boolean Field_2_7; // 0x5C
	::System::Int32 Field_2_3; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_STRUCT_2_AC3B69DB815B15CB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8F6F43710765B0C1_STRUCT_2_AC3B69DB815B15CB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
