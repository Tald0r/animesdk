#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ShowEntryType_TypeDefinitionIndex = 71611;

	enum class ShowEntryType : ::System::Int32
	{
		MovieKey = 2,
		SecondaryMovie = 3,
		AnimKey = 4,
		AnimID = 0,
		TextureKey = 1,
		MovieId = 5,
	};
}
