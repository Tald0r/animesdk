#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController_ClickMode_TypeDefinitionIndex = 70855;

	enum class UIMissionTipsRowWidgetController_ClickMode : ::System::Int32
	{
		knot = 3,
		None = 0,
		Interact = 2,
		OpenMap = 4,
		ChangeTrack = 1,
	};
}
