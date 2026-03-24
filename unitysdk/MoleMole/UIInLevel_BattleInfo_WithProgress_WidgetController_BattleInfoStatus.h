#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 37446;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		SUB_BUFFS = 128,
		NONE = 0,
		ALL = 2147483647,
		REWARDS = 16,
		LEVEL_TIPS = 32,
		PROGRESS = 2,
		CHALLENGE_TARGET = 4,
		TITLE = 1,
		LEVEL_QUEST = 8,
		TIME_LIMIT_CHALLENGE_TARGET = 64,
	};
}
