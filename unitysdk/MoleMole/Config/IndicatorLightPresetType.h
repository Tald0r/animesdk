#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 46449;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		Brighten = 2,
		Empty = 3,
		None = 0,
		Visible = 1,
		Battle = 5,
		PlayerOn = 6,
		Normal = 4,
	};
}
