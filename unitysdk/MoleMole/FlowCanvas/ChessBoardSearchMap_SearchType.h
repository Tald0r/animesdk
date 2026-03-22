#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_SearchType_TypeDefinitionIndex = 60841;

	enum class ChessBoardSearchMap_SearchType : ::System::Int32
	{
		Position = 1,
		Bound = 2,
		Index = 0,
	};
}
