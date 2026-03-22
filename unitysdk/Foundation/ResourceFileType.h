#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ResourceFileType_TypeDefinitionIndex = 7791;

	enum class ResourceFileType : ::System::Int32
	{
		Data = 3,
		None = 0,
		Res = 1,
		Audio = 4,
		Silence = 2,
	};
}
