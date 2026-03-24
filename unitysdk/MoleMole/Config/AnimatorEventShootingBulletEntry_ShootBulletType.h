#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingBulletEntry_ShootBulletType_TypeDefinitionIndex = 61733;

	enum class AnimatorEventShootingBulletEntry_ShootBulletType : ::System::Int32
	{
		ScopedShot = 2,
		SingleShot = 0,
		BurstFire = 1,
	};
}
