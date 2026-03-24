#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureMemoryless_TypeDefinitionIndex = 5246;

	enum class RenderTextureMemoryless : ::System::Int32
	{
		None = 0,
		Color = 1,
		Depth = 2,
		MSAA = 4,
	};
}
