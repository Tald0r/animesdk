#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridPluginType_TypeDefinitionIndex = 9756;

	enum class EMapGridPluginType : ::System::Int16
	{
		MainPathBendControl = 1,
		None = 0,
		RebuildStartEnd = 2,
		SetPathLayer = 3,
	};
}
