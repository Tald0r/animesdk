#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_EModulePreloadPhase_TypeDefinitionIndex = 47800;

	enum class NPCCrowdModuleMainSystem_EModulePreloadPhase : ::System::Int32
	{
		PreloadEnd = 3,
		StartPreloadAsset = 1,
		PreloadAssetFinished = 2,
		None = 0,
	};
}
