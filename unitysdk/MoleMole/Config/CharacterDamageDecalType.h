#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterDamageDecalType_TypeDefinitionIndex = 60009;

	enum class CharacterDamageDecalType : ::System::Int32
	{
		SharpWeapon = 0,
		Unknown = -1,
		BluntWeapon = 1,
		SingleBulletHole = 2,
		ShotgunPelletHole = 3,
	};
}
