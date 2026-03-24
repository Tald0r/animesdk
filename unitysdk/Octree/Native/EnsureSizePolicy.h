#pragma once
#include "unitysdk/unitysdk.h"

namespace Octree::Native
{
	inline static constexpr unsigned int EnsureSizePolicy_TypeDefinitionIndex = 70859;

	enum class EnsureSizePolicy : ::System::Int32
	{
		AutoExtend = 1,
		ExceedRange = 0,
	};
}
