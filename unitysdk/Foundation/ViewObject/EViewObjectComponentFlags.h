#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 64043;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		Enabled = 4,
		Detaching = 32,
		EnableUpdate = 2,
		CustomDestroy = 16,
	};
}
