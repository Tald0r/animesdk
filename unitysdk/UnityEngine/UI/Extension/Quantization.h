#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int Quantization_TypeDefinitionIndex = 38406;

	enum class Quantization : ::System::Int32
	{
		DragDeltaX = 1,
		ScrollDeltaY = 4,
		DragTwoPoint = 5,
		ScrollDeltaX = 3,
		None = 0,
		DragDeltaY = 2,
	};
}
