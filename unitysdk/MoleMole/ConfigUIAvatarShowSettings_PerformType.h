#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettings_PerformType_TypeDefinitionIndex = 77974;

	enum class ConfigUIAvatarShowSettings_PerformType : ::System::Byte
	{
		TimelinePrefab = 0x1,
		AnimatorController = 0x2,
		AnimationClip = 0x0,
	};
}
