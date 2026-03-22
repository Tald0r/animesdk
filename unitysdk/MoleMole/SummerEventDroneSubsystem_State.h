#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventDroneSubsystem_State_TypeDefinitionIndex = 63648;

	enum class SummerEventDroneSubsystem_State : ::System::Int32
	{
		Idle = 3,
		Running = 1,
		Pending = 0,
		Finish = 2,
	};
}
