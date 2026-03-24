#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 42304;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelEvade = 4,
		InLevelSpecialAttack = 2,
		MonsterFantasyQTEAttack = 6,
		InLevelCommonSkill = 8,
		InLevelExQTEAttack = 3,
		InLevelSwitchAvatar = 5,
		InLevelNormalAttack = 1,
		MonsterFantasyQTEEvade = 7,
		None = 0,
	};
}
