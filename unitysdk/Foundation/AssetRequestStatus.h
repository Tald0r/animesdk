#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestStatus_TypeDefinitionIndex = 7811;

	enum class AssetRequestStatus : ::System::Int32
	{
		Succeeded = 2,
		Failed = 3,
		Loading = 1,
		Unload = 4,
		None = 0,
	};
}
