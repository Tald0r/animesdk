#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimType_TypeDefinitionIndex = 77247;

	enum class UVAnimType : ::System::Int32
	{
		FixAnchorScaleAnim = 2,
		FullFillScaleAnim = 0,
		Normal = 1,
	};
}
