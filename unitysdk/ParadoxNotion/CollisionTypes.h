#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int CollisionTypes_TypeDefinitionIndex = 26328;

	enum class CollisionTypes : ::System::Int32
	{
		CollisionEnter = 0,
		CollisionExit = 1,
		CollisionStay = 2,
	};
}
