#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDReportType_TypeDefinitionIndex = 28615;

	enum class HID_HIDReportType : ::System::Int32
	{
		Unknown = 0,
		Input = 1,
		Output = 2,
		Feature = 3,
	};
}
