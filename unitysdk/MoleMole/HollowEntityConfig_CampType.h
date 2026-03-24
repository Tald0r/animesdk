#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_CampType_TypeDefinitionIndex = 78253;

	enum class HollowEntityConfig_CampType : ::System::Int32
	{
		TeamNeutral = 3,
		TeamKind = 4,
		TeamGood = 2,
		Unknow = 999,
		TeamEvil = 1,
	};
}
