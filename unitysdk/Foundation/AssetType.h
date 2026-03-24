#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetType_TypeDefinitionIndex = 8288;

	enum class AssetType : ::System::Int32
	{
		Default = 0,
		UI = 1,
		Effect = 2,
	};
}
