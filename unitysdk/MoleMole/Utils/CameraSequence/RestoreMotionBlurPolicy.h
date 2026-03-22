#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int RestoreMotionBlurPolicy_TypeDefinitionIndex = 36637;

	enum class RestoreMotionBlurPolicy : ::System::Int32
	{
		Restore = 0,
		Active = 1,
		Inactive = 2,
	};
}
