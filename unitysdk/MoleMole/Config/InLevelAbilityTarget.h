#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InLevelAbilityTarget_TypeDefinitionIndex = 37173;

	enum class InLevelAbilityTarget : ::System::Int32
	{
		Enemy_LevelFin = 14,
		Avatar_AvatarC = 5,
		Avatar_Buddy = 6,
		Enemy_Destruction = 11,
		Avatar_TeamEntity = 2,
		Avatar = 1,
		Buddy_Support = 13,
		Avatar_AvatarB = 4,
		Avatar_AvatarA = 3,
		Level = 20,
		Enemy_Elite = 9,
		None = 0,
		Enemy_LevelEnd = 15,
		Enemy_Normal = 8,
		Enemy_Boss = 10,
		Enemy = 7,
		Buddy_Fight = 12,
	};
}
