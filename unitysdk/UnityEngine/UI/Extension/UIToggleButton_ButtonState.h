#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 73010;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Pressed = 1,
		Normal = 0,
		Disable = 4,
		Highlighted = 2,
		Toggled = 3,
	};
}
