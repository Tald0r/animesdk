#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_FirstActivation_TypeDefinitionIndex = 25567;

	enum class GraphOwner_FirstActivation : ::System::Int32
	{
		OnStart = 1,
		OnEnable = 0,
		Async = 2,
	};
}
