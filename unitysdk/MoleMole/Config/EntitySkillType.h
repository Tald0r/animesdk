#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 51093;

	enum class EntitySkillType : ::System::Int32
	{
		None = 20,
		MaxCount = 23,
		Field = 12,
		Cannon = 9,
		QTE = 6,
		BangbooAidSkill = 21,
		AssaultAid = 16,
		ExSp = 5,
		Shield = 10,
		EvadeAid = 17,
		Normal = 0,
		Branch = 3,
		CommonAid = 19,
		ChainAttack = 22,
		NoEnergyPerfectSwitchAid = 18,
		Counter = 2,
		BeHitAid = 14,
		Resonate = 11,
		ParryAid = 15,
		Sp = 4,
		Evade = 7,
		Rush = 1,
		ExQTE = 13,
		RandomSkill = 8,
	};
}
