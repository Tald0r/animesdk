#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectReadyFlags_TypeDefinitionIndex = 61873;

	enum class EViewObjectReadyFlags : ::System::Int32
	{
		EntityLoadFinish = 1,
		None = 0,
		GraphLoadFinish = 2,
	};
}
