#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Material; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3163B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__64_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2613F0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarAccessoryInfoMaterialAsync_d__64_TypeDefinitionIndex = 51684;

	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarAccessoryInfoMaterialAsync_d__64
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Material*>*> __u__1; // 0x18
		::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x90
		::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo; // 0xA0
		::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss; // 0xA8
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0xB0
		::System::Int32 __1__state; // 0xB8

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__64_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__64_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
