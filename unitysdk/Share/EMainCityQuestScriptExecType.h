#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainCityQuestScriptExecType_TypeDefinitionIndex = 12984;

	enum class EMainCityQuestScriptExecType : ::System::Int16
	{
		WhenEnterScene = 0,
		EnumCount = 2,
		Immediately = 1,
	};
}
