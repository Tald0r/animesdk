#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventTargetNodeType_TypeDefinitionIndex = 10120;

	enum class EHollowEventTargetNodeType : ::System::Int16
	{
		All = 0,
		Core = 1,
		NonCore = 2,
	};
}
