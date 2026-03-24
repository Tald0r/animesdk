#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode_LevelEndPerformType_TypeDefinitionIndex = 68169;

	enum class LDLevelEndNode_LevelEndPerformType : ::System::Int32
	{
		InDirectKill = 3,
		Normal = 0,
		Invalid = -1,
		Custom = 5,
		Dialog = 2,
		ShortCut = 4,
		Instant = 1,
		Empty = 10,
	};
}
