#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneForwardAxis_TypeDefinitionIndex = 42176;

	enum class LookAtBoneForwardAxis : ::System::Int32
	{
		Down = 3,
		Right = 5,
		Backward = 1,
		Left = 4,
		Forward = 0,
		Up = 2,
	};
}
