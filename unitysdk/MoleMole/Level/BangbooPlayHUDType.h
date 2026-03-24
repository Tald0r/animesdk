#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooPlayHUDType_TypeDefinitionIndex = 59994;

	enum class BangbooPlayHUDType : ::System::Int32
	{
		OnlyBangboo = 1,
		OnlyRoleHud = 2,
		None = 0,
		HideAll = 4,
		BangbooAndRoleHud = 3,
	};
}
