#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 64954;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		ShowMinuteSecond = 6,
		ShowOne = 2,
		DefaultType = 0,
		ShowHourMinute = 3,
		ActivityType = 1,
		OnlyDay = 4,
		ShowHourMinuteSecond = 5,
	};
}
