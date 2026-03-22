#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleMainSystem_EModulePreloadPhase.h"

namespace NPCCrowd { class NPCCrowdModuleManagerBase; }
namespace NPCCrowd { class NPCCrowdModuleSubSystemBase; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7E09BA0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET UNITYSDK_OFFSET(0x7E09E70)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET UNITYSDK_OFFSET(0x7E09DF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET UNITYSDK_OFFSET(0x7E0C5F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET UNITYSDK_OFFSET(0x7E09F20)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x7E08A90)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0x7E07270)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x7DF7EC0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0B620)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET UNITYSDK_OFFSET(0x7E07E40)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7E0C270)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET UNITYSDK_OFFSET(0x7E0C190)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET UNITYSDK_OFFSET(0x7E0C200)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET UNITYSDK_OFFSET(0x7E088F0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x7E08CD0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0A520)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0BDF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0B040)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x7E07EF0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x7E07D30)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET UNITYSDK_OFFSET(0x7E09B20)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x7E095A0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x7E08F60)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x7E0AA80)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E0C670)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x7E072A0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7E0C690)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0C700)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7E0C760)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7E0C7C0)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET UNITYSDK_OFFSET(0x7E0C820)
#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x7E0C880)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_TypeDefinitionIndex = 47799;

	class NPCCrowdModuleMainSystem : public ::Class_2_F33340E023067DAF
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_waitedAssetsRequest()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2DF60);
		}
		static ::System::Action** StaticGet_loadAssetsFinishedAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2DF68);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem** StaticGet__self()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0x2DF70);
		}
		static ::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase* StaticGet_preloadPhase()
		{
			return (::NPCCrowd::NPCCrowdModuleMainSystem_EModulePreloadPhase*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xB070);
		}
		static ::System::Boolean* StaticGet_PauseNpcCrowdFlag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xB074);
		}
		static ::System::Boolean* StaticGet_enableSkipTickWhenNoNPC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xB075);
		}
		static ::System::Boolean* StaticGet_EnableLODSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xB076);
		}
		static ::System::Boolean* StaticGet_DisableSubsystemInStreamingGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_TypeDefinitionIndex)->GetStaticField(0xB077);
		}
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryManager; // 0x20
		::NPCCrowd::NPCCrowdModuleManagerBase* interactTargetManager; // 0x28
		::NPCCrowd::NPCCrowdModuleManagerBase* performanceManager; // 0x30
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAvatarManager; // 0x38
		::NPCCrowd::NPCCrowdModuleManagerBase* distanceManager; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleSubSystemBase*>* allSubSystem; // 0x48
		::NPCCrowd::NPCCrowdModuleManagerBase* cpuAnimatorManager; // 0x50
		::NPCCrowd::NPCCrowdModuleSubSystemBase* abilityFlushSubSystem; // 0x58
		::NPCCrowd::NPCCrowdModuleManagerBase* spawnManager; // 0x60
		::NPCCrowd::NPCCrowdModuleManagerBase* customIldeManager; // 0x68
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryMeshManager; // 0x70
		::Nap::NapECS::EcsFilter* npcFilter; // 0x78
		::NPCCrowd::NPCCrowdModuleSubSystemBase* animationSubSystem; // 0x80
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdModuleManagerBase*>* allManager; // 0x88
		::NPCCrowd::NPCCrowdModuleManagerBase* timelineManager; // 0x90
		::NPCCrowd::NPCCrowdModuleSubSystemBase* debuggerAvatarSubSystem; // 0x98
		::Nap::NapECS::EcsWorld* ecsWorld; // 0xA0
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarMeshManager; // 0xA8
		::NPCCrowd::NPCCrowdModuleManagerBase* pathGraphManager; // 0xB0
		::NPCCrowd::NPCCrowdModuleManagerBase* stateTreeManager; // 0xB8
		::NPCCrowd::NPCCrowdModuleManagerBase* debuggerManager; // 0xC0
		::NPCCrowd::NPCCrowdModuleSubSystemBase* avatarSubSystem; // 0xC8
		::NPCCrowd::NPCCrowdModuleManagerBase* actionManager; // 0xD0
		::NPCCrowd::NPCCrowdModuleManagerBase* lodManager; // 0xD8
		::NPCCrowd::NPCCrowdModuleManagerBase* crowdAnimationManager; // 0xE0
		::NPCCrowd::NPCCrowdModuleManagerBase* unionAnimatorManager; // 0xE8
		::NPCCrowd::NPCCrowdModuleManagerBase* cityPopulationManager; // 0xF0
		::NPCCrowd::NPCCrowdModuleSubSystemBase* physicsSubSystem; // 0xF8
		::NPCCrowd::NPCCrowdModuleManagerBase* avatarDitherManager; // 0x100
		::NPCCrowd::NPCCrowdModuleManagerBase* accessoryAnimatorManager; // 0x108
		::NPCCrowd::NPCCrowdModuleManagerBase* abilityManager; // 0x110
		::NPCCrowd::NPCCrowdModuleManagerBase* physicsManager; // 0x118
		::NPCCrowd::NPCCrowdModuleSubSystemBase* lodSubSystem; // 0x120
		::NPCCrowd::NPCCrowdModuleSubSystemBase* gpTaskContainerSubSystem; // 0x128
		::NPCCrowd::NPCCrowdModuleManagerBase* wpPathFinderManager; // 0x130
		::NPCCrowd::NPCCrowdModuleManagerBase* reactionManager; // 0x138
		::NPCCrowd::NPCCrowdModuleManagerBase* montageManager; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_bIsLoadedAssets()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_BISLOADEDASSETS_OFFSET))();
		}

		static ::NPCCrowd::NPCCrowdModuleMainSystem* Get()
		{
			return ((::NPCCrowd::NPCCrowdModuleMainSystem*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GET_OFFSET))();
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}

		static ::System::Collections::IEnumerator* LoadAllConfigDataAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LOADALLCONFIGDATAASYNC_OFFSET))(progressSpan, moveOneStepCallback);
		}

		static ::System::Void PreloadAssets(::System::Action* onLoadFinished)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_PRELOADASSETS_OFFSET))(onLoadFinished);
		}

		static ::System::Void OnPreloadFinishedCheck(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle arq)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHEDCHECK_OFFSET))(asset, arq);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_START_OFFSET))(this);
		}

		::System::Void SetTickPauseState(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETTICKPAUSESTATE_OFFSET))(this, pause);
		}

		static ::System::Void SetStreamingAbilityTickEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_SETSTREAMINGABILITYTICKENABLE_OFFSET))(enable);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		static ::System::Void EnableModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLEMODULE_OFFSET))();
		}

		::System::Void DisableModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_DISABLEMODULE_OFFSET))(this);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void PostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnNPCCrowdTickPause(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKPAUSE_OFFSET))(this, args);
		}

		::System::Void OnNPCCrowdTickResume(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONNPCCROWDTICKRESUME_OFFSET))(this, args);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_END_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ONDESTROY_OFFSET))(this);
		}

		static ::System::Boolean GetIsPreloadFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GETISPRELOADFINISHED_OFFSET))();
		}

		::System::Void EnableSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_ENABLESYSTEM_OFFSET))(this);
		}

		::System::Void __base_CreateFilters(::Nap::NapECS::EcsWorld* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_CREATEFILTERS_OFFSET))(this, P0);
		}

		::System::Void __base_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_START_OFFSET))(this);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM___BASE_UPDATE_OFFSET))(this);
		}
	};
}
