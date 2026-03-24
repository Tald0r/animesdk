#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadLevel_TypeDefinitionIndex = 7782;

	enum class AssetsUnloadLevel : ::System::Byte
	{
		All = 0x0,
		None = 0x2,
		ExceptBoot = 0x1,
	};
}
