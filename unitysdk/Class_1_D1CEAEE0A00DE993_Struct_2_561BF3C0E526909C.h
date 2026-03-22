#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D1CEAEE0A00DE993;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33BBC0)
#define CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_D1CEAEE0A00DE993_Struct_2_561BF3C0E526909C_TypeDefinitionIndex = 69447;

struct alignas(8) Class_1_D1CEAEE0A00DE993_Struct_2_561BF3C0E526909C
{
	::Class_1_D1CEAEE0A00DE993* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::System::Action* Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
