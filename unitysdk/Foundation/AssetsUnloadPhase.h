#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadPhase_TypeDefinitionIndex = 7727;

	enum class AssetsUnloadPhase : ::System::Int32
	{
		OnRestart = 1,
		None = 0,
	};
}
