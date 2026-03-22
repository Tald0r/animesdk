#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListenedPropertyType_TypeDefinitionIndex = 12821;

	enum class EListenedPropertyType : ::System::Int16
	{
		SceneProperty = 3,
		Property = 2,
		All = 1,
		None = 0,
	};
}
