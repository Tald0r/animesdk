#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_DieWay_TypeDefinitionIndex = 70688;

	enum class AnimStatic_DieWay : ::System::Int32
	{
		DieHitThrow = 1,
		DieHitDown = 4,
		Count = 5,
		DieGround = 0,
		DieHitFlyFront = 2,
		DieHitFlyBack = 3,
	};
}
