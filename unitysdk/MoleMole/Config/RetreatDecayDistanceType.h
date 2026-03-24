#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RetreatDecayDistanceType_TypeDefinitionIndex = 74764;

	enum class RetreatDecayDistanceType : ::System::Int32
	{
		AttackerToAttackee = 1,
		None = 0,
		PatternToAttackee = 2,
	};
}
