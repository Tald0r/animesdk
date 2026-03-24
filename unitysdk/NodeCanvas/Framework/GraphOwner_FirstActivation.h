#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_FirstActivation_TypeDefinitionIndex = 27108;

	enum class GraphOwner_FirstActivation : ::System::Int32
	{
		Async = 2,
		OnStart = 1,
		OnEnable = 0,
	};
}
