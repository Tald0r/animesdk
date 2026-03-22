#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPackageType_TypeDefinitionIndex = 10936;

	enum class EPackageType : ::System::Int16
	{
		Player = 3,
		Fight = 1,
		EnumCount = 5,
		DungeonAvatar = 4,
		RogueLike = 2,
	};
}
