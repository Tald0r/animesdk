#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_SubdivisionMode_TypeDefinitionIndex = 5195;

	enum class TrailRenderer_SubdivisionMode : ::System::Int32
	{
		Disabled = 0,
		Bezier = 1,
		BSpline = 2,
	};
}
