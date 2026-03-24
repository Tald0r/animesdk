#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataClearPriority_TypeDefinitionIndex = 38857;

	enum class ConfigDataClearPriority : ::System::Int32
	{
		ByPriority = 3,
		Self = 2,
		SamePriority = 0,
		All = 1,
	};
}
