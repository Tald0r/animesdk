#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlayerState_TypeDefinitionIndex = 10074;

	enum class EPlayerState : ::System::Int16
	{
		Alive = 0,
		Death = 1,
		EnumCount = 2,
	};
}
