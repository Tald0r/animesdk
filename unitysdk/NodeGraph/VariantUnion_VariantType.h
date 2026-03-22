#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnion_VariantType_TypeDefinitionIndex = 78689;

	enum class VariantUnion_VariantType : ::System::Int32
	{
		Int64 = 3,
		String = 6,
		Object = 7,
		Bool = 1,
		Double = 5,
		Nullable = 0,
		Float = 4,
		Int32 = 2,
	};
}
