#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 52611;

	enum class EReloadGroupReason : ::System::Int32
	{
		ServerNotify = 1,
		GraphNode_ReloadSuite = 8,
		TeamAllDead_Revive = 5,
		TeamAllDead = 4,
		GraphNode_RollbackPoint = 6,
		TeamChange = 7,
		GM = 2,
		Default = 0,
		Unstuck = 3,
	};
}
