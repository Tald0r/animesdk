#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 54715;

	enum class AidAttackType : ::System::Int32
	{
		NoEnergyPerfectSwitchAid = 4,
		ParryAid = 1,
		BeHitAid = 5,
		EvadeAid = 3,
		AssaultAid = 2,
		CommonAid = 0,
		ChainAid = 6,
	};
}
