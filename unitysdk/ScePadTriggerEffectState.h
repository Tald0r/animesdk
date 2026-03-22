#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 51344;

enum class ScePadTriggerEffectState : ::System::Int32
{
	FeedbackStandby = 1,
	WeaponFiring = 5,
	VibrationActive = 7,
	WeaponPulling = 4,
	VibrationStandby = 6,
	Off = 0,
	Intercepted = -1,
	FeedbackActive = 2,
	WeaponStandby = 3,
};
