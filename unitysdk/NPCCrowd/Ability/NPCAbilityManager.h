#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementActionHandle.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityObstacleFlushProcessor_ExecuteJob.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/NPCCrowd/AbilitySwitchSetting.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCSectionAbilitySwitchConfigSO; }
namespace NPCCrowd::AI { class AIActionProcessor; }
namespace NPCCrowd::AI { class PathGraphRuntime_PathFindingResult; }
namespace NPCCrowd::Ability { class AfterNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class BeforeNavMeshCombineProcessor; }
namespace NPCCrowd::Ability { class INPCAbilityProcessors; }
namespace NPCCrowd::Ability { class NPCAIProcessor; }
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Ability { class NPCAbilityAnimateProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityDitherProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityFirstProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityFlushTransformProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityMoveAvoidanceProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityObstacleFlushProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Ability { class NPCAbilityPathFollowProcessor; }
namespace NPCCrowd::Ability { class NPCAbilityPathFollowProcessors; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace NPCCrowd::Ability { class NPCAbilitySmoothOrientationProcessors; }
namespace NPCCrowd::Ability { class NPCAbilitySteerToMoveTargetProcessor; }
namespace NPCCrowd::Ability { class NPCApplyMovementProcessor; }
namespace NPCCrowd::Ability { class NPCNavmeshProcessor; }
namespace NPCCrowd::Ability { class NPCStateTreeProcessor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0x62DD4B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET UNITYSDK_OFFSET(0x62DCF60)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET UNITYSDK_OFFSET(0x62DBBC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET UNITYSDK_OFFSET(0x62DAE70)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x62DB190)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET UNITYSDK_OFFSET(0x62DDCC0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET UNITYSDK_OFFSET(0x62DAB40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET UNITYSDK_OFFSET(0x62D9CB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET UNITYSDK_OFFSET(0x62D9E30)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x62D46C0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x62D8810)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x62D4830)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET UNITYSDK_OFFSET(0x62D9830)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET UNITYSDK_OFFSET(0x62D95F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSTARTMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0x62D9FB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET UNITYSDK_OFFSET(0x62D9560)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET UNITYSDK_OFFSET(0x62D4D40)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x62D5350)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET UNITYSDK_OFFSET(0x62D56A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET UNITYSDK_OFFSET(0x62DD2A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x62D5210)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x62DC1E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET UNITYSDK_OFFSET(0x62DD920)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYMOVETARGET_OFFSET UNITYSDK_OFFSET(0x62D5780)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_1_OFFSET UNITYSDK_OFFSET(0x62D7D20)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x62D6520)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x62D6420)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x62D5170)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET UNITYSDK_OFFSET(0x62D8760)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET UNITYSDK_OFFSET(0x62D8610)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0x62DE150)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET UNITYSDK_OFFSET(0x62D9AB0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET UNITYSDK_OFFSET(0x62D98B0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET UNITYSDK_OFFSET(0x62DE1E0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET UNITYSDK_OFFSET(0x62DA710)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET UNITYSDK_OFFSET(0x62DA040)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET UNITYSDK_OFFSET(0x62DDB90)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x62DC3F0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET UNITYSDK_OFFSET(0x62DE0D0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x62D5700)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x62D5560)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x62DE2A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x62DE290)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x62DE340)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x62DE3A0)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x62DE400)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x62DE470)
#define NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x62DE4D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityManager_TypeDefinitionIndex = 68785;

	class NPCAbilityManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::String** StaticGet_SwitchConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x324A0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x324A8);
		}
		static ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>** StaticGet_allUpdateJobs()
		{
			return (::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x324C8);
		}
		static ::NPCCrowd::NPCSectionAbilitySwitchConfigSO** StaticGet__configSO()
		{
			return (::NPCCrowd::NPCSectionAbilitySwitchConfigSO**)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0x324D0);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_AbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6B0);
		}
		static ::System::Int32* StaticGet_MaxEntityNum()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6B4);
		}
		static ::System::Boolean* StaticGet_EnableAbilityCombine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6B8);
		}
		static ::NPCCrowd::AbilitySwitchSetting* StaticGet_DefaultAbilitySwitchSetting()
		{
			return (::NPCCrowd::AbilitySwitchSetting*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6B9);
		}
		static ::System::Boolean* StaticGet_EnableCrowdDither()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6BD);
		}
		static ::System::Boolean* StaticGet_ActivateMoveAvoidance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAbilityManager_TypeDefinitionIndex)->GetStaticField(0xC6BE);
		}
		::NPCCrowd::Ability::BeforeNavMeshCombineProcessor* beforeNaveMeshProcessor; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDataDict; // 0x20
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor* steerToMoveTargetProcessor; // 0x28
		::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* flushTransformProcessor; // 0x30
		::NPCCrowd::Ability::AfterNavMeshCombineProcessor* afterNavMeshProcessor; // 0x38
		::NPCCrowd::Ability::NPCAIProcessor* aiProcessors; // 0x40
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessors* pathFollowingProcessors; // 0x48
		::NPCCrowd::Ability::NPCAbilityAnimateProcessors* animateProcessors; // 0x50
		::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor; // 0x58
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationProcessors* smoothOrientationProcessors; // 0x60
		::NPCCrowd::Ability::NPCAbilityFirstProcessors* firstProcessor; // 0x68
		::NPCCrowd::AI::AIActionProcessor* actionProcessor; // 0x70
		::NPCCrowd::Ability::NPCNavmeshProcessor* navmeshProcessor; // 0x78
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor_ExecuteJob>* obstacleFlushProcessorJobs; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Ability::NPCAbility*>* abilities; // 0x88
		::NPCCrowd::Ability::NPCAbilityMoveAvoidanceProcessors* moveAvoidanceProcessors; // 0x90
		::NPCCrowd::Ability::NPCAbilityDitherProcessor* ditherProcessor; // 0x98
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0xA0
		::NPCCrowd::Ability::NPCStateTreeProcessor* stateTreeProcessor; // 0xA8
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityRuntimeData*>* allAbilityRuntimeDatas; // 0xB0
		::NPCCrowd::Ability::NPCAbilityPathFollowProcessor* pathFollowingProcessor; // 0xB8
		::NPCCrowd::Ability::NPCApplyMovementProcessor* applyMovementProcessor; // 0xC0
		::Unity::Jobs::JobHandle _obstacleJobHandle; // 0xC8
		::Unity::Jobs::JobHandle _jobHandle; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::Ability::NPCAbilityManager* Get()
		{
			return ((::NPCCrowd::Ability::NPCAbilityManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SHOULDTICK_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void OnChangeSection(::System::Int32 sectionID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONCHANGESECTION_OFFSET))(sectionID);
		}

		static ::System::Void OverrideAbilitySwitch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_OVERRIDEABILITYSWITCH_OFFSET))();
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityMoveTarget(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 targetCenter, ::System::String* style)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYMOVETARGET_OFFSET))(this, runtimeData, idx, targetCenter, style);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilitySmoothRotationToTarget(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 rotTarget)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYSMOOTHROTATIONTOTARGET_OFFSET))(this, runtimeData, idx, rotTarget);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityPathFollow(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Collections::Generic::List_1<::System::UInt16>*& pathFollowNodes, ::System::Boolean teleportToFirstPoint, ::System::String* style)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt16>*&, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_OFFSET))(this, runtimeData, idx, pathFollowNodes, teleportToFirstPoint, style);
		}

		::NPCCrowd::Ability::FNPCAbilityMovementActionHandle SetNPCAbilityPathFollow_1(::NPCCrowd::Ability::NPCAbility* ability, ::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult* pathResult, ::System::Boolean teleportToFirstPoint, ::System::Int32 laneIndex, ::System::Single laneInnerOffset, ::System::String* style, ::System::Single endFadeOutTime, ::System::Int32 pathID)
		{
			return ((::NPCCrowd::Ability::FNPCAbilityMovementActionHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::AI::PathGraphRuntime_PathFindingResult*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_SETNPCABILITYPATHFOLLOW_1_OFFSET))(this, ability, runtimeData, idx, pathResult, teleportToFirstPoint, laneIndex, laneInnerOffset, style, endFadeOutTime, pathID);
		}

		::System::Void StartStandTurn(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTANDTURN_OFFSET))(this, runtimeData, idx, angle);
		}

		static ::Cysharp::Threading::Tasks::UniTaskVoid StandTurnAsync(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::Single angle)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STANDTURNASYNC_OFFSET))(runtimeData, idx, angle);
		}

		::System::Void InitDefaultData(::NPCCrowd::Ability::NPCAbility* ability, ::System::Int32 idx, ::System::Int32 animID, ::System::String* movementStyle)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_INITDEFAULTDATA_OFFSET))(this, ability, idx, animID, movementStyle);
		}

		::System::Void OnAbilityRemoved(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ONABILITYREMOVED_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsPathFollowStarted(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWSTARTED_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsPathFollowFinished(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISPATHFOLLOWFINISHED_OFFSET))(this, runtimeData, idx);
		}

		::System::Void StopMoveAction(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::UInt16 id)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPMOVEACTION_OFFSET))(this, runtimeData, idx, id);
		}

		::System::Void StopCurrentMoveAction(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::System::UInt16 id)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPCURRENTMOVEACTION_OFFSET))(this, runtimeData, idx, id);
		}

		::System::UInt16 GetCurrentAbilityMoveActionID(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::UInt16(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONID_OFFSET))(this, runtimeData, idx);
		}

		::NPCCrowd::Ability::ENPCAbilityMovementAction GetCurrentAbilityMoveActionType(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::NPCCrowd::Ability::ENPCAbilityMovementAction(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_GETCURRENTABILITYMOVEACTIONTYPE_OFFSET))(this, runtimeData, idx);
		}

		::System::Boolean IsStartMoveProcess(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_ISSTARTMOVEPROCESS_OFFSET))(this, runtimeData, idx);
		}

		::System::Void TeleportTo(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 idx, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_OFFSET))(this, runtimeData, idx, pos, rot);
		}

		::System::Void TeleportTo_1(::System::UInt32 entityID, ::NPCCrowd::Ability::FTransformFragment& transform, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment& locationFragment, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>& hashGrid, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::FTransformFragment&, ::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment&, ::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc>&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TELEPORTTO_1_OFFSET))(this, entityID, transform, locationFragment, hashGrid, pos, rot);
		}

		::Unity::Jobs::JobHandle Dispatch(::NPCCrowd::Ability::INPCAbilityProcessors* processor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::INPCAbilityProcessors*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCH_OFFSET))(this, processor, deltaTime, buffer, dependsOn);
		}

		::Unity::Jobs::JobHandle DispatchInList(::NPCCrowd::Ability::INPCAbilityProcessors* processor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::INPCAbilityProcessors*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHINLIST_OFFSET))(this, processor, deltaTime, buffer, dependsOn);
		}

		::Unity::Jobs::JobHandle DispatchJob(::System::Single deltaTime)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHJOB_OFFSET))(this, deltaTime);
		}

		::System::Void DispatchFlushJob(::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor* transformProcessor, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor* obstacleFlushProcessor, ::System::Single deltaTime, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> buffer, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityFlushTransformProcessor*, ::NPCCrowd::Ability::NPCAbilityObstacleFlushProcessor*, ::System::Single, ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHFLUSHJOB_OFFSET))(this, transformProcessor, obstacleFlushProcessor, deltaTime, buffer, dependsOn);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		static ::System::Void PendingUpdateJobs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_PENDINGUPDATEJOBS_OFFSET))();
		}

		::NPCCrowd::Ability::NPCAbility* CreateAbilityEntity(::Class_3_F2DAD7F45F518868* npcComp, ::NPCCrowd::Ability::NPCAbilityParameters* parameters, ::NPCCrowd::Ability::NPCAbilityRuntimeData*& runtimeData)
		{
			return ((::NPCCrowd::Ability::NPCAbility*(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::NPCCrowd::Ability::NPCAbilityParameters*, ::NPCCrowd::Ability::NPCAbilityRuntimeData*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_CREATEABILITYENTITY_OFFSET))(this, npcComp, parameters, runtimeData);
		}

		::System::Void RemoveAbilityEntity(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_REMOVEABILITYENTITY_OFFSET))(this, ability);
		}

		::System::Boolean TryGetAbility(::System::UInt32 entityId, ::NPCCrowd::Ability::NPCAbility*& ability)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Ability::NPCAbility*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_TRYGETABILITY_OFFSET))(this, entityId, ability);
		}

		::System::Void DispatchTransformObstacleFlushJob(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHTRANSFORMOBSTACLEFLUSHJOB_OFFSET))(this, deltaTime);
		}

		::Unity::Jobs::JobHandle DispatchCombineJob(::System::Single deltaTime)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_DISPATCHCOMBINEJOB_OFFSET))(this, deltaTime);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void WaitForTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFORTRANSFORM_OFFSET))(this);
		}

		::System::Void WaitForObstacle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_WAITFOROBSTACLE_OFFSET))(this);
		}

		::System::Void StartStateTree(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 abilityIdx, ::System::Int32 stateTreeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STARTSTATETREE_OFFSET))(this, runtimeData, abilityIdx, stateTreeIndex);
		}

		::System::Void StopStateTree(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtimeData, ::System::Int32 abilityIdx)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER_STOPSTATETREE_OFFSET))(this, runtimeData, abilityIdx);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
