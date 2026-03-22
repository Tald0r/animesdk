#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPerformType_TypeDefinitionIndex = 16005;

	enum class EPerformType : ::System::Int16
	{
		None = -1,
		Bubble = 2,
		EnumCount = 3,
		PlotPlay = 0,
		Dialog = 1,
	};
}
