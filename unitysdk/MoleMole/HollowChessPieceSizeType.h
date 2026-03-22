#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowChessPieceSizeType_TypeDefinitionIndex = 36615;

	enum class HollowChessPieceSizeType : ::System::Int32
	{
		Size1x1 = 1,
		Dummy = 0,
		Size2x2 = 2,
		Size4x4 = 3,
	};
}
