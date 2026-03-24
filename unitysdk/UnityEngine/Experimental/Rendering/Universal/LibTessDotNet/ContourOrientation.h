#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 29238;

	enum class ContourOrientation : ::System::Int32
	{
		Original = 0,
		Clockwise = 1,
		CounterClockwise = 2,
	};
}
