#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraPosType_TypeDefinitionIndex = 77379;

	enum class ConfigCameraPosType : ::System::Int32
	{
		WorldPos = 0,
		LocalPos = 1,
		SpecialCamera = 2,
	};
}
