#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int RhythmEventType_TypeDefinitionIndex = 39275;

	enum class RhythmEventType : ::System::Int32
	{
		InteractEvent = 99,
		SwitchInteractSound = 5,
		ShowSpeedUpText = 6,
		ResetPattern = 1,
		ShowLongPressText = 7,
		SoundEvent = 98,
		ClassicBeat = 0,
		FinishLevel = 2,
		SwitchGuideSound = 4,
		PlayEffect = 3,
	};
}
