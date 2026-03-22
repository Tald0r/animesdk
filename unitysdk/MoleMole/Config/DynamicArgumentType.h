#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicArgumentType_TypeDefinitionIndex = 56672;

	enum class DynamicArgumentType : ::System::Int32
	{
		EFLOAT = 0,
		EBOOL = 2,
		ESTRING = 3,
		EINT = 1,
	};
}
