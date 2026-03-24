#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 46139;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		GamepadLeftStick = 0,
		MouseScroll = 3,
		MousePositionDeltaRaw = 5,
		None = -1,
		MousePosition = 6,
		GamepadRightStick = 1,
		InLevelCameraMousePositionDelta = 2,
		PhotoModeZoom = 4,
		GamepadDpad = 7,
	};
}
