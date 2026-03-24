#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RelayAttackType_TypeDefinitionIndex = 54374;

	enum class RelayAttackType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		ExQTE = 3,
		QTE = 2,
	};
}
