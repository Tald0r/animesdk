#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraTargetType_TypeDefinitionIndex = 63422;

	enum class CameraTargetType : ::System::Int32
	{
		GameObject = 0,
		SomeDir = 2,
		SomePosition = 1,
	};
}
