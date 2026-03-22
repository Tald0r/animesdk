#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 62095;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		RelativePosition = 8,
		MoveToStart = 0,
		PredefinedAnim = 5,
		StretchToPresetBound = 10,
		MoveToCenter = 6,
		WorkLast = 2,
		DesignatedSpot = 3,
		StretchBackWards = 9,
		Stretch = 4,
		WorkFirst = 1,
		MoveToPlayer = 7,
	};
}
