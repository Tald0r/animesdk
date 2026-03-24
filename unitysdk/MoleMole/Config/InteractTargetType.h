#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractTargetType_TypeDefinitionIndex = 51623;

	enum class InteractTargetType : ::System::Int32
	{
		Other = 2,
		Piece = 1,
		All = 3,
	};
}
