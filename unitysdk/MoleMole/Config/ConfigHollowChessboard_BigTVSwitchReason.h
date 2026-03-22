#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVSwitchReason_TypeDefinitionIndex = 59099;

	enum class ConfigHollowChessboard_BigTVSwitchReason : ::System::Int32
	{
		BigToSmall = 1,
		SmallToBig = 2,
		BigToSmallAndSink = 4,
		SmallToBigAndRise = 3,
		None = 0,
	};
}
