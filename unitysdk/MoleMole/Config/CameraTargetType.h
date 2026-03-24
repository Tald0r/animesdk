#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetType_TypeDefinitionIndex = 72756;

	enum class CameraTargetType : ::System::Int32
	{
		SomePosition = 1,
		GameObject = 0,
		SomeDir = 2,
	};
}
