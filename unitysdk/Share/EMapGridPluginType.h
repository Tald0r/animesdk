#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 13684;

	enum class EMapGridPluginType : ::System::Int16
	{
		SetPathLayer = 3,
		None = 0,
		MainPathBendControl = 1,
		RebuildStartEnd = 2,
	};
}
