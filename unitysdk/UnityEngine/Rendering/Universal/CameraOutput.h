#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CameraOutput_TypeDefinitionIndex = 28778;

	enum class CameraOutput : ::System::Int32
	{
		Screen = 0,
		Texture = 1,
		Camera = 0,
	};
}
