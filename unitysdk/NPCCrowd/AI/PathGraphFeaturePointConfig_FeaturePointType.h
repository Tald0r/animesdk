#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 68321;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		SplineSpawnPoint = 6,
		None = 0,
		SpawnPoint = 1,
		CrossingPoint = 3,
		BatchSpawnPoint = 5,
		GuidePoint = 4,
		ExitPoint = 2,
	};
}
