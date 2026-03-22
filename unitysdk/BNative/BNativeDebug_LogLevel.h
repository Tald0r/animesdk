#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 50704;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		None = 4,
		Log = 0,
		Warning = 1,
		Exception = 3,
		Error = 2,
	};
}
