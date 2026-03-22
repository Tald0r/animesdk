#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_GameState_TypeDefinitionIndex = 65489;

	enum class SurfSubsystem_GameState : ::System::Int32
	{
		None = 0,
		Running = 2,
		Ready = 1,
		Finish = 3,
	};
}
