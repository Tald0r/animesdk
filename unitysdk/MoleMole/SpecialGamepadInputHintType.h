#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 57869;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		MouseMiddleButtonScroll = 6,
		DPadUpDownLeftRight = 3,
		DPadLeftRight = 5,
		None = 0,
		RightStick = 2,
		DPadUpDown = 4,
		LeftStick = 1,
	};
}
