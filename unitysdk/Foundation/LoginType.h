#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginType_TypeDefinitionIndex = 8048;

	enum class LoginType : ::System::Int32
	{
		SDK = 1,
		CloudPre = 2,
		Debug = 0,
	};
}
