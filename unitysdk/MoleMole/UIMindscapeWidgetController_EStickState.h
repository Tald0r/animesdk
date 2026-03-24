#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_EStickState_TypeDefinitionIndex = 73436;

	enum class UIMindscapeWidgetController_EStickState : ::System::Int32
	{
		WaitReStartGyro = 2,
		Stick = 1,
		Gyro = 0,
	};
}
