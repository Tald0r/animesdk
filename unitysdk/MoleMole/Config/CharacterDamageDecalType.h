#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterDamageDecalType_TypeDefinitionIndex = 64324;

	enum class CharacterDamageDecalType : ::System::Int32
	{
		SharpWeapon = 0,
		Unknown = -1,
		SingleBulletHole = 2,
		ShotgunPelletHole = 3,
		BluntWeapon = 1,
	};
}
