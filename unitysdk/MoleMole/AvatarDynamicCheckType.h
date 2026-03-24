#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarDynamicCheckType_TypeDefinitionIndex = 63608;

	enum class AvatarDynamicCheckType : ::System::Int32
	{
		LocalAvatar = 1,
		TeamAvatar = 2,
		None = 0,
		AllAvatar = 3,
	};
}
