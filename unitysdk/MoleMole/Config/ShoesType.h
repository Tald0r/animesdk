#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShoesType_TypeDefinitionIndex = 42648;

	enum class ShoesType : ::System::Int32
	{
		Heels = 1,
		Mech = 2,
		Sports = 3,
		Boots = 0,
		Bear = 4,
	};
}
