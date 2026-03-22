#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int VerifyBy_TypeDefinitionIndex = 8083;

	enum class VerifyBy : ::System::Int32
	{
		CRC = 1,
		Size = 0,
	};
}
