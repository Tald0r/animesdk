#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 77075;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Normal = 0,
		Pressed = 1,
		Disable = 4,
		Toggled = 3,
		Highlighted = 2,
	};
}
