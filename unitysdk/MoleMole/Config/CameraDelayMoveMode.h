#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraDelayMoveMode_TypeDefinitionIndex = 57047;

	enum class CameraDelayMoveMode : ::System::Int32
	{
		OrbitDefault = 0,
		AimMode = 5,
		HexOrbitDefault = 12,
		None = -1,
		HighSpeedAttackDirect = 1,
		DragDirect = 3,
		AnyCamera = 99,
		HexMovementRotate = 11,
		SwitchAvatar = 20,
		LockOnDirect = 4,
		MovementRotate = 2,
		LowSpeedAttack = 25,
	};
}
