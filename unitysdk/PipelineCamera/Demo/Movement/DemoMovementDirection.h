#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Movement
{
	inline static constexpr unsigned int DemoMovementDirection_TypeDefinitionIndex = 34603;

	enum class DemoMovementDirection : ::System::Int32
	{
		Target = 0,
		Pivot = 1,
	};
}
