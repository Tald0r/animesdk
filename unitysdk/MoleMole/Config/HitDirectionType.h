#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 59316;

	enum class HitDirectionType : ::System::Int32
	{
		PatternLeftDir = 5,
		PatternAside = 7,
		AttackerLeftDir = 8,
		PatternBackDir = 4,
		AttackerForwardDir = 0,
		PatternToAttackeeDir = 3,
		AttackerRightDir = 9,
		AttackerToAttackeeDir = 1,
		AttackerBackDir = 10,
		PatternForwardDir = 2,
		None = 999,
		PatternRightDir = 6,
	};
}
