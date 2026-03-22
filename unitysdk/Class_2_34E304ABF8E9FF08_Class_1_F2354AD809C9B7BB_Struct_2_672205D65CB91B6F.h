#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_34E304ABF8E9FF08_Class_1_F2354AD809C9B7BB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_34E304ABF8E9FF08_CLASS_1_F2354AD809C9B7BB_STRUCT_2_672205D65CB91B6F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x30FEC0)
#define CLASS_2_34E304ABF8E9FF08_CLASS_1_F2354AD809C9B7BB_STRUCT_2_672205D65CB91B6F_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_34E304ABF8E9FF08_Class_1_F2354AD809C9B7BB_Struct_2_672205D65CB91B6F_TypeDefinitionIndex = 41167;

struct alignas(8) Class_2_34E304ABF8E9FF08_Class_1_F2354AD809C9B7BB_Struct_2_672205D65CB91B6F
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_34E304ABF8E9FF08_Class_1_F2354AD809C9B7BB* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_F2354AD809C9B7BB_STRUCT_2_672205D65CB91B6F_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_34E304ABF8E9FF08_CLASS_1_F2354AD809C9B7BB_STRUCT_2_672205D65CB91B6F_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
