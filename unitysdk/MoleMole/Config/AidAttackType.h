#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 76872;

	enum class AidAttackType : ::System::Int32
	{
		EvadeAid = 3,
		AssaultAid = 2,
		NoEnergyPerfectSwitchAid = 4,
		ChainAid = 6,
		ParryAid = 1,
		CommonAid = 0,
		BeHitAid = 5,
	};
}
