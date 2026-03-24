#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_BlinkControlIndex_TypeDefinitionIndex = 66161;

	enum class ViewEntityPlayer_BlinkControlIndex : ::System::Int32
	{
		LowHP = 2,
		None = 0,
		AddLife = 5,
		Wool = 1,
		DyingRespawn = 6,
		ImmuneSpecialHurt = 4,
		InvincibleOut = 8,
		Struggle = 3,
		InvincibleLoop = 7,
	};
}
