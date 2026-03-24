#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D1CEAEE0A00DE993;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x368050)
#define CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_1_D1CEAEE0A00DE993_Struct_2_561BF3C0E526909C_TypeDefinitionIndex = 39039;

struct alignas(8) Class_1_D1CEAEE0A00DE993_Struct_2_561BF3C0E526909C
{
	::Class_1_D1CEAEE0A00DE993* Field_2_2; // 0x10
	::System::Action* Field_2_3; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x30
	::System::Int32 Field_2_0; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_D1CEAEE0A00DE993_STRUCT_2_561BF3C0E526909C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
