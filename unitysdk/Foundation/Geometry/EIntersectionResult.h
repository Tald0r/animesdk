#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EIntersectionResult_TypeDefinitionIndex = 8919;

	enum class EIntersectionResult : ::System::Int32
	{
		Invalid = 0,
		OneIntersection = 2,
		NoIntersection = 1,
		InfiniteIntersection = 4,
		TwoIntersection = 3,
	};
}
