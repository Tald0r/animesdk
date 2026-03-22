#pragma once
#include "unitysdk/unitysdk.h"

namespace BinaryTracingFramework::Serialize
{
	inline static constexpr unsigned int ClassTypeMeta_TypeDefinitionIndex = 30950;

	enum class ClassTypeMeta : ::System::Int32
	{
		LogBlock = 1001,
		LogMeta = 1002,
	};
}
