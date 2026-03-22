#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_State_TypeDefinitionIndex = 70889;

	enum class UIMainStoryPersonalRowWidgetController_State : ::System::Int32
	{
		Ready = 2,
		Complete = 4,
		Locked = 1,
		Invalid = 0,
		Afk = 3,
	};
}
