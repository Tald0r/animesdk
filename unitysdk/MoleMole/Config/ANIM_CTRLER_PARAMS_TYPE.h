#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 57201;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		UNKNOWN = 0,
		INT = 3,
		FLOAT = 4,
		BOOL = 2,
		TRIGGER = 1,
	};
}
