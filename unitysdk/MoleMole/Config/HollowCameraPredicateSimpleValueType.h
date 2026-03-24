#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 53452;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		DeltaZAbsolute = 3,
		Distance = 1,
		DeltaZ = 2,
		None = 0,
	};
}
