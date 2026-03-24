#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AIMoveTargetType_TypeDefinitionIndex = 65332;

	enum class AIMoveTargetType : ::System::Int32
	{
		GroupPoint = 8,
		Custom = 5,
		SavePoint = 10,
		LockTarget = 0,
		Camera = 6,
		AnchorTarget = 1,
		Self = 3,
		FloorPoint = 9,
		SelfBornPosition = 7,
		LocalAvatar = 2,
		GuideTargetPosition = 4,
	};
}
