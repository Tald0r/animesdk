#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 54852;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		Overlap = 3,
		None = 0,
		Overflow = 2,
		CannotBag = 5,
		CannotSettle = 4,
		OutRange = 1,
	};
}
