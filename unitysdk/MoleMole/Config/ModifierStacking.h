#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifierStacking_TypeDefinitionIndex = 51591;

	enum class ModifierStacking : ::System::Int32
	{
		Replace = 8,
		Refresh = 1,
		MultipleAllRefresh = 5,
		RefreshByLongTime = 7,
		Prolong = 2,
		Multiple = 3,
		MultipleRefresh = 4,
		ReplaceByLongTime = 9,
		MultipleAllRefreshNotReplace = 10,
		Unique = 0,
		GlobalUnique = 6,
	};
}
