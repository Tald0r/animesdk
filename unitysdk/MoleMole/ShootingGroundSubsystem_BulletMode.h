#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ShootingGroundSubsystem_BulletMode_TypeDefinitionIndex = 75422;

	enum class ShootingGroundSubsystem_BulletMode : ::System::Int32
	{
		SingleShot = 0,
		ScopedShot = 2,
		BurstFire = 1,
	};
}
