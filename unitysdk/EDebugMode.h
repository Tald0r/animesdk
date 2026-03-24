#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 57155;

enum class EDebugMode : ::System::Int32
{
	ShowVertexId = 1,
	None = 0,
	ShowVertexUV = 3,
	ShowVertexColor = 4,
	ShowSegmentId = 2,
};
