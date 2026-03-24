#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_EState_TypeDefinitionIndex = 63990;

	enum class UIAutoBattlePVERowWidgetController_Data_EState : ::System::Int32
	{
		NotFinished = 2,
		Finished = 3,
		Lock = 1,
		Empty = 0,
	};
}
