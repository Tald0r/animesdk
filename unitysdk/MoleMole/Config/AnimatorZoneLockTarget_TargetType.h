#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TargetType_TypeDefinitionIndex = 60113;

	enum class AnimatorZoneLockTarget_TargetType : ::System::Int32
	{
		CustomPosRot = 2,
		GuideTargetPosition = 1,
		Target = 0,
	};
}
