#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 40843;

	enum class ValueCompareType : ::System::Int32
	{
		Greater = 0,
		Between = 5,
		LessEqual = 4,
		GreaterEqual = 1,
		Less = 3,
		NotEqual = 6,
		NotNullOrEmpty = 7,
		Equal = 2,
	};
}
