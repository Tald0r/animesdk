#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerAddedTextureStatus_TypeDefinitionIndex = 61870;

	enum class HoundPlayerAddedTextureStatus : ::System::Int32
	{
		Max = 4,
		None = 0,
		WearWoolStart = 1,
		WearWoolEnd = 3,
		WearWoolLoop = 2,
	};
}
