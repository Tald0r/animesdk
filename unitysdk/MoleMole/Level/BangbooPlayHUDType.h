#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayHUDType_TypeDefinitionIndex = 40810;

	enum class BangbooPlayHUDType : ::System::Int32
	{
		OnlyBangboo = 1,
		BangbooAndRoleHud = 3,
		HideAll = 4,
		None = 0,
		OnlyRoleHud = 2,
	};
}
