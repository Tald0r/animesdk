#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_PageController_ResultState_TypeDefinitionIndex = 44753;

	enum class UILevelResultV2_PageController_ResultState : ::System::Int32
	{
		Early_Out_Loop = 3,
		Normal_Fadein = 5,
		Out_Waiting_Loop = 4,
		None = 0,
		In_Waiting_Loop = 2,
		Short_FadeIn = 6,
		Prepare_FadeIn = 1,
	};
}
