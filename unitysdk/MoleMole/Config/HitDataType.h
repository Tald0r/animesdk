#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDataType_TypeDefinitionIndex = 56669;

	enum class HitDataType : ::System::Int32
	{
		Melee = 1,
		Range = 0,
	};
}
