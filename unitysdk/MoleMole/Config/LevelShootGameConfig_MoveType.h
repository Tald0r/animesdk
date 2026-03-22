#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MoveType_TypeDefinitionIndex = 46953;

	enum class LevelShootGameConfig_MoveType : ::System::Int32
	{
		OppositeLoop = 2,
		ArriveTargetStop = 4,
		ArriveTargetDestroy = 3,
		Loop = 1,
		NotMoving = 0,
	};
}
