#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x33F480)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x259A50)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesGalgameAsync_d__28_TypeDefinitionIndex = 75887;

	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarPartsAndAccessoriesGalgameAsync_d__28
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*>> __u__1; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x38
		::NPCAvatarMeshAssetsSO* assetSo; // 0x40
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x48
		::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos; // 0x50
		::UnityEngine::GameObject* avatarGo; // 0x58
		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x60
		::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x68
		::ENPCAvatarGender gender; // 0x70
		::System::Int32 avatarParamsID; // 0x74
		::ENPCAvatarSize size; // 0x78
		::System::Int32 __1__state; // 0x7C
		::System::Boolean enableLookIK; // 0x80

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARPARTSANDACCESSORIESGALGAMEASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
