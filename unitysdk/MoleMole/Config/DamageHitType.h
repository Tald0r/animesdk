#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageHitType_TypeDefinitionIndex = 75798;

	enum class DamageHitType : ::System::Int32
	{
		Cut = 101,
		Pierce = 103,
		None = 0,
		Punch = 102,
	};
}
