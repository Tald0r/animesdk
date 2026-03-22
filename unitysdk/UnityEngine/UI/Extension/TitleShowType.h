#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TitleShowType_TypeDefinitionIndex = 49560;

	enum class TitleShowType : ::System::Int32
	{
		LastTime = 1,
		RefreshTime = 2,
		None = 0,
		ActivityTimeExpired = 3,
		DiscountLastTime = 6,
		WeeklyRefreshTime = 4,
		DailyRefreshTime = 5,
	};
}
