#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BubbleReasonType_TypeDefinitionIndex = 59117;

	enum class ConfigHollowChessboard_BubbleReasonType : ::System::Int32
	{
		None = 6,
		Event = 1,
		TimeRewind = 2,
		Move = 0,
		RepairExit = 5,
		TimeRewindRise = 3,
		RepairEnter = 4,
	};
}
