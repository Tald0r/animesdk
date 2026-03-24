#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderNodeStatus_TypeDefinitionIndex = 8137;

	enum class LoaderNodeStatus : ::System::Int32
	{
		Failed = 3,
		Loaded = 1,
		Complete = 2,
		Pending = 0,
	};
}
