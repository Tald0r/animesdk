#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_CalStartIndexType_TypeDefinitionIndex = 51333;

	enum class ConfigChessboardCalStartIndexNode_CalStartIndexType : ::System::Int32
	{
		NoCustomIndex = 2,
		PlayerCurIndex = 0,
		CustomIndex = 1,
	};
}
