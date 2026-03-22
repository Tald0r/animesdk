#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelinePriority_TypeDefinitionIndex = 34609;

	enum class DemoFollowPipelinePriority : ::System::Int32
	{
		Default = 0,
		Higher = 1,
		Count = 2,
	};
}
