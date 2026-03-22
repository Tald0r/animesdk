#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionTipType_TypeDefinitionIndex = 75688;

	enum class UIMissionTipsContainerWidgetController_MissionTipType : ::System::Int32
	{
		HDDQuestHang = 7,
		SlideMissionFinish = 5,
		PartnerDateAreaTrigger = 12,
		PartnerDateBubbleTip = 11,
		UnlockPersonalLine = 4,
		Challenge = 14,
		UpdateRecommendTrack = 3,
		RefreshTrack = 2,
		Activity = 6,
		ServerAreaTrigger = 9,
		MissionSync = 1,
		PartnerDateFreeModeTip = 10,
		WeeklyBingoAreaTrigger = 13,
		InterKnot = 0,
		ClientAreaTrigger = 8,
	};
}
