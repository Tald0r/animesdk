#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_A1E11F94C1500ACE;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_A1E11F94C1500ACE_STRUCT_2_AB99B9D296E25851_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2C74A0)
#define CLASS_2_A1E11F94C1500ACE_STRUCT_2_AB99B9D296E25851_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_A1E11F94C1500ACE_Struct_2_AB99B9D296E25851_TypeDefinitionIndex = 46936;

struct alignas(8) Class_2_A1E11F94C1500ACE_Struct_2_AB99B9D296E25851
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x18
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::Class_2_A1E11F94C1500ACE* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40
	::System::Single Field_2_6; // 0x44
	::System::Single Field_2_5; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE_STRUCT_2_AB99B9D296E25851_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_A1E11F94C1500ACE_STRUCT_2_AB99B9D296E25851_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
