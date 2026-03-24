#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayer_TypeDefinitionIndex = 64104;

	enum class StreamingLayer : ::System::Int32
	{
		CODE_CONTROLL_3 = 12,
		ENVIROMENT = 5,
		BIG = 1,
		CODE_CONTROLL_2 = 11,
		CODE_CONTROLL_1 = 10,
		CODE_CONTROLL_4 = 13,
		SMALLSHADOWPROXY = 14,
		Value_4 = 4,
		MAX = 16,
		LOWMEMORY = 8,
		DECAL = 7,
		MIDDLE = 2,
		Value_9 = 9,
		INSTANCE = 0,
		SMALL = 3,
		GROUND = 6,
	};
}
