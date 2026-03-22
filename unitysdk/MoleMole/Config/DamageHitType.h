#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageHitType_TypeDefinitionIndex = 47281;

	enum class DamageHitType : ::System::Int32
	{
		Cut = 101,
		Pierce = 103,
		Punch = 102,
		None = 0,
	};
}
