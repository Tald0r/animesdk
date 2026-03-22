#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 46465;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		LowerLeft = 4,
		UpperRight = 5,
		LowerRight = 7,
		MiddleRight = 6,
		MiddleLeft = 3,
		JoyStick = 100,
		Center = 1,
		UpperLeft = 2,
		None = 0,
	};
}
