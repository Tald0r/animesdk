#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwitchReason_TypeDefinitionIndex = 79813;

	enum class ConfigHollowChessboard_BigTVSwitchReason : ::System::Int32
	{
		BigToSmall = 1,
		BigToSmallAndSink = 4,
		None = 0,
		SmallToBig = 2,
		SmallToBigAndRise = 3,
	};
}
