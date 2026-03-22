#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_NapAnimatorUpdateMode_TypeDefinitionIndex = 37976;

	enum class ConfigMisc_NapAnimatorUpdateMode : ::System::Int32
	{
		Physics = 2,
		Manual = 1,
		Normal = 0,
	};
}
