#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardGroupAnimNode_ChessboardGroupAnimType_TypeDefinitionIndex = 65781;

	enum class ConfigChessboardGroupAnimNode_ChessboardGroupAnimType : ::System::Int32
	{
		RefreshAllExceptCur = 2,
		BlackAndWhite = 1,
		Radiate = 0,
	};
}
