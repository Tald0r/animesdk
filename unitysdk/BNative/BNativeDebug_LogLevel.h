#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 73759;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		Exception = 3,
		Error = 2,
		Warning = 1,
		None = 4,
		Log = 0,
	};
}
