#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverSoundType_TypeDefinitionIndex = 58868;

	enum class FeverSoundType : ::System::Int32
	{
		ExitFeverMode = 4,
		LevelDown = 2,
		MaxLevel = 0,
		EnterFeverMode = 3,
		LevelUp = 1,
	};
}
