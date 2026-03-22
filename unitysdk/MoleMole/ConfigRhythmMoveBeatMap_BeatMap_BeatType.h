#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigRhythmMoveBeatMap_BeatMap_BeatType_TypeDefinitionIndex = 58812;

	enum class ConfigRhythmMoveBeatMap_BeatMap_BeatType : ::System::Int32
	{
		Tetris = 5,
		Show = 4,
		FromRight = 3,
		FromLeft = 2,
		FromUp = 0,
		FromDown = 1,
	};
}
