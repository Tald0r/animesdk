#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace NPCCrowd::AI { class PathGraphFeaturePointPathConfig; }
namespace NPCCrowd::AI { class PathGraphFeaturePointRuntime; }
namespace NPCCrowd::AI { class PathGraphFeaturePointV2Config; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupConfig; }
namespace NPCCrowd::AI { class PathGraphSpawnGroupRuntime; }
namespace NPCCrowd::AI { class PathGraphSplineNodeRuntime_BlockState; }
namespace NPCCrowd::AI { class PathGraphStateConfig; }
namespace NPCCrowd::AI { class PathGraphStateGlobalConfig; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x8470C10)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0x84718C0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x8470E20)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEAR_OFFSET UNITYSDK_OFFSET(0x8470B10)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x846D8F0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x846DAE0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x846D730)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0x846D530)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNEDNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x846DBE0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNGROUP_OFFSET UNITYSDK_OFFSET(0x846D9F0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x846DDE0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0x846E6D0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTGROUP_OFFSET UNITYSDK_OFFSET(0x846EC00)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x846E470)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INIT_OFFSET UNITYSDK_OFFSET(0x846DD70)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONGRAPHENABLED_OFFSET UNITYSDK_OFFSET(0x846F600)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONPATHBLOCKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x8471AE0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_POSTINITSPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0x846F450)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATEFEATUREPOINTS_OFFSET UNITYSDK_OFFSET(0x8471F50)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATESPAWNGROUPS_OFFSET UNITYSDK_OFFSET(0x84720D0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATE_OFFSET UNITYSDK_OFFSET(0x8471ED0)
#define NPCCROWD_AI_PATHGRAPHSTATERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x8472260)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphStateRuntime_TypeDefinitionIndex = 70435;

	class PathGraphStateRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* _featurePointRuntimeList; // 0x10
		::NPCCrowd::AI::SpawnPointConfig* SpawnPoints; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointV2Config*>* FeaturePoints; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _featurePointExportMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _spawnGroupExportMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _pathNodeID2SpawnPointHandlers; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*>* Path2FeaturePoints; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupRuntime*>* _spawnGroupRuntimeList; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphSpawnGroupConfig*>* SpawnGroups; // 0x50
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointPathConfig*>* FeaturePointPaths; // 0x58
		::NPCCrowd::AI::PathGraphStateGlobalConfig* GlobalConfig; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* _disabledSubGraph; // 0x68
		::NPCCrowd::AI::PathGraphStateConfig* Config; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME__CTOR_OFFSET))(this);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetFeaturePoint(::System::Int32 pointID)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINT_OFFSET))(this, pointID);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>* GetFeaturePoints(::System::ValueTuple_2<::System::Int32, ::System::Int32> pointID)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphFeaturePointRuntime*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETFEATUREPOINTS_OFFSET))(this, pointID);
		}

		::NPCCrowd::AI::PathGraphFeaturePointRuntime* GetExportFeaturePoint(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphFeaturePointRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTFEATUREPOINT_OFFSET))(this, key);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetSpawnGroup(::System::Int32 groupID)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNGROUP_OFFSET))(this, groupID);
		}

		::NPCCrowd::AI::PathGraphSpawnGroupRuntime* GetExportSpawnGroup(::System::String* key)
		{
			return ((::NPCCrowd::AI::PathGraphSpawnGroupRuntime*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETEXPORTSPAWNGROUP_OFFSET))(this, key);
		}

		::System::Int32 GetSpawnedNpcCount(::System::Int32 graphID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_GETSPAWNEDNPCCOUNT_OFFSET))(this, graphID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INIT_OFFSET))(this);
		}

		::System::Void InitFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void InitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void InitSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTS_OFFSET))(this);
		}

		::System::Void InitSpawnPointGroup(::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_INITSPAWNPOINTGROUP_OFFSET))(this, groupConfig);
		}

		::System::Void PostInitSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_POSTINITSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void OnGraphEnabled(::System::Int32 graphID, ::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONGRAPHENABLED_OFFSET))(this, graphID, isEnabled);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEAR_OFFSET))(this);
		}

		::System::Void ClearFeaturePoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARFEATUREPOINTS_OFFSET))(this);
		}

		::System::Void ClearSpawnGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNGROUPS_OFFSET))(this);
		}

		::System::Void ClearSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_CLEARSPAWNPOINTS_OFFSET))(this);
		}

		::System::Void OnPathBlockStateChanged(::System::Int32 pathID, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::AI::PathGraphSplineNodeRuntime_BlockState*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_ONPATHBLOCKSTATECHANGED_OFFSET))(this, pathID, state);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateFeaturePoints(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATEFEATUREPOINTS_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSpawnGroups(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSTATERUNTIME_UPDATESPAWNGROUPS_OFFSET))(this, deltaTime);
		}
	};
}
