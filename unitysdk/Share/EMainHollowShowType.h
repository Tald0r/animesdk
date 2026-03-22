#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMainHollowShowType_TypeDefinitionIndex = 16977;

	enum class EMainHollowShowType : ::System::Int32
	{
		OldChessboard = 2,
		DifficutyBattle = 1,
		Normal = 0,
	};
}
