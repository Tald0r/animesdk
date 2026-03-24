#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraPosType_TypeDefinitionIndex = 56409;

	enum class ConfigCameraPosType : ::System::Int32
	{
		SpecialCamera = 2,
		WorldPos = 0,
		LocalPos = 1,
	};
}
