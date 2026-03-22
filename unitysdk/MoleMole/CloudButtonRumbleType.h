#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CloudButtonRumbleType_TypeDefinitionIndex = 64340;

	enum class CloudButtonRumbleType : ::System::Int32
	{
		Disable = 0,
		Strong = 2,
		Weak = 1,
	};
}
