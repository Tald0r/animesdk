#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus_TypeDefinitionIndex = 37327;

	enum class UIInLevel_BattleInfo_WithProgress_WidgetController_BattleInfoStatus : ::System::Int32
	{
		LEVEL_QUEST = 8,
		NONE = 0,
		TITLE = 1,
		ALL = 2147483647,
		CHALLENGE_TARGET = 4,
		PROGRESS = 2,
		LEVEL_TIPS = 32,
		REWARDS = 16,
	};
}
