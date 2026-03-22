#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RelayAttackType_TypeDefinitionIndex = 78605;

	enum class RelayAttackType : ::System::Int32
	{
		ExQTE = 3,
		Normal = 1,
		QTE = 2,
		None = 0,
	};
}
