#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterCreateDataAnimatorParamType_TypeDefinitionIndex = 42453;

	enum class MonsterCreateDataAnimatorParamType : ::System::Int32
	{
		Bool = 0,
		Int = 2,
		Trigger = 1,
		Float = 3,
	};
}
