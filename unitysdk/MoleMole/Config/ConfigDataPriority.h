#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDataPriority_TypeDefinitionIndex = 68020;

	enum class ConfigDataPriority : ::System::Int32
	{
		Level = 1,
		Character = 0,
		World = 2,
	};
}
