#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CurveMoveComponent_Config_MoveType_TypeDefinitionIndex = 50408;

	enum class CurveMoveComponent_Config_MoveType : ::System::Int32
	{
		MovePosition = 2,
		Velocity = 0,
		KinematicVelocity = 1,
		SetPosition = 3,
	};
}
