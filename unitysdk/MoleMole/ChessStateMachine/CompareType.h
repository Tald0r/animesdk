#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 53216;

	enum class CompareType : ::System::Int32
	{
		NotEqual = 5,
		Equal = 2,
		LessEquals = 4,
		GreaterEqual = 3,
		Greater = 0,
		Less = 1,
	};
}
