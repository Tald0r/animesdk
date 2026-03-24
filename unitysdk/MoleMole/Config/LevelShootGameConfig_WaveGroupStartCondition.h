#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WaveGroupStartCondition_TypeDefinitionIndex = 51422;

	enum class LevelShootGameConfig_WaveGroupStartCondition : ::System::Int32
	{
		LastGroupFirstRefresh = 3,
		NoCondition = 0,
		LastGroupAllRefresh = 2,
		LastGroupDie = 1,
	};
}
