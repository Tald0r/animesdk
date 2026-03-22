#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SpecialEffectRoleType_TypeDefinitionIndex = 49557;

	enum class SpecialEffectRoleType : ::System::Int32
	{
		Special = 4,
		Switch = 3,
		Close = 1,
		Open = 2,
		Normal = 0,
	};
}
