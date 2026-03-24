#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 9047;

	enum class ConicSectionType : ::System::Int32
	{
		Ellipse = 3,
		IntersectingLines = 2,
		ParallelLines = 1,
		Parabola = 4,
		Hyperbola = 5,
		SingularPoint = 0,
	};
}
