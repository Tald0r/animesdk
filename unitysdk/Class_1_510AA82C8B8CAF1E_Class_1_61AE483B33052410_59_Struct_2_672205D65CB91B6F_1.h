#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_59;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_510AA82C8B8CAF1E_CLASS_1_61AE483B33052410_59_STRUCT_2_672205D65CB91B6F_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x364740)
#define CLASS_1_510AA82C8B8CAF1E_CLASS_1_61AE483B33052410_59_STRUCT_2_672205D65CB91B6F_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_59_Struct_2_672205D65CB91B6F_1_TypeDefinitionIndex = 57805;

struct alignas(8) Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_59_Struct_2_672205D65CB91B6F_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_510AA82C8B8CAF1E_Class_1_61AE483B33052410_59* Field_2_2; // 0x20
	::System::Int32 Field_2_0; // 0x28
	::System::Int32 Field_2_3; // 0x2C
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter Field_2_4; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_CLASS_1_61AE483B33052410_59_STRUCT_2_672205D65CB91B6F_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_510AA82C8B8CAF1E_CLASS_1_61AE483B33052410_59_STRUCT_2_672205D65CB91B6F_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
