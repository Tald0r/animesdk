#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ExceptionInfo_ExceptionType_TypeDefinitionIndex = 7769;

	enum class ExceptionInfo_ExceptionType : ::System::Int32
	{
		Error = 2,
		Warning = 1,
		None = 0,
	};
}
