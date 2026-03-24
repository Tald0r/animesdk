#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 68696;

enum class ScePadTriggerEffectState : ::System::Int32
{
	WeaponFiring = 5,
	FeedbackStandby = 1,
	Intercepted = -1,
	VibrationStandby = 6,
	FeedbackActive = 2,
	WeaponStandby = 3,
	VibrationActive = 7,
	Off = 0,
	WeaponPulling = 4,
};
