#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityType_TypeDefinitionIndex = 56180;

	enum class BangbooAbilityType : ::System::Int32
	{
		Attack = 3,
		Jump = 0,
		Search = 2,
		Dive = 1,
	};
}
