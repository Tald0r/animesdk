#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 69412;

	enum class CharacterSize : ::System::Int32
	{
		Small = 1,
		Middle = 2,
		Tiny = 0,
		Large = 3,
		Gigantic = 4,
	};
}
