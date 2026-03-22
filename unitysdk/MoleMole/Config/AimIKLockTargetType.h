#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AimIKLockTargetType_TypeDefinitionIndex = 53421;

	enum class AimIKLockTargetType : ::System::Int32
	{
		CustomPosRot = 1,
		Target = 0,
		Self = 2,
		CrossHair = 3,
	};
}
