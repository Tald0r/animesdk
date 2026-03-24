#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFeatureEvent_TypeDefinitionIndex = 80638;

	enum class EViewObjectComponentFeatureEvent : ::System::Int32
	{
		OnEntityAndGraphReady = 3,
		OnPostReady = 1,
		OnEntityReady = 2,
		None = 0,
	};
}
