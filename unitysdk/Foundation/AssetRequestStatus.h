#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 8178;

	enum class AssetRequestStatus : ::System::Int32
	{
		None = 0,
		Failed = 3,
		Succeeded = 2,
		Unload = 4,
		Loading = 1,
	};
}
