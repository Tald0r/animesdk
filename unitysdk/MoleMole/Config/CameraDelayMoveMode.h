#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 42144;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		HexMovementRotate = 11,
		LowSpeedAttack = 25,
		OrbitDefault = 0,
		SwitchAvatar = 20,
		MovementRotate = 2,
		AimMode = 5,
		HighSpeedAttackDirect = 1,
		LockOnDirect = 4,
		HexOrbitDefault = 12,
		DragDirect = 3,
		None = -1,
		AnyCamera = 99,
	};
}
