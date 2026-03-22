#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x397C90)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_4_TypeDefinitionIndex = 46673;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_4
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x10
	::Class_2_3CC769D284A54927* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::System::Threading::CancellationToken Field_2_4; // 0x38
	::MoleMole::FishPosConfig* Field_2_14; // 0x40
	::MoleMole::FishMove3DCurve* Field_2_7; // 0x48
	::System::Single Field_2_13; // 0x50
	::System::Int32 Field_2_0; // 0x54
	::UnityEngine::Vector3 Field_2_12; // 0x58
	::System::Single Field_2_9; // 0x64
	::UnityEngine::Vector3 Field_2_10; // 0x68
	::UnityEngine::Vector3 Field_2_2; // 0x74
	::System::Boolean Field_2_5; // 0x80
	::UnityEngine::Vector3 Field_2_6; // 0x84
	::System::Single Field_2_8; // 0x90
	::UnityEngine::Vector3 Field_2_11; // 0x94

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
