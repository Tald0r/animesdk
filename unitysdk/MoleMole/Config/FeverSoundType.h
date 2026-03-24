#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 42656;

	enum class FeverSoundType : ::System::Int32
	{
		LevelUp = 1,
		ExitFeverMode = 4,
		MaxLevel = 0,
		LevelDown = 2,
		EnterFeverMode = 3,
	};
}
