#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AttackMarkerType_TypeDefinitionIndex = 73451;

	enum class AttackMarkerType : ::System::Int32
	{
		SendEventToFCMarker = 1,
		SendAbilityCustomEventMarker = 0,
		MusicBattleHintMarker = 2,
		MusicBattleBonusTimeMarker = 3,
	};
}
