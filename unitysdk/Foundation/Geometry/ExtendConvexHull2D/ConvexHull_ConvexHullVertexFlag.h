#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 9129;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		Line1 = 8,
		None = 0,
		Line3 = 32,
		LineBits = 4,
		EllipseBits = 2,
		LineMask = 60,
		Line0 = 4,
		Ellipse1 = 2,
		TotalBits = 6,
		Ellipse0 = 1,
		EllipseMask = 3,
		Line2 = 16,
	};
}
