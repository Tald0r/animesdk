#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFieldHandleType_TypeDefinitionIndex = 46078;

	enum class ScreenEffectFieldHandleType : ::System::Int32
	{
		UseRuntimeProfileValue = 1,
		UseProfileDefaultValue = 0,
		UseNewValue = 2,
	};
}
