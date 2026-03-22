#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 49424;

	enum class DamageElementType : ::System::Int32
	{
		None = 0,
		Ether = 205,
		ElementAll = 210,
		Physics = 200,
		Ice = 202,
		Fire = 201,
		Wind = 204,
		Elec = 203,
	};
}
