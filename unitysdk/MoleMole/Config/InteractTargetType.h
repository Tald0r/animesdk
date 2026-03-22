#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 72446;

	enum class InteractTargetType : ::System::Int32
	{
		All = 3,
		Piece = 1,
		Other = 2,
	};
}
