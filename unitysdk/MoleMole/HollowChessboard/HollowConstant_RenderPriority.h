#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_RenderPriority_TypeDefinitionIndex = 60907;

	enum class HollowConstant_RenderPriority : ::System::Int32
	{
		InteractMovie = 5,
		Npc = 1,
		InteractSecondaryMovie = 6,
		GridEvent = 3,
		Default = 0,
		NonInteract = 4,
		Player = 2,
	};
}
