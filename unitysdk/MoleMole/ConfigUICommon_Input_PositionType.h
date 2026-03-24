#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 63105;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		UpperLeft = 2,
		JoyStick = 100,
		None = 0,
		MiddleLeft = 3,
		UpperRight = 5,
		LowerRight = 7,
		LowerLeft = 4,
		Center = 1,
		MiddleRight = 6,
	};
}
