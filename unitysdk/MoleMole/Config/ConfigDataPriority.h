#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataPriority_TypeDefinitionIndex = 39781;

	enum class ConfigDataPriority : ::System::Int32
	{
		Character = 0,
		Level = 1,
		World = 2,
	};
}
