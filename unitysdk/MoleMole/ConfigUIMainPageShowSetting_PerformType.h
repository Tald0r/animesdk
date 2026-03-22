#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShowSetting_PerformType_TypeDefinitionIndex = 43329;

	enum class ConfigUIMainPageShowSetting_PerformType : ::System::Byte
	{
		AnimatorController = 0x2,
		TimelinePrefab = 0x1,
		AnimationClip = 0x0,
	};
}
