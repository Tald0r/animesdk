#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 57137;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		Default = 0,
		InteractMovie = 5,
		GridEvent = 3,
		NonInteract = 4,
		InteractSecondaryMovie = 6,
		Player = 2,
		Npc = 1,
	};
}
