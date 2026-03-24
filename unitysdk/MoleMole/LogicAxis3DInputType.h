#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis3DInputType_TypeDefinitionIndex = 71261;

	enum class LogicAxis3DInputType : ::System::Int32
	{
		Accelerometer = 1,
		Gyroscope = 0,
		None = -1,
		LinerAccelerometer = 4,
		RawGyroscope = 2,
		Attitude = 3,
		RawAttitude = 5,
	};
}
