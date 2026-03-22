#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ContainerTypeTraits_ICollectionType_TypeDefinitionIndex = 7859;

	enum class ContainerTypeTraits_ICollectionType : ::System::Int32
	{
		Stack = 1,
		Queue = 2,
		ConcurrentQueue = 3,
	};
}
