#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_HitAttackeeDirectionType_TypeDefinitionIndex = 53378;

	enum class ConfigEntityAttackPattern_HitAttackeeDirectionType : ::System::Byte
	{
		PatternForwardDir = 0x2,
		PatternToAttackeeDir = 0x1,
		AttackerForwardDir = 0x0,
		AttackerToAttackeeDir = 0x3,
	};
}
