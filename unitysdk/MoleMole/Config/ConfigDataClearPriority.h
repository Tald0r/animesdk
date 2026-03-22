#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataClearPriority_TypeDefinitionIndex = 65852;

	enum class ConfigDataClearPriority : ::System::Int32
	{
		SamePriority = 0,
		Self = 2,
		All = 1,
		ByPriority = 3,
	};
}
