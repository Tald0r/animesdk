#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocationIndex_TypeDefinitionIndex = 8133;

	enum class BundleLocationIndex : ::System::Byte
	{
		None = 0x0,
		InBuildBlock = 0x2,
		PersistentBlock = 0x1,
		PersistentBundle = 0x3,
		InBuildBundle = 0x4,
	};
}
