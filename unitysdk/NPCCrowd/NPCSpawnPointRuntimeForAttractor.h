#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCSpawnPointRuntime.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPointGroup; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x6ED8BF0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x6ED8CC0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET UNITYSDK_OFFSET(0x6ED8C50)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x6ED8AE0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x6ED8D30)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED8880)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x6ED8F80)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x6ED8F90)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x6ED8FA0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntimeForAttractor_TypeDefinitionIndex = 42780;

	class NPCSpawnPointRuntimeForAttractor : public ::NPCCrowd::NPCSpawnPointRuntime
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0x88
		::System::Boolean attractorEnable; // 0x90
		::System::Boolean attractorValid; // 0x91
		::System::Boolean infoValid; // 0x92
		::System::Int32 attractorHandler; // 0x94

		::System::Void _ctor(::NPCCrowd::AI::SpawnConfigForAttractor* config, ::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET))(this, config, groupConfig);
		}

		::System::Boolean SpawnInfoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET))(this);
		}

		::System::Boolean PathCountValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET))(this);
		}

		::System::Void SetAttractorValid(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET))(this, valid);
		}

		::System::Void SetAttractorEnable(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET))(this, valid);
		}

		::System::Boolean SpawnNPC(::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET))(this, npcComp);
		}

		::System::Boolean __base_PathCountValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET))(this);
		}

		::System::Boolean __base_SpawnInfoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET))(this);
		}

		::System::Boolean __base_SpawnNPC(::Class_3_F2DAD7F45F518868*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET))(this, P0);
		}
	};
}
