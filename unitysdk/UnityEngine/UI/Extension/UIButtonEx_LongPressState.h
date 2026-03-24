#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 41734;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		Down = 1,
		UpPendingDown = 4,
		Up = 0,
		UpPendingPress = 3,
		Pressing = 2,
	};
}
