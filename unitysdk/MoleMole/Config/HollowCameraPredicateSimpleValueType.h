#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateSimpleValueType_TypeDefinitionIndex = 51256;

	enum class HollowCameraPredicateSimpleValueType : ::System::Int32
	{
		DeltaZ = 2,
		Distance = 1,
		DeltaZAbsolute = 3,
		None = 0,
	};
}
