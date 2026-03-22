#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_EState_TypeDefinitionIndex = 62769;

	enum class UISummerFishPlayPageController_EState : ::System::Int32
	{
		WaitFish = 0,
		StartFish = 1,
		FishQTE = 2,
		BattleLoop = 3,
	};
}
