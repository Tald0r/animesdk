#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_ConvertType_TypeDefinitionIndex = 57127;

	enum class AudioRTPCConvert_ConvertType : ::System::Int32
	{
		NO_CHANGE = 0,
		CLAMP = 1,
		PERCENT = 3,
		INVERSE_LERP = 2,
	};
}
