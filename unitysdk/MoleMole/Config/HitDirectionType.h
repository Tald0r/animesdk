#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDirectionType_TypeDefinitionIndex = 64207;

	enum class HitDirectionType : ::System::Int32
	{
		PatternForwardDir = 2,
		None = 999,
		AttackerLeftDir = 8,
		AttackerToAttackeeDir = 1,
		PatternToAttackeeDir = 3,
		PatternBackDir = 4,
		AttackerBackDir = 10,
		PatternAside = 7,
		PatternRightDir = 6,
		PatternLeftDir = 5,
		AttackerForwardDir = 0,
		AttackerRightDir = 9,
	};
}
