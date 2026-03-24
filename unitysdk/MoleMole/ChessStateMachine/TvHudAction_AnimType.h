#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TvHudAction_AnimType_TypeDefinitionIndex = 75348;

	enum class TvHudAction_AnimType : ::System::Int32
	{
		FadeOut = 1,
		FadeInAndLoop = 0,
	};
}
