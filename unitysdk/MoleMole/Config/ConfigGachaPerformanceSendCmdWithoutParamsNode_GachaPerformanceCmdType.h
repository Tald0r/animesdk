#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 76505;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		PlaySummonsBornAnimation = 9,
		PlayItemShake = 3,
		ItemStageRaritySPerform = 1,
		ResetGaussianBlurParams = 2,
		ItemStageRarityPerform = 7,
		PlayStageRotateScreenEffects = 5,
		PlayStageRotateEffect = 6,
		SetTvMatProperty = 4,
		PlayTextShotTimeline = 8,
		TvRaritySPerform = 0,
	};
}
