#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 64850;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		RadomLoop = 3,
		ListOnce = 1,
		ListLoop = 0,
		ListOnceAndEndPause = 4,
		RadomOnce = 2,
	};
}
