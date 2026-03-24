#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedFSMState_FSMExitMode_TypeDefinitionIndex = 26428;

	enum class NestedFSMState_FSMExitMode : ::System::Int32
	{
		PauseAndResume = 1,
		StopAndRestart = 0,
	};
}
