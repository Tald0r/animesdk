#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AtmosphereSourceType_TypeDefinitionIndex = 43562;

	enum class AtmosphereSourceType : ::System::Int32
	{
		TimeRewind = 1,
		None = 0,
	};
}
