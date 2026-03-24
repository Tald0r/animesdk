#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 79839;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		Event = 1,
		TimeRewind = 2,
		None = 6,
		RepairExit = 5,
		Move = 0,
		TimeRewindRise = 3,
		RepairEnter = 4,
	};
}
