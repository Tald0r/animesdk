#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionTask_State_TypeDefinitionIndex = 75825;

	enum class LDStarRandomPositionTask_State : ::System::Int32
	{
		Pause = 2,
		Stop = 0,
		Runing = 1,
	};
}
