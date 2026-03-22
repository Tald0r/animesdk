#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModifyFunc_TypeDefinitionIndex = 78811;

	enum class TargetValueModifyFunc : ::System::Int32
	{
		Mul = 2,
		Unknow = 0,
		Add = 1,
		Replace = 3,
	};
}
