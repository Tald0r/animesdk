#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 47180;

	enum class CharacterSize : ::System::Int32
	{
		Tiny = 0,
		Gigantic = 4,
		Middle = 2,
		Small = 1,
		Large = 3,
	};
}
