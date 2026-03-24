#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingFramework::Foundation
{
	inline static constexpr unsigned int PoolObjectWarp_1_TypeDefinitionIndex = 31913;

	template <typename T>
	struct PoolObjectWarp_1
	{
		T _poolObject; // 0x0
	};
}
