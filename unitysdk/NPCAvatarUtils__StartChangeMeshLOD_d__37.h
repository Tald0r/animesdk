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

#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2C9190)
#define NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int NPCAvatarUtils__StartChangeMeshLOD_d__37_TypeDefinitionIndex = 50619;

struct alignas(8) NPCAvatarUtils__StartChangeMeshLOD_d__37
{
	::System::Threading::CancellationToken cancellationToken; // 0x10
	::Class_3_F2DAD7F45F518868* npcComp; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x20
	::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* _tasks_5__3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
	::Class_3_9AE843FF905C0BDB* materialComponent; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x50
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x58
	::NPCCrowd::Lod::ELODLevel lod; // 0x5C
	::System::Int32 __1__state; // 0x60
	::System::Boolean _needFade_5__2; // 0x64
	::System::Boolean forceNoFade; // 0x65
	::System::Boolean _useGpuLod_5__4; // 0x66

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__STARTCHANGEMESHLOD_D__37_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
