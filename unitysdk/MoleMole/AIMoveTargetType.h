#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 62837;

	enum class AIMoveTargetType : ::System::Int32
	{
		GroupPoint = 8,
		FloorPoint = 9,
		GuideTargetPosition = 4,
		SavePoint = 10,
		LocalAvatar = 2,
		Self = 3,
		LockTarget = 0,
		Custom = 5,
		Camera = 6,
		AnchorTarget = 1,
		SelfBornPosition = 7,
	};
}
