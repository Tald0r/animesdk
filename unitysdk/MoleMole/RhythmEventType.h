#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 68333;

	enum class RhythmEventType : ::System::Int32
	{
		SoundEvent = 98,
		InteractEvent = 99,
		SwitchInteractSound = 5,
		ShowLongPressText = 7,
		ResetPattern = 1,
		ClassicBeat = 0,
		ShowSpeedUpText = 6,
		PlayEffect = 3,
		FinishLevel = 2,
		SwitchGuideSound = 4,
	};
}
