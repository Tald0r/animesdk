#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterPickType_TypeDefinitionIndex = 40759;

	enum class MonsterPickType : ::System::Int32
	{
		Enemy = 0,
		Allied = 1,
		All = 2,
	};
}
