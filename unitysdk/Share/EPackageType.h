#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPackageType_TypeDefinitionIndex = 10377;

	enum class EPackageType : ::System::Int16
	{
		DungeonAvatar = 4,
		Player = 3,
		Fight = 1,
		RogueLike = 2,
		EnumCount = 5,
	};
}
