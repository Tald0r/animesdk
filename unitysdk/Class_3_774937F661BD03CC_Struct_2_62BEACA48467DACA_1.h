#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/System/ValueType.h"

class Class_3_774937F661BD03CC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x35DD80)
#define CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_3_774937F661BD03CC_Struct_2_62BEACA48467DACA_1_TypeDefinitionIndex = 40769;

struct alignas(8) Class_3_774937F661BD03CC_Struct_2_62BEACA48467DACA_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Class_3_774937F661BD03CC* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x20
	::Struct_2_FE667B282E242C72 Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_774937F661BD03CC_STRUCT_2_62BEACA48467DACA_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
