#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 71642;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		PositiveAxisZ = 5,
		NegativeAxisX = 2,
		PositiveAxisX = 1,
		NegativeAxisY = 4,
		PositiveAxisY = 3,
		NegativeAxisZ = 6,
		None = 0,
	};
}
