#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 50439;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Invalid = 10,
		Allied = 2,
		Evil = 3,
		Self = 1,
	};
}
