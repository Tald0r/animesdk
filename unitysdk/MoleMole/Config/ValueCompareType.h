#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 58887;

	enum class ValueCompareType : ::System::Int32
	{
		NotEqual = 6,
		Between = 5,
		Equal = 2,
		Less = 3,
		LessEqual = 4,
		GreaterEqual = 1,
		NotNullOrEmpty = 7,
		Greater = 0,
	};
}
