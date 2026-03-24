#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B24D0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_10_TypeDefinitionIndex = 67802;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_10
{
	::MoleMole::FishMove3DCurve* Field_2_12; // 0x10
	::Class_2_3CC769D284A54927* Field_2_2; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::MoleMole::FishPosConfig* Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_16; // 0x38
	::UnityEngine::Vector3 Field_2_8; // 0x48
	::UnityEngine::Vector3 Field_2_10; // 0x54
	::System::Int32 Field_2_0; // 0x60
	::UnityEngine::Vector3 Field_2_3; // 0x64
	::System::Int32 Field_2_4; // 0x70
	::System::Int32 Field_2_5; // 0x74
	::System::Single Field_2_13; // 0x78
	::UnityEngine::Vector3 Field_2_7; // 0x7C
	::System::Single Field_2_9; // 0x88
	::System::Single Field_2_15; // 0x8C
	::System::Single Field_2_14; // 0x90
	::System::Single Field_2_11; // 0x94

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
