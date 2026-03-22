#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 52040;

	enum class CampType : ::System::Int32
	{
		Unknow = 999,
		TeamGood = 2,
		TeamNeutral = 3,
		TeamMember = 5,
		TeamEvil = 1,
		TeamKind = 4,
	};
}
