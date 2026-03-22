#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 72797;

	enum class LevelEndType : ::System::Int32
	{
		Instant = 4,
		Dialog = 5,
		Unknown = 0,
		LevelFailed = 1,
		IndirectKill = 3,
		DirectKill = 2,
	};
}
