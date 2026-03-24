#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ChessEntityType_TypeDefinitionIndex = 47347;

	enum class ChessEntityType : ::System::Int32
	{
		DefenseSceneTrap = 5,
		DefenseSceneVirus = 3,
		Coin = 0,
		RedAlert = 2,
		DefenseSceneAntivirus = 4,
		Normal = 6,
		RedBlock = 1,
	};
}
