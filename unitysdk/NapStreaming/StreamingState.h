#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingState_TypeDefinitionIndex = 43064;

	enum class StreamingState : ::System::Int32
	{
		LOADING_OBJECT = 30,
		UNLOAD_DISTANCE = 10,
		OBJECT = 31,
		UNLOAD_CULLED = 11,
		UNLOAD_LAYER = 12,
		LOADING_HLOD = 20,
		HLOD = 21,
		INITED = 0,
	};
}
