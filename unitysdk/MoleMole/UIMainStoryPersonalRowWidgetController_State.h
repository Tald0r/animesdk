#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_State_TypeDefinitionIndex = 44730;

	enum class UIMainStoryPersonalRowWidgetController_State : ::System::Int32
	{
		Invalid = 0,
		Complete = 4,
		Locked = 1,
		Afk = 3,
		Ready = 2,
	};
}
