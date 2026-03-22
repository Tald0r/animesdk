#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 66263;

	enum class AvatarSteerType : ::System::Byte
	{
		Instant = 0x0,
		Fixed = 0x2,
		Clamp = 0x1,
	};
}
