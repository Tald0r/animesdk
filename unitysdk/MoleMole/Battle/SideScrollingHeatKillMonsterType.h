#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 48249;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		NormalLevelUp = 2,
		Elite = 3,
	};
}
