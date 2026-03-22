#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceBlendMode_TypeDefinitionIndex = 65432;

	enum class HollowPieceBlendMode : ::System::Int32
	{
		Add = 1,
		Overlay = 3,
		None = -1,
		AlphaBlend = 0,
		Multiply = 2,
	};
}
