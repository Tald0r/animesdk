#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTeamType_TypeDefinitionIndex = 63366;

	enum class BuddyTeamType : ::System::Int32
	{
		Unknown = 0,
		Fighting = 1,
		Assisting = 2,
	};
}
