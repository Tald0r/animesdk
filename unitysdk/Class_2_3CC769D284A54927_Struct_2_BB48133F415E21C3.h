#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMoveParam; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B4D10)
#define CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_BB48133F415E21C3_TypeDefinitionIndex = 46642;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_BB48133F415E21C3
{
	::MoleMole::FishMoveParam* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Class_2_3CC769D284A54927* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::UnityEngine::Vector3 Field_2_3; // 0x44
	::System::Single Field_2_4; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_BB48133F415E21C3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
