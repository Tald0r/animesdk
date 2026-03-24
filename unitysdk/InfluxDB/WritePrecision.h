#pragma once
#include "unitysdk/unitysdk.h"

namespace InfluxDB
{
	inline static constexpr unsigned int WritePrecision_TypeDefinitionIndex = 7940;

	enum class WritePrecision : ::System::Int32
	{
		Ns = 4,
		Us = 3,
		Ms = 1,
		S = 2,
	};
}
