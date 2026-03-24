#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_320;
class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_E058BF9CB4006046_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x37B930)
#define CLASS_2_3CC769D284A54927_STRUCT_2_E058BF9CB4006046_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_E058BF9CB4006046_1_TypeDefinitionIndex = 67789;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_E058BF9CB4006046_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x20
	::Class_2_3CC769D284A54927* Field_2_2; // 0x30
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::Class_2_208CC9941471731A_320* Field_2_4; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Single Field_2_5; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_E058BF9CB4006046_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_E058BF9CB4006046_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
