#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 53640;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		Up = 0,
		Pressing = 2,
		UpPendingDown = 4,
		UpPendingPress = 3,
		Down = 1,
	};
}
