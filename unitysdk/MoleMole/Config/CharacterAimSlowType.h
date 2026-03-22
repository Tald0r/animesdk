#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowType_TypeDefinitionIndex = 68081;

	enum class CharacterAimSlowType : ::System::Int32
	{
		Both = 2,
		AttachPoint = 0,
		Collision = 1,
	};
}
