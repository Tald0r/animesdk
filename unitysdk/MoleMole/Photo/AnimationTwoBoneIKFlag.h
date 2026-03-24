#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKFlag_TypeDefinitionIndex = 59459;

	enum class AnimationTwoBoneIKFlag : ::System::Byte
	{
		MaintainEffectorRelativeRotation = 0x2,
		TakeRotationFromEffector = 0x4,
		None = 0x0,
		AllowStretching = 0x1,
	};
}
