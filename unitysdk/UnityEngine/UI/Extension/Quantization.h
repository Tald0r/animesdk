#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Quantization_TypeDefinitionIndex = 41064;

	enum class Quantization : ::System::Int32
	{
		ScrollDeltaY = 4,
		DragTwoPoint = 5,
		None = 0,
		DragDeltaY = 2,
		ScrollDeltaX = 3,
		DragDeltaX = 1,
	};
}
