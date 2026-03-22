#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCustomIdleManager_CreatRequestJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCustomIdleManager_CustomIdleInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/NPCCustomIdleManager_SampleJob.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/NapAnimator_SampleAnimationJobRequest.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class NPCAnimationLib_NonArchetypeAvatarAnimatorCache; }
namespace Nap::NapECS { class EcsEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATEJOBS_OFFSET UNITYSDK_OFFSET(0x7E05AC0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x7E05F10)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7E050D0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ENSUREINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x7E05480)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_FINDAVATARINDEX_OFFSET UNITYSDK_OFFSET(0x7E06540)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x7E04220)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x7E04830)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E062A0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7E05020)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x7E04C70)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x7E052D0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x7E043C0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x7E06490)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_WRITEBACKPOSE_OFFSET UNITYSDK_OFFSET(0x7E06330)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x7E06670)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x7E06800)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E06860)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7E068D0)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x7E06930)
#define NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x7E069A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCustomIdleManager_TypeDefinitionIndex = 47433;

	class NPCCustomIdleManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _requestCount; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCustomIdleManager_SampleJob>* _sampleJobs; // 0x20
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* _entityComponents; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _entityIds; // 0x30
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* _enabledEntity; // 0x38
		::Unity::Collections::NativeList_1<::UnityEngine::NapAnimator_SampleAnimationJobRequest> _sampleRequests; // 0x40
		::Unity::Jobs::JobHandle _jobHandle; // 0x50
		::Unity::Collections::NativeList_1<::UnityEngine::NapTransformData> _bones; // 0x60
		::Unity::Collections::NativeList_1<::Unity::Jobs::JobHandle> _sampleHandles; // 0x70
		::System::Boolean _shouldEnsureData; // 0x80
		::Unity::Collections::NativeList_1<::NPCCrowd::Animation::NPCCustomIdleManager_CustomIdleInstanceData> _instanceData; // 0x88
		::NPCCrowd::Animation::NPCCustomIdleManager_CreatRequestJob _requestCreateJob; // 0x98
		::Unity::Collections::NativeList_1<::System::IntPtr> _requests; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCCustomIdleManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCCustomIdleManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_GET_OFFSET))();
		}

		::System::Void RegisterEntity(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_REGISTERENTITY_OFFSET))(this, npcComponent);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void OnEntityRemove(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ONENTITYREMOVE_OFFSET))(this, entity);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void PostUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_POSTUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void WriteBackPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_WRITEBACKPOSE_OFFSET))(this);
		}

		::System::Void Dispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_DISPATCH_OFFSET))(this);
		}

		::System::Void CreateJobs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_CREATEJOBS_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EnsureInstanceData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_ENSUREINSTANCEDATA_OFFSET))(this);
		}

		::System::Int32 FindAvatarIndex(::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache* avatar)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCAnimationLib_NonArchetypeAvatarAnimatorCache*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_FINDAVATARINDEX_OFFSET))(this, avatar);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_POSTUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCUSTOMIDLEMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}
	};
}
