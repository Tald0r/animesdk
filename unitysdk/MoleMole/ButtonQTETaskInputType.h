#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 41022;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelSwitchAvatar = 5,
		InLevelNormalAttack = 1,
		InLevelEvade = 4,
		None = 0,
		MonsterFantasyQTEAttack = 6,
		InLevelCommonSkill = 8,
		InLevelExQTEAttack = 3,
		MonsterFantasyQTEEvade = 7,
		InLevelSpecialAttack = 2,
	};
}
