#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 64559;

	enum class ESetCameraMode : ::System::Int32
	{
		None = 0,
		FixPos = 100,
		FocusCamera = 500,
		FocusAround = 300,
		SetMainCity = 400,
		TwoEntityMiddle = 200,
	};
}
