#pragma once
#include "unitysdk/unitysdk.h"

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGridType_TypeDefinitionIndex = 24800;

	enum class HexagonalGridType : ::System::Byte
	{
		PointyEven = 0x1,
		PointyOdd = 0x0,
		FlatOdd = 0x2,
		FlatEven = 0x3,
	};
}
