#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 73304;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		Double = 5,
		String = 6,
		Bool = 1,
		Float = 4,
		Int32 = 2,
		Nullable = 0,
		Object = 7,
		Int64 = 3,
	};
}
