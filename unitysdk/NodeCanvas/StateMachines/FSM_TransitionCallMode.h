#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSM_TransitionCallMode_TypeDefinitionIndex = 26385;

	enum class FSM_TransitionCallMode : ::System::Int32
	{
		Stacked = 1,
		Clean = 2,
		Normal = 0,
	};
}
