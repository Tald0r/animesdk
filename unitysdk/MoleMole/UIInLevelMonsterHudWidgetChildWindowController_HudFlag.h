#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 78860;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		Show = 1,
		StunFillGrey = 256,
		Hide = 16,
		Stun = 128,
		PrepareDestroy = 64,
		HeavyAttack = 8,
		Lock = 2,
		StunDestroyDelay = 512,
		StunMax = 4,
		Destroy = 32,
	};
}
