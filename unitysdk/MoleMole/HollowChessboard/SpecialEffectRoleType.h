#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 63594;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Normal = 0,
		Open = 2,
		Switch = 3,
		Close = 1,
		Special = 4,
	};
}
