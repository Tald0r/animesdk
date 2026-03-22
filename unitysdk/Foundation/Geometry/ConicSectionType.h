#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 8927;

	enum class ConicSectionType : ::System::Int32
	{
		SingularPoint = 0,
		ParallelLines = 1,
		Ellipse = 3,
		IntersectingLines = 2,
		Parabola = 4,
		Hyperbola = 5,
	};
}
