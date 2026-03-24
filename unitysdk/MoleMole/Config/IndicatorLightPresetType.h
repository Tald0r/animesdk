#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 76987;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		Empty = 3,
		PlayerOn = 6,
		Visible = 1,
		None = 0,
		Normal = 4,
		Battle = 5,
		Brighten = 2,
	};
}
