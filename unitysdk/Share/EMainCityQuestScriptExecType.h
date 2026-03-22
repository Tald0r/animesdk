#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainCityQuestScriptExecType_TypeDefinitionIndex = 15047;

	enum class EMainCityQuestScriptExecType : ::System::Int16
	{
		Immediately = 1,
		WhenEnterScene = 0,
		EnumCount = 2,
	};
}
