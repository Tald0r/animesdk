#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySkillType_TypeDefinitionIndex = 55531;

	enum class EntitySkillType : ::System::Int32
	{
		ChainAttack = 22,
		BangbooAidSkill = 21,
		BeHitAid = 14,
		MaxCount = 23,
		EvadeAid = 17,
		Shield = 10,
		None = 20,
		Field = 12,
		Counter = 2,
		ExSp = 5,
		NoEnergyPerfectSwitchAid = 18,
		Cannon = 9,
		Evade = 7,
		Normal = 0,
		Branch = 3,
		Sp = 4,
		CommonAid = 19,
		RandomSkill = 8,
		ParryAid = 15,
		Resonate = 11,
		QTE = 6,
		ExQTE = 13,
		AssaultAid = 16,
		Rush = 1,
	};
}
