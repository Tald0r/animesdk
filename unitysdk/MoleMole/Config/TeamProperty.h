#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamProperty_TypeDefinitionIndex = 38098;

	enum class TeamProperty : ::System::Int32
	{
		EtherInfectionRecover = 3,
		MaxEtherInfectionValue = 2,
		Fever = 0,
		CurEtherInfectionValue = 1,
	};
}
