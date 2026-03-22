#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSound_TargetType_TypeDefinitionIndex = 68397;

	enum class LDSound_TargetType : ::System::Int32
	{
		Entity = 1,
		Key = 2,
		Anchor = 0,
		Global = 3,
	};
}
