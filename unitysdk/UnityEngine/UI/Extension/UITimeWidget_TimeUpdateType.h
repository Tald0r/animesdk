#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeUpdateType_TypeDefinitionIndex = 64953;

	enum class UITimeWidget_TimeUpdateType : ::System::Int32
	{
		Static = 0,
		CountDown = 1,
		TimeStampCountDown = 2,
		CountUp = 3,
	};
}
