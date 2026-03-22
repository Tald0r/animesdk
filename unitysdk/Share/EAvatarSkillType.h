#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 17251;

	enum class EAvatarSkillType : ::System::Int16
	{
		CooperateSkill = 3,
		UniqueSkill = 4,
		CommonAttack = 0,
		EnumCount = 7,
		SpecialAttack = 1,
		AssistSkill = 6,
		CoreSkill = 5,
		Evade = 2,
	};
}
