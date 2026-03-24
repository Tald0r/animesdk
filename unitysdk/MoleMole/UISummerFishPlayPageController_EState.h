#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_EState_TypeDefinitionIndex = 37410;

	enum class UISummerFishPlayPageController_EState : ::System::Int32
	{
		FishQTE = 2,
		BattleLoop = 3,
		WaitFish = 0,
		StartFish = 1,
	};
}
