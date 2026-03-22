#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 37761;

	enum class EReloadGroupReason : ::System::Int32
	{
		Default = 0,
		GraphNode_RollbackPoint = 6,
		TeamAllDead_Revive = 5,
		TeamAllDead = 4,
		GraphNode_ReloadSuite = 8,
		GM = 2,
		TeamChange = 7,
		ServerNotify = 1,
		Unstuck = 3,
	};
}
