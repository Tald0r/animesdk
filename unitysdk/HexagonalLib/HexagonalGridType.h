#pragma once
#include "unitysdk/unitysdk.h"

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGridType_TypeDefinitionIndex = 25830;

	enum class HexagonalGridType : ::System::Byte
	{
		FlatEven = 0x3,
		PointyOdd = 0x0,
		PointyEven = 0x1,
		FlatOdd = 0x2,
	};
}
