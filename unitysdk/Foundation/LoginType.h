#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LoginType_TypeDefinitionIndex = 8034;

	enum class LoginType : ::System::Int32
	{
		CloudPre = 2,
		SDK = 1,
		Debug = 0,
	};
}
