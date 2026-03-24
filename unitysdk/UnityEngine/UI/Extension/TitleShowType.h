#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TitleShowType_TypeDefinitionIndex = 70095;

	enum class TitleShowType : ::System::Int32
	{
		ActivityTimeExpired = 3,
		None = 0,
		WeeklyRefreshTime = 4,
		DailyRefreshTime = 5,
		RefreshTime = 2,
		LastTime = 1,
		DiscountLastTime = 6,
	};
}
