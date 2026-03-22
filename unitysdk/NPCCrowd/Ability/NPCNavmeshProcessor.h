#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshQueryDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryData.h"
#include "unitysdk/NPCCrowd/Ability/MinPathQueryResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd { class IdGenerator; }
namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ADDDEPENDENCYTOWORLD_OFFSET UNITYSDK_OFFSET(0x6EC1970)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKPATHQUERYVALID_OFFSET UNITYSDK_OFFSET(0x6EC1070)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKQUERYRESULT_OFFSET UNITYSDK_OFFSET(0x6EBFD20)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x6EBECD0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTECOMMONQUERY_OFFSET UNITYSDK_OFFSET(0x6EBF790)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6EBF230)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GETPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x6EC15E0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITDATA_OFFSET UNITYSDK_OFFSET(0x6EBE960)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITPROCESSOR_OFFSET UNITYSDK_OFFSET(0x6EC0C60)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ISMINPATHQUERYFINISHED_OFFSET UNITYSDK_OFFSET(0x6EC0A60)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET UNITYSDK_OFFSET(0x6EBFC60)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATHSYNC_OFFSET UNITYSDK_OFFSET(0x6EC12F0)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_1_OFFSET UNITYSDK_OFFSET(0x6EC1260)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_OFFSET UNITYSDK_OFFSET(0x6EC0D50)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REFRESHDELAYEDQUERY_OFFSET UNITYSDK_OFFSET(0x6EC0720)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REGISTERQUERYCALLBACK_OFFSET UNITYSDK_OFFSET(0x6EC1790)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REMOVEFINISHEDMINPATHQUERY_OFFSET UNITYSDK_OFFSET(0x6EC0B40)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EC1A20)
#define NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6EC1A10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCNavmeshProcessor_TypeDefinitionIndex = 40804;

	class NPCNavmeshProcessor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_tmpList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306D0);
		}
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult>** StaticGet_finishedPathQueries()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306D8);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::Il2CppArray<::UnityEngine::Experimental::AI::NavMeshQuery>*>** StaticGet_navMeshQueryListPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::Il2CppArray<::UnityEngine::Experimental::AI::NavMeshQuery>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>** StaticGet_minPathQueries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306E8);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment>>** StaticGet_nativeArrayPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshQueryDataFragment>>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*>** StaticGet_callbacks()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x306F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>** StaticGet_delayMinPathQueries()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Ability::MinPathQueryData>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x30700);
		}
		static ::NPCCrowd::IdGenerator** StaticGet_IDGen()
		{
			return (::NPCCrowd::IdGenerator**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x30708);
		}
		static ::System::Collections::Concurrent::ConcurrentStack_1<::UnityEngine::Experimental::AI::NavMeshQuery>** StaticGet_navMeshQueryPool()
		{
			return (::System::Collections::Concurrent::ConcurrentStack_1<::UnityEngine::Experimental::AI::NavMeshQuery>**)Il2CppClass::FromTypeDefinitionIndex(NPCNavmeshProcessor_TypeDefinitionIndex)->GetStaticField(0x30710);
		}
		// static const ::System::Int32 MaxPathSize = 0xA; // 0x0
		// static const ::System::Int32 MaxNavMeshNodes = 0x800; // 0x0
		// static const ::System::Int32 DefaultArrayLength = 0x14; // 0x0
		// static const ::System::Int32 DefaultArrayPoolSize = 0xA; // 0x0
		// static const ::System::Int32 DefaultQueryPoolSize = 0x64; // 0x0
		::System::Int32 lastExecuteFrame; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR__CCTOR_OFFSET))();
		}

		static ::System::Void InitData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITDATA_OFFSET))();
		}

		static ::System::Void ClearCachedData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CLEARCACHEDDATA_OFFSET))();
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTE_OFFSET))(this, runtime, deltaTime, dependsOn);
		}

		::Unity::Jobs::JobHandle ExecuteCommonQuery(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_EXECUTECOMMONQUERY_OFFSET))(this, dependsOn);
		}

		::System::Void PreExecuteBeforeJob(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_PREEXECUTEBEFOREJOB_OFFSET))(this, deltaTime);
		}

		static ::System::Void CheckQueryResult()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKQUERYRESULT_OFFSET))();
		}

		static ::System::Void RefreshDelayedQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REFRESHDELAYEDQUERY_OFFSET))();
		}

		static ::System::Boolean IsMinPathQueryFinished(::System::Int32 queryHandler, ::NPCCrowd::Ability::MinPathQueryResult& queryResult)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Ability::MinPathQueryResult&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ISMINPATHQUERYFINISHED_OFFSET))(queryHandler, queryResult);
		}

		static ::System::Void RemoveFinishedMinPathQuery(::System::Int32 queryHandler)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REMOVEFINISHEDMINPATHQUERY_OFFSET))(queryHandler);
		}

		::System::Void InitProcessor(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_INITPROCESSOR_OFFSET))(this, runtime, idx, moveParams, randDesiredSpeed);
		}

		static ::System::Boolean QueryMinPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::UnityEngine::Vector3 source, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_OFFSET))(points, source, handler);
		}

		static ::System::Boolean QueryMinPath_1(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> points, ::UnityEngine::Vector3 source, ::System::Int32& handler)
		{
			return ((::System::Boolean(*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATH_1_OFFSET))(points, source, handler);
		}

		static ::System::Boolean QueryMinPathSync(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::UnityEngine::Vector3 source, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_QUERYMINPATHSYNC_OFFSET))(points, source, index);
		}

		static ::System::Single GetPathLength(::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Single(*)(::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_GETPATHLENGTH_OFFSET))(path);
		}

		static ::System::Void RegisterQueryCallback(::System::Int32 minPathQueryHandler, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>* callback)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Action_1<::NPCCrowd::Ability::MinPathQueryResult>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_REGISTERQUERYCALLBACK_OFFSET))(minPathQueryHandler, callback);
		}

		static ::System::Boolean CheckPathQueryValid(::System::Int32 cnt)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_CHECKPATHQUERYVALID_OFFSET))(cnt);
		}

		::System::Void AddDependencyToWorld(::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCNAVMESHPROCESSOR_ADDDEPENDENCYTOWORLD_OFFSET))(this, dependsOn);
		}
	};
}
