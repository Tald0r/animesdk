#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 46262;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		ActivityType = 1,
		ShowOne = 2,
		ShowHourMinuteSecond = 5,
		DefaultType = 0,
		OnlyDay = 4,
		ShowHourMinute = 3,
		ShowMinuteSecond = 6,
	};
}
