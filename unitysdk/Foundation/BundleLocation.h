#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocation_TypeDefinitionIndex = 8216;

	enum class BundleLocation : ::System::Byte
	{
		NotExists = 0x2,
		InBuild = 0x1,
		Persistent = 0x0,
	};
}
