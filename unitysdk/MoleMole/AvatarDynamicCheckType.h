#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 62332;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		AllAvatar = 3,
		LocalAvatar = 1,
		None = 0,
		TeamAvatar = 2,
	};
}
