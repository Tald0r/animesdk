#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelType_TypeDefinitionIndex = 61772;

	enum class MobileInLevelQTECancelType : ::System::Int32
	{
		NoCancel = 1,
		SingleClick = 3,
		DoubleClick = 2,
		None = 0,
	};
}
