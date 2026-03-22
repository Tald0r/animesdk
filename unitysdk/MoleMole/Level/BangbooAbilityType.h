#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityType_TypeDefinitionIndex = 56590;

	enum class BangbooAbilityType : ::System::Int32
	{
		Jump = 0,
		Attack = 3,
		Search = 2,
		Dive = 1,
	};
}
