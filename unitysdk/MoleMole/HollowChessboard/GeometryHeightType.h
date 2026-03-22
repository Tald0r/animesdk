#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GeometryHeightType_TypeDefinitionIndex = 48507;

	enum class GeometryHeightType : ::System::Int32
	{
		NormalTop = 3,
		HalfTop = 2,
		None = 0,
		Back = 1,
		SpecialTop = 4,
	};
}
