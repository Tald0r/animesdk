#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int RestoreMotionBlurPolicy_TypeDefinitionIndex = 37632;

	enum class RestoreMotionBlurPolicy : ::System::Int32
	{
		Inactive = 2,
		Active = 1,
		Restore = 0,
	};
}
