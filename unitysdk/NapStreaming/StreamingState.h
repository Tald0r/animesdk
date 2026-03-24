#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingState_TypeDefinitionIndex = 53406;

	enum class StreamingState : ::System::Int32
	{
		INITED = 0,
		HLOD = 21,
		UNLOAD_CULLED = 11,
		UNLOAD_LAYER = 12,
		LOADING_OBJECT = 30,
		OBJECT = 31,
		LOADING_HLOD = 20,
		UNLOAD_DISTANCE = 10,
	};
}
