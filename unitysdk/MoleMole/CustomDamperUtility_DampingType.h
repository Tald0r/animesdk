#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomDamperUtility_DampingType_TypeDefinitionIndex = 65989;

	enum class CustomDamperUtility_DampingType : ::System::Int32
	{
		Spring = 1,
		SpringCritical = 2,
		Normal = 0,
	};
}
