#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_EState_TypeDefinitionIndex = 42100;

	enum class UIAutoBattlePVERowWidgetController_Data_EState : ::System::Int32
	{
		Empty = 0,
		Lock = 1,
		NotFinished = 2,
		Finished = 3,
	};
}
