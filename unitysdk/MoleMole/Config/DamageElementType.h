#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 62920;

	enum class DamageElementType : ::System::Int32
	{
		Fire = 201,
		Ice = 202,
		None = 0,
		Wind = 204,
		Elec = 203,
		ElementAll = 210,
		Physics = 200,
		Ether = 205,
	};
}
