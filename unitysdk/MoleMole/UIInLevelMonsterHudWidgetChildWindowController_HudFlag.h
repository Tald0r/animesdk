#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMonsterHudWidgetChildWindowController_HudFlag_TypeDefinitionIndex = 38028;

	enum class UIInLevelMonsterHudWidgetChildWindowController_HudFlag : ::System::Int32
	{
		Lock = 2,
		Hide = 16,
		Show = 1,
		Destroy = 32,
		StunFillGrey = 256,
		HeavyAttack = 8,
		Stun = 128,
		PrepareDestroy = 64,
		StunDestroyDelay = 512,
		StunMax = 4,
	};
}
