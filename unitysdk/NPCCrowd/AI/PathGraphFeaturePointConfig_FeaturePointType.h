#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 81262;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		SpawnPoint = 1,
		SplineSpawnPoint = 6,
		None = 0,
		ExitPoint = 2,
		BatchSpawnPoint = 5,
		GuidePoint = 4,
		CrossingPoint = 3,
	};
}
