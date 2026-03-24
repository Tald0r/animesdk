#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 59378;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		WearWoolLoop = 2,
		WearWoolEnd = 3,
		Max = 4,
		WearWoolStart = 1,
		None = 0,
	};
}
