#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StatusEffectType_TypeDefinitionIndex = 66460;

	enum class StatusEffectType : ::System::Int32
	{
		Stun = 2,
		None = 0,
		Fever = 1,
		FeverFadeOut = 4,
	};
}
