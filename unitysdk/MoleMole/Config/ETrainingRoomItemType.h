#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 55109;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		EnemyAI = 1,
		AvatarPrefectSwitchPoint = 6,
		EnemyInvicible = 2,
		EnemyLevel = 4,
		CanStunEnemy = 3,
		AvatarSuperSP = 5,
		SlelectEnemy = 0,
		AvatarTeamFever = 7,
	};
}
