#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MoveType_TypeDefinitionIndex = 51417;

	enum class LevelShootGameConfig_MoveType : ::System::Int32
	{
		Loop = 1,
		ArriveTargetStop = 4,
		NotMoving = 0,
		OppositeLoop = 2,
		ArriveTargetDestroy = 3,
	};
}
