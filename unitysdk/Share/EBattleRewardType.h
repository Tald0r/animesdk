#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleRewardType_TypeDefinitionIndex = 14892;

	enum class EBattleRewardType : ::System::Int16
	{
		Client = 1,
		BattleEvt = 2,
		Ext = 3,
		Challenge = 5,
		Fight = 4,
	};
}
