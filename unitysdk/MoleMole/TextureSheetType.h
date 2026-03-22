#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetType_TypeDefinitionIndex = 66968;

	enum class TextureSheetType : ::System::Int32
	{
		Battle = 8,
		Weapon = 12,
		Level = 9,
		Count = 16,
		ArcadeGame = 2,
		HollowChessboard = 0,
		HollowItemCollect = 6,
		HollowChessboardPushBox = 5,
		SoulHounds = 3,
		MiniGame = 15,
		Galgame = 14,
		CommonUI = 11,
		GachaPerform = 4,
		Tips = 10,
		MainCityObject = 1,
		SnakeDuel = 7,
		InterKnot = 13,
	};
}
