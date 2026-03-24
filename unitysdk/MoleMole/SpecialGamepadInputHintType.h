#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 62358;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		DPadLeftRight = 5,
		MouseMiddleButtonScroll = 6,
		LeftStick = 1,
		RightStick = 2,
		None = 0,
		DPadUpDown = 4,
		DPadUpDownLeftRight = 3,
	};
}
