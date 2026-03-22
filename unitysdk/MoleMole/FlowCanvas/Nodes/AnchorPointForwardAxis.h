#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AnchorPointForwardAxis_TypeDefinitionIndex = 65362;

	enum class AnchorPointForwardAxis : ::System::Int32
	{
		PositiveAxisX = 1,
		NegativeAxisZ = 6,
		PositiveAxisY = 3,
		None = 0,
		NegativeAxisY = 4,
		PositiveAxisZ = 5,
		NegativeAxisX = 2,
	};
}
