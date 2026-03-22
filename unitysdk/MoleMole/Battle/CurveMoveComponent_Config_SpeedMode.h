#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_SpeedMode_TypeDefinitionIndex = 50410;

	enum class CurveMoveComponent_Config_SpeedMode : ::System::Int32
	{
		Curve = 2,
		FixedSpeed = 0,
		ResetPos = 4,
		Acceleration = 1,
		Teleport = 3,
	};
}
