#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_SpeedMode_TypeDefinitionIndex = 67183;

	enum class CurveMoveComponent_Config_SpeedMode : ::System::Int32
	{
		ResetPos = 4,
		Teleport = 3,
		Acceleration = 1,
		FixedSpeed = 0,
		Curve = 2,
	};
}
