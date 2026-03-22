#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 46379;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		Detaching = 32,
		Enabled = 4,
		CustomDestroy = 16,
		EnableUpdate = 2,
	};
}
