#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelEndType_TypeDefinitionIndex = 68860;

	enum class LevelEndType : ::System::Int32
	{
		Instant = 4,
		IndirectKill = 3,
		Dialog = 5,
		DirectKill = 2,
		Unknown = 0,
		LevelFailed = 1,
	};
}
