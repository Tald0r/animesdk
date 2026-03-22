#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 50295;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		OnEntityReady = 2,
		None = 0,
		OnPostReady = 1,
		OnEntityAndGraphReady = 3,
	};
}
