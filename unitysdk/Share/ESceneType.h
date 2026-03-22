#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneType_TypeDefinitionIndex = 15715;

	enum class ESceneType : ::System::Int16
	{
		MultiFight = 5,
		Hollow = 2,
		Hall = 1,
		Fresh = 4,
		Fight = 3,
	};
}
