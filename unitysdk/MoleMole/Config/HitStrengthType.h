#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitStrengthType_TypeDefinitionIndex = 48164;

	enum class HitStrengthType : ::System::Int32
	{
		Heavy = 1,
		Light = 0,
	};
}
