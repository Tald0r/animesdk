#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCameraMoveNode_ChessboardCameraMoveType_TypeDefinitionIndex = 41170;

	enum class ConfigChessboardCameraMoveNode_ChessboardCameraMoveType : ::System::Int32
	{
		MoveToPlayer = 7,
		DesignatedSpot = 3,
		WorkLast = 2,
		PredefinedAnim = 5,
		Stretch = 4,
		StretchToPresetBound = 10,
		MoveToCenter = 6,
		WorkFirst = 1,
		RelativePosition = 8,
		MoveToStart = 0,
		StretchBackWards = 9,
	};
}
