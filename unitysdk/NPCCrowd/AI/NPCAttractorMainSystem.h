#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::AI { class AttractorBaseProcessor; }
namespace NPCCrowd::AI { class AttractorConflictQueryProcessor; }
namespace NPCCrowd::AI { class AttractorManager; }
namespace NPCCrowd::AI { class AttractorQueryEntityProcessor; }
namespace NPCCrowd::AI { class AttractorRuntimeData; }
namespace NPCCrowd::AI { class IAttractorProcessor; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x763E390)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x763EAF0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_DISPATCH_OFFSET UNITYSDK_OFFSET(0x763EFD0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_END_OFFSET UNITYSDK_OFFSET(0x763EF50)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x763DF90)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x763EEA0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x763E400)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x763E030)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x763E1B0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_WAIT_OFFSET UNITYSDK_OFFSET(0x763E310)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x763F100)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x763DEE0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x763F140)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x763F1B0)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x763F210)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_START_OFFSET UNITYSDK_OFFSET(0x763F270)
#define NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x763F2D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAttractorMainSystem_TypeDefinitionIndex = 73646;

	class NPCAttractorMainSystem : public ::Class_2_F33340E023067DAF
	{
	public:
		static ::NPCCrowd::AI::NPCAttractorMainSystem** StaticGet__self()
		{
			return (::NPCCrowd::AI::NPCAttractorMainSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCAttractorMainSystem_TypeDefinitionIndex)->GetStaticField(0x35060);
		}
		static ::System::Int32* StaticGet_MaxAttractorNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAttractorMainSystem_TypeDefinitionIndex)->GetStaticField(0xCF40);
		}
		static ::System::Boolean* StaticGet_PauseAttractorFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAttractorMainSystem_TypeDefinitionIndex)->GetStaticField(0xCF44);
		}
		::NPCCrowd::AI::AttractorBaseProcessor* baseProcessor; // 0x20
		::NPCCrowd::AI::AttractorRuntimeData* runtimeData; // 0x28
		::NPCCrowd::AI::AttractorConflictQueryProcessor* conflictQueryProcessor; // 0x30
		::NPCCrowd::AI::AttractorQueryEntityProcessor* queryProcessor; // 0x38
		::NPCCrowd::AI::AttractorManager* attractorManager; // 0x40
		::Nap::NapECS::EcsFilter* filter; // 0x48
		::Nap::NapECS::EcsWorld* ecsWorld; // 0x50
		::System::Boolean conflictQuerying; // 0x58
		::Unity::Jobs::JobHandle _jobHandle; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::AI::NPCAttractorMainSystem* Get()
		{
			return ((::NPCCrowd::AI::NPCAttractorMainSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_GET_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_END_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_WAIT_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::AI::IAttractorProcessor* processor, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::AI::IAttractorProcessor*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_DISPATCH_OFFSET))(this, processor, deltaTime, dependsOn);
		}

		::Unity::Jobs::JobHandle DispatchJob(::System::Single deltaTime)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM_DISPATCHJOB_OFFSET))(this, deltaTime);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_START_OFFSET))(this);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCATTRACTORMAINSYSTEM___BASE_UPDATE_OFFSET))(this);
		}
	};
}
