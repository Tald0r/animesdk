#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UILifeState_TypeDefinitionIndex = 37240;

	enum class UIBaseController_UILifeState : ::System::Int32
	{
		Hide = 2,
		Hiding = 3,
		Show = 1,
		Close = 4,
		Destroyed = 5,
		Create = 0,
	};
}
