#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_TagGroup_TypeDefinitionIndex = 45437;

	enum class AnimStatic_TagGroup : ::System::Int32
	{
		MuteMove = 0,
		Stable = 4,
		AttackOrSkill = 3,
		Movement = 5,
		MuteSkill = 1,
		MuteSteer = 2,
	};
}
