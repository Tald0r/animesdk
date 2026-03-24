#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 69097;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		Always = 2,
		ByRadius2D = 1,
		None = 0,
	};
}
