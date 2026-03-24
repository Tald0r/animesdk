#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ButtonState_TypeDefinitionIndex = 41732;

	enum class UIButtonEx_ButtonState : ::System::Int32
	{
		Normal = 0,
		Pressed = 1,
		Disabled = 3,
		Highlighted = 2,
	};
}
