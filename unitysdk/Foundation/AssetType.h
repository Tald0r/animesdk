#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetType_TypeDefinitionIndex = 8031;

	enum class AssetType : ::System::Int32
	{
		Default = 0,
		Effect = 2,
		UI = 1,
	};
}
