#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParamMode_TypeDefinitionIndex = 27297;

	enum class ParamMode : ::System::Int32
	{
		Result = 6,
		In = 1,
		Undefined = 0,
		Ref = 3,
		Instance = 4,
		Out = 2,
	};
}
