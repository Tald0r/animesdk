#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicArgumentType_TypeDefinitionIndex = 70975;

	enum class DynamicArgumentType : ::System::Int32
	{
		EFLOAT = 0,
		EBOOL = 2,
		EINT = 1,
		ESTRING = 3,
	};
}
