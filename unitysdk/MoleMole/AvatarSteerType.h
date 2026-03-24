#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 77854;

	enum class AvatarSteerType : ::System::Byte
	{
		Clamp = 0x1,
		Fixed = 0x2,
		Instant = 0x0,
	};
}
