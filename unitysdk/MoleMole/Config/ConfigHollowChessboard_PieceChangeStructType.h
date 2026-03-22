#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_PieceChangeStructType_TypeDefinitionIndex = 59155;

	enum class ConfigHollowChessboard_PieceChangeStructType : ::System::Int32
	{
		BubbleByMove = 1,
		BubbleByEvent = 2,
		BubbleByLight = 3,
		Ghost = 4,
		Default = 0,
		TimeRewind = 5,
	};
}
