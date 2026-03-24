#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetCamera_TypeDefinitionIndex = 60358;

	enum class TargetCamera : ::System::Int32
	{
		Effect = 1,
		Hollow = 0,
	};
}
