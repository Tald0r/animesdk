#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardChangeGridType_TypeDefinitionIndex = 71078;

	enum class ChessboardChangeGridType : ::System::Int32
	{
		Diffusion = 3,
		ChangeGridDirectly = 1,
		ResetGrid = 0,
		SinkAllThenRiseAll = 2,
	};
}
