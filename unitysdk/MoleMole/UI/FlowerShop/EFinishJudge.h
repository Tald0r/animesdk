#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int EFinishJudge_TypeDefinitionIndex = 78837;

	enum class EFinishJudge : ::System::Int32
	{
		MaxInCome = 4,
		ExtraChallenge = 8,
		Success = 2,
		None = 0,
	};
}
