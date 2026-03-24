#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectListLoopType_TypeDefinitionIndex = 73038;

	enum class StaticSceneObjectListLoopType : ::System::Int32
	{
		ListLoop = 0,
		RadomOnce = 2,
		ListOnceAndEndPause = 4,
		RadomLoop = 3,
		ListOnce = 1,
	};
}
