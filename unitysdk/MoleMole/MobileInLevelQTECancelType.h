#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileInLevelQTECancelType_TypeDefinitionIndex = 77705;

	enum class MobileInLevelQTECancelType : ::System::Int32
	{
		SingleClick = 3,
		NoCancel = 1,
		DoubleClick = 2,
		None = 0,
	};
}
