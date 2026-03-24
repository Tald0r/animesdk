#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_GameState_TypeDefinitionIndex = 44798;

	enum class SurfSubsystem_GameState : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Running = 2,
		Finish = 3,
	};
}
