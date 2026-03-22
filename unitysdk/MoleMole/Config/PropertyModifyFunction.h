#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 51197;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Div = 4,
		Mod = 6,
		Replace = 3,
		Add = 1,
		Rand = 5,
		Mul = 2,
		Unknow = 0,
	};
}
