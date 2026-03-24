#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C28F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesAsync_d__23_TypeDefinitionIndex = 51669;

	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesAsync_d__23
	{
		::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*> __u__2; // 0x28
		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* _parts_5__4; // 0x48
		::System::Threading::CancellationToken cancellationToken; // 0x50
		::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*> _partTask_5__2; // 0x58
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x70
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*>> __t__builder; // 0x78
		::UnityEngine::GameObject* avatarGo; // 0x98
		::NPCAvatarMeshAssetsSO* assetSo; // 0xA0
		::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*> _accessoryTask_5__3; // 0xA8
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*> __u__3; // 0xC0
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0xD8
		::System::Int32 logID; // 0xE0
		::System::Boolean enableGPULod; // 0xE4
		::System::Int32 __1__state; // 0xE8

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESASYNC_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
