#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 78698;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Invalid = 10,
		Self = 1,
		Evil = 3,
		Allied = 2,
	};
}
