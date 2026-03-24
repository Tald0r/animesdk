#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_ForceSpecialCameraLockType_TypeDefinitionIndex = 63913;

	enum class AnimatorZoneLockTarget_ForceSpecialCameraLockType : ::System::Int32
	{
		ForceNormal = 1,
		ForceBoss = 2,
		None = 0,
	};
}
