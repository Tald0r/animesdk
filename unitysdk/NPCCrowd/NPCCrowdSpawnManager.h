#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCCrowdSpawnManager_SpawnedNpcInfo; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace NPCCrowd { class NPCSpawnConfigSO; }
namespace NPCCrowd { class NPCSpawnPointRuntime; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPoint; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET UNITYSDK_OFFSET(0x8491BE0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET UNITYSDK_OFFSET(0x84914B0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET UNITYSDK_OFFSET(0x8492790)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET UNITYSDK_OFFSET(0x84918D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8471310)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET UNITYSDK_OFFSET(0x8470740)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0x84938D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET UNITYSDK_OFFSET(0x8490360)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x8491B70)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET UNITYSDK_OFFSET(0x8491A40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x8494600)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET UNITYSDK_OFFSET(0x8492D60)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x8491F50)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x846EF50)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8490A30)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET UNITYSDK_OFFSET(0x8493550)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x84935C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8490B80)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET UNITYSDK_OFFSET(0x8492EF0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x84905D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x8490410)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x8490CE0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x8494330)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x846F0F0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET UNITYSDK_OFFSET(0x8471D40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x84902C0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET UNITYSDK_OFFSET(0x8493BA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x8492110)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET UNITYSDK_OFFSET(0x8492590)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET UNITYSDK_OFFSET(0x84937A0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x8470850)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET UNITYSDK_OFFSET(0x84910D0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET UNITYSDK_OFFSET(0x8490F40)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8491380)
#define NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET UNITYSDK_OFFSET(0x8490EA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8494AC0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8494730)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x8494B10)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8494B70)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x8494BD0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET UNITYSDK_OFFSET(0x8494C30)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x8494CA0)
#define NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x8494D00)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_TypeDefinitionIndex = 46564;

	class NPCCrowdSpawnManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet__configAssetRequest()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x3DC20);
		}
		static ::System::String** StaticGet_SpawnConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0x3DC40);
		}
		static ::System::Boolean* StaticGet_enableSpawn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdSpawnManager_TypeDefinitionIndex)->GetStaticField(0xF100);
		}
		// static const ::System::String* FadeDitherKey; // 0x0
		// static const ::System::Int32 MAX_NPCCROWD_COUNT = 0xFA; // 0x0
		::NPCCrowd::NPCSpawnConfigSO* _configSO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimes; // 0x20
		::MoleMole::Config::CharacterFadeDitheringDataV2 ditherData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* entityID2Handler; // 0x50
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* validNPCSpawnPoints; // 0x58
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* delayFadeIDs; // 0x68
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* distanceCallback; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* _spawnedNpcList; // 0x78
		::System::Collections::Generic::HashSet_1<::System::UInt32>* delayDespawnIDs; // 0x80
		::System::Collections::Generic::List_1<::NPCCrowd::NPCSpawnPointRuntime*>* allSpawnPointRuntimesCache; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*>* _spawnedNpcListCache; // 0x90
		::Unity::Jobs::JobHandle _despawnJobHandle; // 0x98
		::Unity::Jobs::JobHandle _pointJobHandle; // 0xA8
		::Unity::Collections::NativeArray_1<::System::Int32> spawnPointKey; // 0xB8
		::Unity::Collections::NativeArray_1<::System::UInt32> _spawnedNpcArray; // 0xC8
		::System::Single validPointWeight; // 0xD8
		::System::Single _spawnTimer; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCCrowdSpawnManager* Get()
		{
			return ((::NPCCrowd::NPCCrowdSpawnManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GET_OFFSET))();
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::System::Void EnableSpawn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ENABLESPAWN_OFFSET))(this, enable);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void PreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_PREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean GetSpawnInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNINFO_OFFSET))(this, entityID, info);
		}

		::System::Int32 GetSpawnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void AddSpawnedNPC(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ADDSPAWNEDNPC_OFFSET))(this, entityID);
		}

		::System::Void CheckSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWN_OFFSET))(this);
		}

		::System::Void CheckDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKDESPAWN_OFFSET))(this, deltaTime);
		}

		::System::Void DelayDespawnEntity(::System::UInt32 entityID, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DELAYDESPAWNENTITY_OFFSET))(this, entityID, fade);
		}

		::System::Void CheckSpawnInfoDespawn(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* info, ::System::Single deltaTime, ::System::Single playerPosY)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_CHECKSPAWNINFODESPAWN_OFFSET))(this, info, deltaTime, playerPosY);
		}

		::System::Void StartFade(::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo* spawnedNpcInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_STARTFADE_OFFSET))(this, spawnedNpcInfo, deltaTime);
		}

		::System::Boolean SpawnNPC(::NPCCrowd::NPCSpawnPointRuntime* spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCSpawnPointRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNNPC_OFFSET))(this, spawnPoint);
		}

		::System::Void OnPathLimitChanged(::System::Int32 pathID, ::System::Int32 limit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONPATHLIMITCHANGED_OFFSET))(this, pathID, limit);
		}

		::System::Void OnCrowdEntityAdd(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYADD_OFFSET))(this, npcCmp);
		}

		::System::Void OnCrowdEntityRemove(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_ONCROWDENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Boolean TryGetSpawnNPCInfo(::System::UInt32 entityID, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*& spawnedNpcInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::NPCCrowdSpawnManager_SpawnedNpcInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_TRYGETSPAWNNPCINFO_OFFSET))(this, entityID, spawnedNpcInfo);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Void SpawnInitNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNINITNPC_OFFSET))(this);
		}

		::NPCCrowd::SpawnRangeConfig* GetSpawnRangeConfig(::System::Int32 graphID)
		{
			return ((::NPCCrowd::SpawnRangeConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNRANGECONFIG_OFFSET))(this, graphID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_INIT_OFFSET))(this);
		}

		::System::Void RegisterAttractorSpawnPoint(::NPCCrowd::AI::SpawnConfigForAttractor* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERATTRACTORSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void RegisterSpawnPoint(::NPCCrowd::AI::SpawnPoint* spawnPointConfig, ::NPCCrowd::AI::SpawnPointGroup* groupConfig, ::System::Int32& handler)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnPoint*, ::NPCCrowd::AI::SpawnPointGroup*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_REGISTERSPAWNPOINT_OFFSET))(this, spawnPointConfig, groupConfig, handler);
		}

		::System::Void UnRegisterSpawnPoint(::System::Int32 handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UNREGISTERSPAWNPOINT_OFFSET))(this, handler);
		}

		::System::Void SetSpawnPointBlocked(::System::Int32 handler, ::System::Boolean blocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SETSPAWNPOINTBLOCKED_OFFSET))(this, handler, blocked);
		}

		::System::Boolean GetSpawnPoint(::System::Int32 handler, ::NPCCrowd::NPCSpawnPointRuntime*& spawnPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::NPCSpawnPointRuntime*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETSPAWNPOINT_OFFSET))(this, handler, spawnPoint);
		}

		::System::Void UpdatePointValid(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEPOINTVALID_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateDespawn(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_UPDATEDESPAWN_OFFSET))(this, deltaTime);
		}

		::NPCCrowd::NPCSpawnPointRuntime* GetValidSpawnPoint()
		{
			return ((::NPCCrowd::NPCSpawnPointRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_GETVALIDSPAWNPOINT_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_WAIT_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void __base_PreUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_PREUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
