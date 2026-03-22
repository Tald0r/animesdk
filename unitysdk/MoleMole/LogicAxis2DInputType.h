#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 50464;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		GamepadDpad = 7,
		GamepadLeftStick = 0,
		MousePosition = 6,
		None = -1,
		MousePositionDeltaRaw = 5,
		GamepadRightStick = 1,
		InLevelCameraMousePositionDelta = 2,
		PhotoModeZoom = 4,
		MouseScroll = 3,
	};
}
