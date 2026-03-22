#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33C1B0)
#define NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

inline static constexpr unsigned int NPCAvatarUtils__LoadMeshGPULODAsync_d__18_TypeDefinitionIndex = 50630;

struct alignas(8) NPCAvatarUtils__LoadMeshGPULODAsync_d__18
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Mesh*>*> __u__1; // 0x10
	::NPCAvatarMeshAssetsSO* assetSo; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
	::System::Threading::CancellationToken cancellationToken; // 0x40
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x48
	::System::Int32 __1__state; // 0x50
	::NPCCrowd::Lod::ELODLevel lod; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
