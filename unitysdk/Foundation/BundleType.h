#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BundleType_TypeDefinitionIndex = 7740;

	enum class BundleType : ::System::Byte
	{
		Bundle = 0x1,
		Block = 0x0,
	};
}
