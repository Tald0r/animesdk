#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_D56F6AB76E65E40C;
class Class_3_9AE843FF905C0BDB;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2F1920)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7_TypeDefinitionIndex = 67773;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7
{
	::Class_3_9AE843FF905C0BDB* Field_2_24; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_14; // 0x18
	::UnityEngine::AnimationCurve* Field_2_19; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_23; // 0x28
	::Class_2_3CC769D284A54927_Class_1_D56F6AB76E65E40C* Field_2_4; // 0x38
	::UnityEngine::AnimationCurve* Field_2_17; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x48
	::MoleMole::Battle::Entity* Field_2_5; // 0x58
	::Class_2_3CC769D284A54927* Field_2_2; // 0x60
	::System::Single Field_2_15; // 0x68
	::System::Boolean Field_2_22; // 0x6C
	::System::Boolean Field_2_12; // 0x6D
	::System::Boolean Field_2_21; // 0x6E
	::System::Boolean Field_2_13; // 0x6F
	::System::Single Field_2_18; // 0x70
	::System::Single Field_2_20; // 0x74
	::System::Single Field_2_8; // 0x78
	::System::Int32 Field_2_0; // 0x7C
	::System::Single Field_2_6; // 0x80
	::System::Single Field_2_9; // 0x84
	::System::Single Field_2_11; // 0x88
	::System::Single Field_2_7; // 0x8C
	::System::Single Field_2_10; // 0x90
	::Class_2_3CC769D284A54927_Enum_3_3C549D6CCF7A45F3 Field_2_3; // 0x94
	::System::Single Field_2_16; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
