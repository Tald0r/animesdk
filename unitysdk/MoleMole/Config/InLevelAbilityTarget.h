#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InLevelAbilityTarget_TypeDefinitionIndex = 73767;

	enum class InLevelAbilityTarget : ::System::Int32
	{
		Buddy_Support = 13,
		Enemy_Normal = 8,
		Avatar_AvatarB = 4,
		Avatar_TeamEntity = 2,
		Enemy_LevelEnd = 15,
		None = 0,
		Enemy_Destruction = 11,
		Avatar_AvatarC = 5,
		Enemy_Boss = 10,
		Level = 20,
		Avatar = 1,
		Avatar_AvatarA = 3,
		Buddy_Fight = 12,
		Enemy = 7,
		Avatar_Buddy = 6,
		Enemy_LevelFin = 14,
		Enemy_Elite = 9,
	};
}
