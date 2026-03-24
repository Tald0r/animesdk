#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDevice_TypeDefinitionIndex = 37599;

	enum class MobileTouchRumbleDevice : ::System::Int32
	{
		OnlyGamepad = 2,
		Auto = 0,
		OnlyCellphone = 1,
	};
}
