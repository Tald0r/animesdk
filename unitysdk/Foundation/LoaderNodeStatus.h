#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoaderNodeStatus_TypeDefinitionIndex = 8232;

	enum class LoaderNodeStatus : ::System::Int32
	{
		Complete = 2,
		Loaded = 1,
		Failed = 3,
		Pending = 0,
	};
}
