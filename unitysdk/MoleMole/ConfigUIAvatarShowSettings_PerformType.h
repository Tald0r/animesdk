#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowSettings_PerformType_TypeDefinitionIndex = 62399;

	enum class ConfigUIAvatarShowSettings_PerformType : ::System::Byte
	{
		AnimatorController = 0x2,
		AnimationClip = 0x0,
		TimelinePrefab = 0x1,
	};
}
