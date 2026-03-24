#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESceneType_TypeDefinitionIndex = 12640;

	enum class ESceneType : ::System::Int16
	{
		MultiFight = 5,
		Hall = 1,
		Fresh = 4,
		Fight = 3,
		Hollow = 2,
	};
}
