#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_GeometryType_TypeDefinitionIndex = 8139;

	enum class MyLogger_GeometryType : ::System::Byte
	{
		Wired = 0x2,
		Wire = 0x1,
		Normal = 0x0,
	};
}
