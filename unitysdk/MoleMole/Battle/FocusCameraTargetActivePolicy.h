#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FocusCameraTargetActivePolicy_TypeDefinitionIndex = 50322;

	enum class FocusCameraTargetActivePolicy : ::System::Int32
	{
		Always = 2,
		None = 0,
		ByRadius2D = 1,
	};
}
