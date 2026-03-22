#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MainQuestDifficultyLevel_TypeDefinitionIndex = 58414;

	enum class MainQuestDifficultyLevel : ::System::Int32
	{
		Normal = 1,
		Challenge = 2,
		None = 0,
	};
}
