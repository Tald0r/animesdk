#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 25465;

	enum class ParamMode : ::System::Int32
	{
		Out = 2,
		Instance = 4,
		Undefined = 0,
		In = 1,
		Result = 6,
		Ref = 3,
	};
}
