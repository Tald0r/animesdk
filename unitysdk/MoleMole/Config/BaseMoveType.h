#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseMoveType_TypeDefinitionIndex = 44473;

	enum class BaseMoveType : ::System::Int32
	{
		Away = 1,
		Follow = 0,
		Around = 3,
		Aside = 2,
	};
}
