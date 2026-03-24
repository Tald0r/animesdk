#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_320;
class Class_2_3CC769D284A54927;
class Class_3_7E6E8DD3EAC12A67_8;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B24E0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_A4D586C756FA89EA_1_TypeDefinitionIndex = 67790;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_A4D586C756FA89EA_1
{
	::Class_2_3CC769D284A54927* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_7E6E8DD3EAC12A67_8*> Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x30
	::Class_2_208CC9941471731A_320* Field_2_4; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> Field_2_5; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x58
	::System::Int32 Field_2_3; // 0x68
	::System::Int32 Field_2_0; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_A4D586C756FA89EA_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
