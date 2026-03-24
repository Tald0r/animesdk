#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceRepresentType_TypeDefinitionIndex = 64331;

	enum class HollowPieceRepresentType : ::System::Int32
	{
		UI = 4,
		Tv1X1 = 1,
		Tv2X2 = 2,
		None = 0,
		Empty = 3,
	};
}
