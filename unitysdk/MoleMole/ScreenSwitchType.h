#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ScreenSwitchType_TypeDefinitionIndex = 65278;

	enum class ScreenSwitchType : ::System::Int32
	{
		Switch = 1,
		Close = 2,
		Open = 0,
	};
}
