#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 50873;

	enum class ESetCameraMode : ::System::Int32
	{
		TwoEntityMiddle = 200,
		SetMainCity = 400,
		FixPos = 100,
		FocusCamera = 500,
		FocusAround = 300,
		None = 0,
	};
}
