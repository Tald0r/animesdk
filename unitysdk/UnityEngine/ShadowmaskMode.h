#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ShadowmaskMode_TypeDefinitionIndex = 5226;

	enum class ShadowmaskMode : ::System::Int32
	{
		Shadowmask = 0,
		DistanceShadowmask = 1,
	};
}
