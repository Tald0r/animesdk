#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 14496;

	enum class EListenedPropertyType : ::System::Int16
	{
		None = 0,
		Property = 2,
		All = 1,
		SceneProperty = 3,
	};
}
