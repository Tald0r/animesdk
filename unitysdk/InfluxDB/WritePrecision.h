#pragma once
#include "unitysdk/unitysdk.h"

namespace InfluxDB
{
	inline static constexpr unsigned int WritePrecision_TypeDefinitionIndex = 7849;

	enum class WritePrecision : ::System::Int32
	{
		S = 2,
		Ns = 4,
		Ms = 1,
		Us = 3,
	};
}
