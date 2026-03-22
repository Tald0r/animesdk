#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleLocation_TypeDefinitionIndex = 8197;

	enum class BundleLocation : ::System::Byte
	{
		InBuild = 0x1,
		NotExists = 0x2,
		Persistent = 0x0,
	};
}
