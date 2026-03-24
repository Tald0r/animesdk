#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 48605;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Rand = 5,
		Unknow = 0,
		Replace = 3,
		Div = 4,
		Mod = 6,
		Mul = 2,
		Add = 1,
	};
}
