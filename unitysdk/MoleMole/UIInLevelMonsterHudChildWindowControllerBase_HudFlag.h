#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudChildWindowControllerBase_HudFlag_TypeDefinitionIndex = 44620;

	enum class UIInLevelMonsterHudChildWindowControllerBase_HudFlag : ::System::Byte
	{
		Show = 0x2,
		WaitForShow = 0x1,
		FadeOut = 0x4,
		Destroy = 0x10,
		Hide = 0x8,
	};
}
