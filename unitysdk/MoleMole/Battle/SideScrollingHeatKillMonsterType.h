#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 66081;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		NormalLevelUp = 2,
		None = 0,
		Elite = 3,
		Normal = 1,
	};
}
