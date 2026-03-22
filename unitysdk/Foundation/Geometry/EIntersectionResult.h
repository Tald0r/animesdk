#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EIntersectionResult_TypeDefinitionIndex = 8969;

	enum class EIntersectionResult : ::System::Int32
	{
		OneIntersection = 2,
		InfiniteIntersection = 4,
		TwoIntersection = 3,
		Invalid = 0,
		NoIntersection = 1,
	};
}
