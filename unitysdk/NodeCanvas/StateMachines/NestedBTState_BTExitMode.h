#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedBTState_BTExitMode_TypeDefinitionIndex = 25695;

	enum class NestedBTState_BTExitMode : ::System::Int32
	{
		PauseAndResume = 1,
		StopAndRestart = 0,
	};
}
