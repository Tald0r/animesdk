#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 77375;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Heavy = 2,
		Knock = 3,
		Light = 1,
		Stay = 0,
	};
}
