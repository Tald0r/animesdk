#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_ControlPointsSynchronizer_SynchronizationRequest_TypeDefinitionIndex = 35651;

	enum class CurvySpline_ControlPointsSynchronizer_SynchronizationRequest : ::System::Int32
	{
		None = 0,
		SplineToHierarchy = 1,
		HierarchyToSpline = 2,
	};
}
