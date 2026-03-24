#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowChessPieceSizeType_TypeDefinitionIndex = 65351;

	enum class HollowChessPieceSizeType : ::System::Int32
	{
		Size4x4 = 3,
		Dummy = 0,
		Size2x2 = 2,
		Size1x1 = 1,
	};
}
