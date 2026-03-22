#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleRewardType_TypeDefinitionIndex = 17060;

	enum class EBattleRewardType : ::System::Int16
	{
		Challenge = 5,
		Client = 1,
		BattleEvt = 2,
		Ext = 3,
		Fight = 4,
	};
}
