#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EFCLogLevel_TypeDefinitionIndex = 40106;

	enum class EFCLogLevel : ::System::Int32
	{
		Warning = 1,
		Error = 2,
		Info = 0,
	};
}
