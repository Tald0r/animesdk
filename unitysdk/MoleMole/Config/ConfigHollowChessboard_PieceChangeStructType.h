#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 79814;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		TimeRewind = 5,
		BubbleByEvent = 2,
		Default = 0,
		BubbleByLight = 3,
		BubbleByMove = 1,
		Ghost = 4,
	};
}
