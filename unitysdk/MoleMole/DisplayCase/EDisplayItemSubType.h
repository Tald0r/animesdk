#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int EDisplayItemSubType_TypeDefinitionIndex = 58589;

	enum class EDisplayItemSubType : ::System::Int32
	{
		Story = 1,
		Panel = 50,
		Limited = 3,
		Weapon = 2,
		None = 0,
		Others = 99,
		Fashioned = 4,
	};
}
