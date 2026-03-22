#pragma once
#include "unitysdk/unitysdk.h"

namespace Plugins::miHoYoLib::Foundation::Common
{
	inline static constexpr unsigned int SuperDebugConfig_TypeDefinitionIndex = 7754;

	enum class SuperDebugConfig : ::System::Int32
	{
		WithEngine = 1,
		AllLogWin = 4,
		WithFile = 2,
		None = 0,
	};
}
