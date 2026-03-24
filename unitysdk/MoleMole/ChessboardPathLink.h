#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessboardPathLink_TypeDefinitionIndex = 76272;

	enum class ChessboardPathLink : ::System::Int32
	{
		TB = 2,
		B = 14,
		TBLR = 0,
		LTB = 9,
		L = 11,
		RTB = 10,
		BL = 5,
		TR = 4,
		TL = 3,
		BLR = 8,
		BR = 6,
		TLR = 7,
		T = 13,
		R = 12,
		Empty = 15,
		LR = 1,
	};
}
