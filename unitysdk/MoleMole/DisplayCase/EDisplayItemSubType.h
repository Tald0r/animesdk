#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int EDisplayItemSubType_TypeDefinitionIndex = 46514;

	enum class EDisplayItemSubType : ::System::Int32
	{
		Fashioned = 4,
		None = 0,
		Story = 1,
		Others = 99,
		Limited = 3,
		Weapon = 2,
		Panel = 50,
	};
}
