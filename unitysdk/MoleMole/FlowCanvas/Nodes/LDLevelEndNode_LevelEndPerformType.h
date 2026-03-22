#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 56070;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		Empty = 10,
		Custom = 5,
		Normal = 0,
		ShortCut = 4,
		Invalid = -1,
		InDirectKill = 3,
		Instant = 1,
		Dialog = 2,
	};
}
