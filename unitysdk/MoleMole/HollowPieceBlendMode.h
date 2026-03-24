#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowPieceBlendMode_TypeDefinitionIndex = 76841;

	enum class HollowPieceBlendMode : ::System::Int32
	{
		AlphaBlend = 0,
		None = -1,
		Add = 1,
		Multiply = 2,
		Overlay = 3,
	};
}
