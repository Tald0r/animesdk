#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 73657;

	enum class CampType : ::System::Int32
	{
		Unknow = 999,
		TeamGood = 2,
		TeamEvil = 1,
		TeamMember = 5,
		TeamNeutral = 3,
		TeamKind = 4,
	};
}
