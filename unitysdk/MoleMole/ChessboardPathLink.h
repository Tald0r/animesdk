#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 73026;

	enum class ChessboardPathLink : ::System::Int32
	{
		BR = 6,
		LR = 1,
		TLR = 7,
		TL = 3,
		BL = 5,
		RTB = 10,
		R = 12,
		Empty = 15,
		L = 11,
		BLR = 8,
		T = 13,
		LTB = 9,
		TB = 2,
		TBLR = 0,
		TR = 4,
		B = 14,
	};
}
