#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ColliderLayerType_TypeDefinitionIndex = 71648;

	enum class ColliderLayerType : ::System::Int32
	{
		Character = 1,
		Monster = 2,
		EntityCollisionAvatar = 4,
		Default = 0,
		EntityCollisionMonster = 3,
	};
}
