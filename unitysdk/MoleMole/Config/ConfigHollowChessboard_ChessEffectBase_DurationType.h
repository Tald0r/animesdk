#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBase_DurationType_TypeDefinitionIndex = 59101;

	enum class ConfigHollowChessboard_ChessEffectBase_DurationType : ::System::Int32
	{
		Immediately = 0,
		FixedDuration = 2,
		FixedRatio = 3,
		UntilEffectFinish = 1,
	};
}
