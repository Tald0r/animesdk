#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 8931;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		Ellipse0 = 1,
		LineBits = 4,
		Line0 = 4,
		LineMask = 60,
		Line1 = 8,
		Ellipse1 = 2,
		EllipseBits = 2,
		Line3 = 32,
		Line2 = 16,
		TotalBits = 6,
		EllipseMask = 3,
		None = 0,
	};
}
