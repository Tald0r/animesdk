#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 39851;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		CanStunEnemy = 3,
		EnemyLevel = 4,
		SlelectEnemy = 0,
		EnemyAI = 1,
		AvatarPrefectSwitchPoint = 6,
		AvatarTeamFever = 7,
		EnemyInvicible = 2,
		AvatarSuperSP = 5,
	};
}
