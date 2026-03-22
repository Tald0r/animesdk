#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 77011;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		InvincibleLoop = 7,
		Wool = 1,
		ImmuneSpecialHurt = 4,
		LowHP = 2,
		AddLife = 5,
		Struggle = 3,
		None = 0,
		DyingRespawn = 6,
		InvincibleOut = 8,
	};
}
