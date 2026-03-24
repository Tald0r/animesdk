#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 80867;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Stay = 0,
		Knock = 3,
		Light = 1,
		Heavy = 2,
	};
}
