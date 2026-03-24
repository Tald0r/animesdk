#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetSection_Order_TypeDefinitionIndex = 78446;

	enum class ConfigSetSection_Order : ::System::Int32
	{
		Prv = 1,
		Temp = 2,
		Cur = 0,
	};
}
