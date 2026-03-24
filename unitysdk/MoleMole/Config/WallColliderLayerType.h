#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WallColliderLayerType_TypeDefinitionIndex = 61508;

	enum class WallColliderLayerType : ::System::Int32
	{
		Default = 0,
		EntityCollisionWallMonster = 2,
		EntityCollisionWallCharacter = 1,
	};
}
