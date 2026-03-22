#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 75655;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		TRIGGER = 1,
		INT = 3,
		UNKNOWN = 0,
		FLOAT = 4,
		BOOL = 2,
	};
}
