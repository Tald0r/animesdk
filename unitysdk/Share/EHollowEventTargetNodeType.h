#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventTargetNodeType_TypeDefinitionIndex = 10910;

	enum class EHollowEventTargetNodeType : ::System::Int16
	{
		All = 0,
		NonCore = 2,
		Core = 1,
	};
}
