#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 42391;

	enum class ChessEntityType : ::System::Int32
	{
		Coin = 0,
		DefenseSceneVirus = 3,
		DefenseSceneAntivirus = 4,
		Normal = 6,
		RedAlert = 2,
		DefenseSceneTrap = 5,
		RedBlock = 1,
	};
}
