#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F2DAD7F45F518868;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x30FE00)
#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

inline static constexpr unsigned int NPCAvatarUtils__StartChangeMeshLOD_d__37_TypeDefinitionIndex = 48376;

struct alignas(8) NPCAvatarUtils__StartChangeMeshLOD_d__37
{
	::Class_3_9AE843FF905C0BDB* materialComponent; // 0x10
	::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* _tasks_5__3; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
	::Class_3_F2DAD7F45F518868* npcComp; // 0x38
	::System::Threading::CancellationToken cancellationToken; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x48
	::System::Boolean _useGpuLod_5__4; // 0x58
	::System::Boolean forceNoFade; // 0x59
	::System::Boolean _needFade_5__2; // 0x5A
	::System::Int32 __1__state; // 0x5C
	::NPCCrowd::Lod::ELODLevel lod; // 0x60
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
