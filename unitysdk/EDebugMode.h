#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 64090;

enum class EDebugMode : ::System::Int32
{
	ShowVertexColor = 4,
	ShowSegmentId = 2,
	ShowVertexUV = 3,
	None = 0,
	ShowVertexId = 1,
};
