#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 11622;

	enum class EAvatarSkillType : ::System::Int16
	{
		CoreSkill = 5,
		CooperateSkill = 3,
		AssistSkill = 6,
		EnumCount = 7,
		UniqueSkill = 4,
		Evade = 2,
		CommonAttack = 0,
		SpecialAttack = 1,
	};
}
