#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_Style_TypeDefinitionIndex = 58656;

	enum class CameraDelayMoveDataBlendDefinition_Style : ::System::Int32
	{
		Custom = 7,
		HardIn = 4,
		EaseInOut = 1,
		EaseIn = 2,
		Linear = 6,
		HardOut = 5,
		Cut = 0,
		EaseOut = 3,
	};
}
