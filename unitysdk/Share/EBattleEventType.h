#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EBattleEventType_TypeDefinitionIndex = 15637;

	enum class EBattleEventType : ::System::Int16
	{
		Boss = 2,
		Normal = 0,
		Elite = 1,
	};
}
