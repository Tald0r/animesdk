#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_BaseRotYType_TypeDefinitionIndex = 53380;

	enum class ConfigEntityAttackPattern_BaseRotYType : ::System::Int32
	{
		AttachPoint = 1,
		EntityTransform = 0,
	};
}
