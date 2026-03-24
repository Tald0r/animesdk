#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyFightModeType_TypeDefinitionIndex = 41190;

	enum class BuddyFightModeType : ::System::Int32
	{
		Attack = 1,
		Follow = 0,
	};
}
