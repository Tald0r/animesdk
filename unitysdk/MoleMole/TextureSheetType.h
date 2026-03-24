#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetType_TypeDefinitionIndex = 40059;

	enum class TextureSheetType : ::System::Int32
	{
		CommonUI = 11,
		HollowChessboard = 0,
		MainCityObject = 1,
		Count = 16,
		Level = 9,
		SoulHounds = 3,
		MiniGame = 15,
		ArcadeGame = 2,
		HollowItemCollect = 6,
		Tips = 10,
		Weapon = 12,
		Battle = 8,
		HollowChessboardPushBox = 5,
		SnakeDuel = 7,
		Galgame = 14,
		GachaPerform = 4,
		InterKnot = 13,
	};
}
