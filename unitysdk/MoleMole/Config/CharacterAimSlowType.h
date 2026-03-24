#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowType_TypeDefinitionIndex = 62074;

	enum class CharacterAimSlowType : ::System::Int32
	{
		Both = 2,
		Collision = 1,
		AttachPoint = 0,
	};
}
