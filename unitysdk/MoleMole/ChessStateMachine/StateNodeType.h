#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateNodeType_TypeDefinitionIndex = 76966;

	enum class StateNodeType : ::System::Int32
	{
		SubState = 3,
		Entry = 0,
		Exit = 1,
		AnyState = 5,
		State = 2,
		UpState = 4,
	};
}
