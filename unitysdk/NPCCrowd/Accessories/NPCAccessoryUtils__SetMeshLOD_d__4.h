#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETMESHLOD_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2C99D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETMESHLOD_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils__SetMeshLOD_d__4_TypeDefinitionIndex = 75212;

	struct alignas(8) NPCAccessoryUtils__SetMeshLOD_d__4
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::NPCCrowd::Accessories::NPCAccessory* acc; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Boolean shouldFade; // 0x30
		::System::Int32 __1__state; // 0x34
		::NPCCrowd::Lod::ELODLevel oldLod; // 0x38
		::NPCCrowd::Lod::ELODLevel lod; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETMESHLOD_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS__SETMESHLOD_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
