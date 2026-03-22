#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 54121;

	enum class CompareType : ::System::Int32
	{
		Greater = 0,
		GreaterEqual = 3,
		Equal = 2,
		Less = 1,
		NotEqual = 5,
		LessEquals = 4,
	};
}
