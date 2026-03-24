#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 72927;

	enum class ModifierStacking : ::System::Int32
	{
		MultipleRefresh = 4,
		RefreshByLongTime = 7,
		Refresh = 1,
		MultipleAllRefreshNotReplace = 10,
		Replace = 8,
		Unique = 0,
		Multiple = 3,
		MultipleAllRefresh = 5,
		GlobalUnique = 6,
		Prolong = 2,
		ReplaceByLongTime = 9,
	};
}
