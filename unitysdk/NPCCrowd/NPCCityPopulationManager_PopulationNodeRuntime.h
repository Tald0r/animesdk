#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/FNodeRuntime.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCITYPOPULATIONMANAGER_POPULATIONNODERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCDEF0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCityPopulationManager_PopulationNodeRuntime_TypeDefinitionIndex = 67650;

	class NPCCityPopulationManager_PopulationNodeRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* npcTagPool; // 0x10
		::NPCCrowd::AI::FNodeRuntime graphNodeInfo; // 0x18
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* spawnedNPC; // 0x30
		::System::Single leftTimeToSpawn; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_POPULATIONNODERUNTIME__CTOR_OFFSET))(this);
		}
	};
}
