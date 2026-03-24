#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeEffect_TypeDefinitionIndex = 48106;

	enum class ENodeEffect : ::System::Int32
	{
		None = 0,
		FadeOut = 2,
		FadeIn = 1,
	};
}
