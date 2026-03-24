#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 74246;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		CannotBag = 5,
		Overlap = 3,
		CannotSettle = 4,
		None = 0,
		Overflow = 2,
		OutRange = 1,
	};
}
