#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDevice_TypeDefinitionIndex = 58694;

	enum class MobileTouchRumbleDevice : ::System::Int32
	{
		OnlyCellphone = 1,
		Auto = 0,
		OnlyGamepad = 2,
	};
}
