#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int GCCollectionMode_TypeDefinitionIndex = 237;

	enum class GCCollectionMode : ::System::Int32
	{
		Default = 0,
		Forced = 1,
		Optimized = 2,
	};
}
