#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 59418;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		PlayItemShake = 3,
		PlayStageRotateScreenEffects = 5,
		ItemStageRaritySPerform = 1,
		PlayStageRotateEffect = 6,
		PlaySummonsBornAnimation = 9,
		PlayTextShotTimeline = 8,
		TvRaritySPerform = 0,
		SetTvMatProperty = 4,
		ResetGaussianBlurParams = 2,
		ItemStageRarityPerform = 7,
	};
}
