#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformMisc_ItemRarity_TypeDefinitionIndex = 43146;

	enum class ConfigGachaPerformMisc_ItemRarity : ::System::Int32
	{
		A = 3,
		B = 2,
		S = 4,
		Unknown = -1,
	};
}
