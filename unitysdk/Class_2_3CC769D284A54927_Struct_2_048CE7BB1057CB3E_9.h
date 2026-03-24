#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x366550)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_9_TypeDefinitionIndex = 67785;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_9
{
	::MoleMole::FishMoveParam* Field_2_5; // 0x10
	::MoleMole::FishPosConfig* Field_2_6; // 0x18
	::Class_2_3CC769D284A54927* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::UnityEngine::Vector3 Field_2_3; // 0x48
	::System::Single Field_2_12; // 0x54
	::System::Int32 Field_2_4; // 0x58
	::UnityEngine::Vector3 Field_2_8; // 0x5C
	::UnityEngine::Vector3 Field_2_7; // 0x68
	::System::Single Field_2_9; // 0x74
	::UnityEngine::Vector3 Field_2_10; // 0x78
	::System::Single Field_2_14; // 0x84
	::System::Single Field_2_13; // 0x88
	::System::Single Field_2_11; // 0x8C
	::System::Int32 Field_2_0; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_9_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
