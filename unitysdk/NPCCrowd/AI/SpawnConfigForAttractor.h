#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnPoint.h"

#define NPCCROWD_AI_SPAWNCONFIGFORATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B3C410)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnConfigForAttractor_TypeDefinitionIndex = 39638;

	class SpawnConfigForAttractor : public ::NPCCrowd::AI::SpawnPoint
	{
	public:
		::System::Int32 npcSubID; // 0x38
		::System::Int32 attractorHandler; // 0x3C
		::System::Int32 npcCommonTagID; // 0x40
		::System::Boolean useNpcSub; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNCONFIGFORATTRACTOR__CTOR_OFFSET))(this);
		}
	};
}
