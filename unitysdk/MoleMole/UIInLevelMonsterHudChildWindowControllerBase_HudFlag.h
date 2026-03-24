#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudChildWindowControllerBase_HudFlag_TypeDefinitionIndex = 73589;

	enum class UIInLevelMonsterHudChildWindowControllerBase_HudFlag : ::System::Byte
	{
		FadeOut = 0x4,
		Hide = 0x8,
		Destroy = 0x10,
		Show = 0x2,
		WaitForShow = 0x1,
	};
}
