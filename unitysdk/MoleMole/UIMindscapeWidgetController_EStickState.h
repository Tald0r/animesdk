#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_EStickState_TypeDefinitionIndex = 74114;

	enum class UIMindscapeWidgetController_EStickState : ::System::Int32
	{
		Gyro = 0,
		WaitReStartGyro = 2,
		Stick = 1,
	};
}
