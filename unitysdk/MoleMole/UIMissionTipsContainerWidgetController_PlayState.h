#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_PlayState_TypeDefinitionIndex = 70947;

	enum class UIMissionTipsContainerWidgetController_PlayState : ::System::Int32
	{
		None = 0,
		Pausing = 2,
		HallRefreshStop = 3,
		Playing = 1,
	};
}
