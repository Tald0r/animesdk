#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int EDynamicCacheMemoryPolicy_TypeDefinitionIndex = 5241;

	enum class EDynamicCacheMemoryPolicy : ::System::Int32
	{
		EDCMP_Begin = 0,
		EDCMP_Begin_For_Discard = 1,
		EDCMP_End = 2,
	};
}
