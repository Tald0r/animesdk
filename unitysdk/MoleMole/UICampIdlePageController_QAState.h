#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController_QAState_TypeDefinitionIndex = 71288;

	enum class UICampIdlePageController_QAState : ::System::Int32
	{
		NoNeedToRestart = 3,
		CanStart = 0,
		Processing = 1,
		CanRestart = 2,
	};
}
